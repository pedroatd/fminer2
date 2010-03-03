// bbrc.cpp
// modified 2010
// (c) 2010 by Andreas Maunz, andreas@maunz.de, feb 2010

/*
    This file is part of LibBbrc (libbbrc).

    LibBbrc is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    LibBbrc is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with LibBbrc.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "bbrc.h"
#include "globals.h"


// 1. Constructors and Initializers

Bbrc::Bbrc() : init_mining_done(false) {
  if (!fm::instance_present) {
      fm::database = NULL; fm::statistics = NULL; fm::chisq = NULL; fm::result = NULL;
      Reset();
      Defaults();
      fm::instance_present=true;
      if (getenv("FMINER_LAZAR")) fm::do_yaml = false;
      if (getenv("FMINER_SMARTS")) fm::gsp_out = false; 
      if (getenv("FMINER_PVALUES")) fm::pvalues = true;
  }
  else {
    cerr << "Error! Cannot create more than 1 instance." << endl; 
    exit(1);
  }
}

Bbrc::Bbrc(int _type, unsigned int _minfreq) : init_mining_done(false) {
  if (!fm::instance_present) {
      fm::database = NULL; fm::statistics = NULL; fm::chisq = NULL; fm::result = NULL;
      Reset();
      Defaults();
      SetType(_type);
      SetMinfreq(_minfreq);
      fm::instance_present=true;
      if (getenv("FMINER_LAZAR")) fm::do_yaml = false;
      if (getenv("FMINER_SMARTS")) fm::gsp_out = false; 
      if (getenv("FMINER_PVALUES")) fm::pvalues = true;
  }
  else {
    cerr << "Error! Cannot create more than 1 instance." << endl; 
    exit(1);
  }

}

Bbrc::Bbrc(int _type, unsigned int _minfreq, float _chisq_val, bool _do_backbone) : init_mining_done(false) {
  if (!fm::instance_present) {
      fm::database = NULL; fm::statistics = NULL; fm::chisq = NULL; fm::result = NULL;
      Reset();
      Defaults();
      SetType(_type);
      SetMinfreq(_minfreq);
      SetChisqSig(_chisq_val);
      SetBackbone(_do_backbone);
      fm::instance_present=true;
      if (getenv("FMINER_LAZAR")) fm::do_yaml = false;
      if (getenv("FMINER_SMARTS")) fm::gsp_out = false; 
      if (getenv("FMINER_PVALUES")) fm::pvalues = true;

  }
  else {
    cerr << "Error! Cannot create more than 1 instance." << endl; 
    exit(1);
  }

}

Bbrc::~Bbrc() {
    if (fm::instance_present) {
        delete fm::database;
        delete fm::statistics; 
        delete fm::chisq; 
        delete fm::ks;
        delete fm::graphstate;
        delete fm::closelegoccurrences;
        delete fm::legoccurrences;

        fm::candidatelegsoccurrences.clear();
        fm::candidatecloselegsoccs.clear();
        fm::candidatecloselegsoccsused.clear();

        fm::instance_present=false;
    }
}

void Bbrc::Reset() { 
    if (fm::instance_present) {
        delete fm::database;
        delete fm::statistics;
        delete fm::chisq;
        delete fm::ks;
        delete fm::graphstate;
        delete fm::closelegoccurrences;
        delete fm::legoccurrences;
    }
    fm::database = new Database();
    fm::statistics = new Statistics();
    fm::chisq = new ChisqConstraint(3.84146);
    fm::ks = new KSConstraint(0.95);
    fm::graphstate = new GraphState();
    fm::closelegoccurrences = new CloseLegOccurrences();
    fm::legoccurrences = new LegOccurrences();

    fm::candidatelegsoccurrences.clear();
    fm::candidatecloselegsoccs.clear();
    fm::candidatecloselegsoccsused.clear();

    SetChisqActive(true); 
    fm::result = &r;
    comp_runner=0; 
    comp_no=0; 
    init_mining_done = false;
}

void Bbrc::Defaults() {
    fm::minfreq = 2;
    fm::type = 2;
    fm::chisq->sig = 3.84146;
    fm::do_backbone = true;
    fm::adjust_ub = true;
    fm::do_pruning = true;
    fm::aromatic = true;
    fm::refine_singles = false;
    fm::do_output=true;
    fm::bbrc_sep=false;
    fm::regression=false;

    fm::updated = true;
    fm::do_yaml=true;
    fm::pvalues=false;
    fm::gsp_out=true;
    fm::console_out = false;
}


// 2. Getter methods

int Bbrc::GetMinfreq(){return fm::minfreq;}
int Bbrc::GetType(){return fm::type;}
bool Bbrc::GetBackbone(){return fm::do_backbone;}
bool Bbrc::GetDynamicUpperBound(){return fm::adjust_ub;}
bool Bbrc::GetPruning() {return fm::do_pruning;}
bool Bbrc::GetConsoleOut(){return fm::console_out;}
bool Bbrc::GetAromatic() {return fm::aromatic;}
bool Bbrc::GetRefineSingles() {return fm::refine_singles;}
bool Bbrc::GetDoOutput() {return fm::do_output;}
bool Bbrc::GetBbrcSep(){return fm::bbrc_sep;}
bool Bbrc::GetChisqActive(){return fm::chisq->active;}
float Bbrc::GetChisqSig(){return fm::chisq->sig;}
bool Bbrc::GetRegression() {return fm::regression;}



// 3. Setter methods

void Bbrc::SetMinfreq(int val) {
    // parameters not regarded in integrity constraints
    if (val < 1) { cerr << "Error! Invalid value '" << val << "' for parameter minfreq." << endl; exit(1); }
    if (val > 1 && GetRefineSingles()) { cerr << "Warning! Minimum frequency of '" << val << "' could not be set due to activated single refinement." << endl;}
    fm::minfreq = val;
}

void Bbrc::SetType(int val) {
    // parameters not regarded in integrity constraints
    if ((val != 1) && (val != 2)) { cerr << "Error! Invalid value '" << val << "' for parameter type." << endl; exit(1); }
    fm::type = val;
}

void Bbrc::SetBackbone(bool val) {
    // internal: chisq active
    if (val && !GetChisqActive()) {
        cerr << "Warning! BBRC mining could not be enabled due to deactivated significance criterium." << endl;
    }
    // -------- !db --------
    else if (!val && GetDynamicUpperBound()) {
        cerr << "Notice: Disabling dynamic upper bound pruning due to switched-off BBRC mining." << endl;
        SetDynamicUpperBound(false);
        fm::do_backbone = val;
    }
    // -------- r!b ---------
    else if (val && GetBbrcSep()) {
        cerr << "Notice: Disabling BBRC separator due to enabled BBRC mining." << endl;
        SetBbrcSep(false);
        fm::do_backbone = val;
    }
    else fm::do_backbone = val;
}

void Bbrc::SetDynamicUpperBound(bool val) {
    // -------- !db ---------
    if (val && !GetBackbone()) {
        cerr << "Warning! Dynamic upper bound pruning could not be enabled due to disabled BBRC mining." << endl;
    }
    // internal: chisq active
    else if (val && !GetChisqActive()) {
        cerr << "Warning! Dynamic upper bound pruning could not be enabled due to deactivated significance criterium." << endl;
    }
    // -------- !du ---------
    else if (val && !GetPruning()) {
        cerr << "Warning! Dynamic upper bound pruning could not be enabled due to deactivated statistical metric pruning." << endl;
    }
    else {
        fm::adjust_ub=val; 
    }
}

void Bbrc::SetPruning(bool val) {
    // internal: chisq active
    if (val && !GetChisqActive()) {
        cerr << "Warning! Statistical metric pruning could not be enabled due to deactivated significance criterium." << endl;
    }
    else {
        // ---------- !du -----------
        if (!val && GetDynamicUpperBound()) {
            cerr << "Notice: Disabling dynamic upper bound pruning due to disabled static upper bound pruning." << endl;
            SetDynamicUpperBound(false); 
        }
        // --------- ru -------
        if (!val && GetBbrcSep()) {
            cerr << "Notice: Disabling BBRC separator due to disabled static upper bound pruning." << endl;
            SetBbrcSep(false);
        }
        fm::do_pruning=val;
    }
}

void Bbrc::SetConsoleOut(bool val) {
    // console out not switched by fminer
    if (val) {
        if (GetBbrcSep()) cerr << "Warning! Console output could not be enabled due to enabled BBRC separator." << endl;
        else fm::console_out=val;
    }
}

void Bbrc::SetAromatic(bool val) {
    fm::aromatic = val;
}

void Bbrc::SetRefineSingles(bool val) {
    fm::refine_singles = val;
    // parameters not regarded in integrity constraints
    if (GetRefineSingles() && GetMinfreq() > 1) {
        cerr << "Notice: Using minimum frequency of 1 to refine singles." << endl;
        SetMinfreq(1);
    }
}

void Bbrc::SetDoOutput(bool val) {
    fm::do_output = val;
}

void Bbrc::SetBbrcSep(bool val) {
    //  ------- r!b ---------
    if (val && GetBackbone()) { 
        cerr << "Warning! BBRC separator could not be enabled due to enabled BBRC mining." << endl;
    }
    // -------- ru ---------
    if (val && !GetPruning()) {
        cerr << "Warning! BBRC separator could not be enabled due to disabled statistical metric pruning." << endl;
    }
    else {
        fm::bbrc_sep=val;
        if (GetBbrcSep()) {
            // console out not switched by fminer
            if (GetConsoleOut()) {
                 cerr << "Notice: Disabling console output, using result vector." << endl;
                 SetConsoleOut(false);
            }
        }
    }
}

void Bbrc::SetChisqActive(bool val) {
    fm::chisq->active = val;
    // chisq active not switched by fminer
    if (!GetChisqActive()) {
        cerr << "Notice: Disabling dynamic upper bound pruning due to deactivated significance criterium." << endl;
        SetDynamicUpperBound(false); //order important
        cerr << "Notice: Disabling BBRC mining due to deactivated significance criterium." << endl;
        SetBackbone(false);
        cerr << "Notice: Disabling statistical metric pruning due to deactivated significance criterium." << endl;
        SetPruning(false);
        SetRegression(false);
    }
}

void Bbrc::SetChisqSig(float _chisq_val) {
    // parameters not regarded in integrity constraints
    if (_chisq_val < 0.0 || _chisq_val > 1.0) { cerr << "Error! Invalid value '" << _chisq_val << "' for parameter chisq." << endl; exit(1); }
    fm::chisq->sig = gsl_cdf_chisq_Pinv(_chisq_val, 1);
}

void Bbrc::SetRegression(bool val) {
    fm::regression = val;
    if (fm::regression) {
         if (!GetBackbone()) {
    
            SetBackbone(true);
         }
         if (GetPruning()) {
            cerr << "Notice: Disabling statistical metric pruning due to activated regression." << endl;
            SetPruning(false);
         }
    }
}


// 4. Other methods

vector<string>* Bbrc::MineRoot(unsigned int j) {
    fm::result->clear();
    if (!init_mining_done) {
        if (fm::chisq->active) {
            each (fm::database->trees) {
                if (fm::database->trees[i]->activity == -1) {
                    cerr << "Error! ID " << fm::database->trees[i]->orig_tid << " is missing activity information." << endl;
                    exit(1);
                }
            }
        }
        fm::database->edgecount (); 
        fm::database->reorder (); 
        initLegStatics (); 
        fm::graphstate->init (); 
        if (fm::bbrc_sep && !fm::do_backbone && fm::do_output && !fm::console_out) (*fm::result) << fm::graphstate->sep();
        init_mining_done=true; 
        cerr << "Settings:" << endl \
             << "---" << endl \
             << "Minimum frequency: " << GetMinfreq() << endl \
             << "Type: " << GetType() << endl \
             << "Chi-square active (chi-square-value): " << GetChisqActive() << " (" << GetChisqSig()<< ")" << endl \
             << "BBRC mining: " << GetBackbone() << endl \
             << "statistical metric (dynamic upper bound) pruning: " << GetPruning() << " (" << GetDynamicUpperBound() << ")" << endl \
             << "---" << endl \
             << "Refine patterns with single support: " << GetRefineSingles() << endl \
             << "Do output: " << GetDoOutput() << endl \
             << "BBRC sep: " << GetBbrcSep() << endl \
             << "Regression: " << GetRegression() << endl \
             << "---" << endl;
    }


    if (j >= fm::database->nodelabels.size()) { cerr << "Error! Root node " << j << " does not exist." << endl;  exit(1); }
    if ( fm::database->nodelabels[j].frequency >= fm::minfreq && fm::database->nodelabels[j].frequentedgelabels.size () ) {
        Path path(j);
        path.expand(); // mining step
    }
    return fm::result;
}

void Bbrc::ReadGsp(FILE* gsp){
    fm::database->readGsp(gsp);
}

bool Bbrc::AddCompound(string smiles, unsigned int comp_id) {
    bool insert_done=false;
    if (comp_id<=0) { cerr << "Error! IDs must be of type: Int > 0." << endl;}
    else {
        if (fm::database->readTreeSmi (smiles, comp_no, comp_id, comp_runner)) {
            insert_done=true;
            comp_no++;
        }
        else { cerr << "Error on compound " << comp_runner << ", id " << comp_id << "." << endl; }
        comp_runner++;
    }
    return insert_done;
}

/* KS:
bool Bbrc::AddActivity(bool act, unsigned int comp_id) {
    if (fm::database->trees_map[comp_id] == NULL) { 
        cerr << "No structure for ID " << comp_id << ". Ignoring entry!" << endl; return false; 
    }
    else {
        if ((fm::database->trees_map[comp_id]->activity = act)) AddChiSqNa();
        else AddChiSqNi();
        return true;
    }
}
*/

