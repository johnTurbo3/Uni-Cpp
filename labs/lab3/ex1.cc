/*--------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
              
#include "String.hh"

/*--------------------------------------------------------------------------*/
/* Example main program for exercise 3 of OOD & C++ course                  */
/* A. J. Stoddart                                                           */
/*                                                                          */
/*--------------------------------------------------------------------------*/

int main()
{
StringC s1("Hello World");
StringC s2("Goodbye, cruel world");

s1.Print();
s2.Print();

StringC s3=s1+s2;

s3.Print();
}

/*--------------------------------------------------------------------------*/
