%module last 

%{
#include "last.h"
%}

%include "std_string.i"
typedef std::string String;
using namespace std;

%include "std_vector.i"
%template(SVector) std::vector<std::string>;
%template(FVector) std::vector<float>;

%include "last.h"
