/*--------------------------------------------------------------------------*/
#ifndef String_hh
#define String_hh
 
/*--------------------------------------------------------------------------*/
 
class StringC 
{
    char *     ps;
  
  public:  
    
    // Constructors,  destructor, assignment
    // -------------------------------------
 
    StringC();
    // Null Constructor 
 
    StringC(const char pc[]);
    // Constructor from pointer to char, makes a copy
 
    StringC(const StringC & s);
    // Copy constructor
 
    StringC & operator=(const StringC & s);
    // Assignment 
 
    ~StringC();
    // Destructor
 
    // Operations
    // ----------
 
    void Print();  //
    // output to cout - this is deprecated, use << later!
 
    int Length();
    // return number of characters excluding trailing 0
 
    StringC & operator+=(const StringC & s);
    // concatenate


};
 
// -------------------------------------------------------------------------

StringC operator+(const StringC &q, const StringC& p);
// concatenates 2 strings

#endif
/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/
