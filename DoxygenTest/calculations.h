/// calc.cpp 01 The brief class description of the class Calculations
    // THIS LINE ABOVE IS NOT INCLUDED IN DOXYGEN
/*
  This comment will be ignored by doxygen
  When writing /** this comment would overwrite the comment in the main.cpp
  It seems like the last comment red by doxygen with 'backslash mainpage' is the project description.
  The brief desciption above (the one with /// is then also included as the project description.

  112 The extended description of calculations.

  113 PROJECT_NAME bla --> this does nothing to the project name option in the doxygen program

  114 what about this
  \mainpage
  115 lets write the main description in the wrong file :p
  THIS WORKS
  \todo and will this?
  116 will this be written in a todo list?
  */

/**
  extended description of Calculations.
  */
/*Both the present brief /// and extended /** description are NOT the class descritptions of the class calculations !!!
*/

#ifndef CALCULATIONS_H
#define CALCULATIONS_H

///  A short description of the class Calculations (in the .h file).
/**
  A more elaborate class description of the class Calculations
  (in the .h file).
  So to have a description of a class, it needs to be in the .h file, above the class className part of the code.
  It's also possible to create a hyperlink to another class by mentioning it correctly:
  MainWindow and not mainwindow.
*/
class Calculations
{
public:
    Calculations();
    int sum(int, int);///< \todo a todo in the .h file behind a var
    double sum(double, double);
    int substract(int, int);
    int multiply(int, int); ///< simple description in .h
    double multiply(double, double);
    /// the short description of aVeryDifficultCalculation.
    void aVeryDifficultCalculation();

private:
    int result; ///< a int where you can store the results of the calculations.
    int aVar; /*!< Detailed description after the member */
    // private attributes ARE NOT SHOWN

public:
    int a; ///< var1 when doing calculations. This is a SIMPEL documentation
    int b; //!< var2 when doing calculations
    int anotherVar; ///< SIMPEL description (this DOESN'T work. The entire description simple and extended is put in the extended part of doxygen.  /*!< DETAILED description: No simple description is shown. */
    /// aFourthVar: this is the description of that var.
    int aFourthVar;
    /// aFithVar: short description
    double aFithVar; /**< aFithVar: long description */
};

#endif // CALCULATIONS_H
