#include <cmath>
#include <iostream>
#include <string>
#include <vector>
std::vector<double> inject(std::vector<double> x,const std::string& mode){if(mode=="drop")for(size_t i=0;i<x.size();i+=3)x[i]=0;else if(mode=="spike")for(size_t i=0;i<x.size();i+=5)x[i]+=4;else if(mode=="nan")x[x.size()/2]=NAN;return x;}
double score(const std::vector<double>& x){double s=0;for(size_t i=0;i<x.size();++i)if(std::isfinite(x[i]))s+=(i+1)*x[i];else return NAN;return s;}
int main(){std::vector<double>x{.1,.2,.3,.4,.5,.6,.7,.8,.9};for(auto m:{"drop","spike","nan"}){auto y=inject(x,m);std::cout<<m<<" baseline="<<score(x)<<" perturbed="<<score(y)<<"\n";}}
