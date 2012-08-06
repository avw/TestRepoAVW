/// The brief class description of the class Calculations
/**
  The extended description of calculations.

  PROJECT_NAME bla --> this does nothing to the project name option in the doxygen program

  what about this
  \mainpage
  lets write the main description in the wrong file :p
  THIS WORKS
  \todo and will this?
  will this be written in a todo list?
  */

#ifndef CALCULATIONS_H
#define CALCULATIONS_H

class Calculations
{
public:
    Calculations();
    int sum(int, int);
    double sum(double, double);
    int substract(int, int);
    int multiply(int, int); ///< \todo a todo in the .h file behind a var
    double multiply(double, double);

private:
    int result; ///< a int where you can store the results of the calculations.
    int aVar; /*!< Detailed description after the member */
    // private attributes ARE NOT SHOWN

public:
    int a; ///< var1 when doing calculations. This is a SIMPEL documentation
    int b; //!< var2 when doing calculations
    int anotherVar; ///< SIMPEL description (THIS DOENST WORK) /*!< DETAILED description after the member (this DOES work) */
};

#endif // CALCULATIONS_H