// KS: recognize regr field
bool Bbrc::AddActivity(float act, unsigned int comp_id) {
    if (fm::database->trees_map[comp_id] == NULL) { 
        cerr << "No structure for ID " << comp_id << ". Ignoring entry!" << endl; return false; 
    }
    else {
        if (!fm::regression) {
            if ((fm::database->trees_map[comp_id]->activity = act) == 1.0) AddChiSqNa();
            else AddChiSqNi();
        }
        else {
            if ((fm::database->trees_map[comp_id]->activity = act)) AddKS(act);
        }
        return true;
    }
}


// the class factories
extern "C" Fminer* create0() {
    return new Bbrc();
}
extern "C" Fminer* create2(int _type, unsigned int _minfreq) {
    return new Bbrc(_type, _minfreq);
}
extern "C" Fminer* create4(int _type, unsigned int _minfreq, float _chisq_val, bool _do_backbone) {
    return new Bbrc(_type, _minfreq, _chisq_val, _do_backbone);
}
extern "C" void destroy(Fminer* f) {
    delete f;
}

extern "C" void usage() {
    cerr << endl;
    cerr << "Options 1 (BBRC mining using dynamic upper bound pruning): " << endl;
    cerr << "       [-f minfreq] [-l type] [-s] [-a] [-o] [-n] [-d [-b [-r] | -b [-u] ] ] [-p p_value]" << endl;
    cerr << endl;
    cerr << "Options 2 (Frequent subgraph mining): " << endl;
    cerr << "       [-f minfreq] [-l type] [-s] [-a] [-o] [-n] [-r]" << endl;
    cerr << endl;
}
