/*--------------------------------------------------------------------------*/

#include <string.h>
#include  <iostream>
using namespace std;

#include "String.hh"

const int trace=1;

/*--------------------------------------------------------------------------*/
/*-------- Constructors, etc -----------------------------------------------*/
/*--------------------------------------------------------------------------*/
// Null Constructor 

StringC::StringC() 
{
   ps=new char[1];
  *ps='\0';
   if (trace) cout << "---Null Cons\n";
}

/*--------------------------------------------------------------------------*/
// Constructor from pointer to char, makes a copy

StringC::StringC(const char pc[]) 
{
  ps=new char[1 + strlen(pc)];  // lazy! no error checking
  strcpy(ps,pc);
  if (trace) cout << "---Std Cons:" << ps << endl;
}

/*--------------------------------------------------------------------------*/
// Copy constructor

StringC::StringC(const StringC & s)
{
  ps=new char[1 + strlen(s.ps)]; 
  strcpy(ps,s.ps);
  if (trace) cout << "---Copy Cons:" << ps << endl;
}

/*--------------------------------------------------------------------------*/
// Assignment 

StringC & 
StringC::operator=(const StringC & s)
{
  if (this != &s) {
    delete[] ps;
    ps=new char[1 + strlen(s.ps)]; 
    strcpy(ps,s.ps);
  }
  return *this;
}

/*--------------------------------------------------------------------------*/
// Destructor

StringC::~StringC()
{
  if (trace) cout << "---Dest:" << ps << endl;
  delete[] ps;
  
}

/*--------------------------------------------------------------------------*/
/*------Operations----------------------------------------------------------*/
/*--------------------------------------------------------------------------*/

StringC &
StringC::operator+=(const StringC & s)
{
  char * temp=new char[strlen(ps)+strlen(s.ps)+1];
  strcpy(temp,ps);
  strcat(temp,s.ps);
  delete[] ps;
  ps=temp;

  return *this;
}

/*--------------------------------------------------------------------------*/

void
StringC::Print()
{
  cout << ps << endl;
}

/*--------------------------------------------------------------------------*/

int 
StringC::Length()
{
  return strlen(ps);
}

/*--------------------------------------------------------------------------*/
/*------Other functions-----------------------------------------------------*/
/*--------------------------------------------------------------------------*/

StringC operator+(const StringC &q, const StringC& p)
{
  StringC temp(q);
  temp += p;
  return temp;
}

/*--------------------------------------------------------------------------*/

