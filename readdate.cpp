#include <iostream>
#include <fstream>
#include <rarray>
#include <rarrayio>
#include <string>
#include <sstream>
#include <complex>
//#include <fftw3.h>
#include "filename.h"

using  namespace std;

int main()
{
  //const int n = 16384;
  //complex<double> f[n],fhat[n];
  string *name;
	name = create_filename();
  ifstream f(name[0]);//open a file
  //create empty arrays
  rarray<double,1> times;
  rarray<complex<double>,1> signal;
  // read in the signal;
  f >> times;
  f >> signal;
  cout<<times;
  cout<<signal;
   
   return 0;
}