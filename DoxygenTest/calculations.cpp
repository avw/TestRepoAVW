/*
  This comment is not recognized by doxygen
  In this doc you can see what is recognized by doxygen (standard settings).
  */


/// You might think this is the class description, but it isnt. This is the brief description of the following funtion: the constructor
/**
  The extended description of the first following function, the constructor in this case.
  To write the class description, you must do this in the .h file
  */

#include "calculations.h"

Calculations::Calculations()
{
}

// a method to calculate the sum of 2 numbers. THIS COMMENT IS NOT STANDARD RECOGNIZED BY DOXYGEN
/*
  NEITHER IS THIS COMMENT. TO GET THE COMMENT, USE THE CORRECT COMMENT WAYS (SEE DOXYGEN DOCUMENTATION)
  */
/// A method to calculate the sum of 2 ints and returns the result as an int.
int Calculations::sum(int a, int b)
{
    return a+b;
}

/*
  This comment is not recognized by doxygen you need /** or /*!

  A method to calculate the sum of 2 doubles (this is the short description (till the point)).
  This belongs to the extended comment (everything after the first point (.)).
  You can also add parameters and return values
  @param a The first double needed for the summation.
  @param b The second double needed for the summation.
  @return the sum of the 2 doubles is returned by this function as a double.

  The comment about the brief description WOULD INDEED BE THE CASE when you choose the correct options
  in the configuration file --> If JAVADOC_AUTOBRIEF is set to YES in the configuration file.
  */

/// A method to calculate the sum of 2 doubles (this is the short description (till the point)).
/**
This belongs to the extended comment (everything after the first point (.)). This is a longer explanation of what the function does.
You can keep writing documentation here and in the functions overview it will not be showed, but it will be showed in the lower part of the html page
where the more detailed comments are shown.
You can also add parameters and return values
@param a The first double needed for the summation.
@param b The second double needed for the summation.
@return the sum of the 2 doubles is returned by this function as a double.
@sa sum(int, int) (sa stands for see also and doxygen links to the functions you put here).
@sa su(int, int), sum (int, int  ) (!!! THIS NEEDS TO BE THE SAME AS THE FUNCTION, ELSE DOXYGEN WILL NOT RECOGNIZE IT).

No configparameter needs to be set to make the full and brief description work here.
*/
double Calculations::sum(double a, double b)
{
    return a+b;
}

//! The same way to give a short description as with ///
/*!
  The same way as /** to give a extended description
  \todo a recognized todo in the .c file ?
  */
int Calculations::substract(int a, int b)
{
    return a-b;
    /**
      \todo an unrecognized todo in a function?
      You can write todo's anywhere.
      */
}


/*!
  The same way as /** to give a extended description.
  The extended descripton for this fucntion is put in the cpp file.
  */
int Calculations::multiply(int a /**< [in] docs for input parameter v. */, int b)
{
    result = a*b;
    return result;
}

double Calculations::multiply(double a, double b)
{
    return a*b;
}

/**
  This is the extended description of the aFunctionAfterDefine function.
  */
        #ifdef A_DEFINE
void Calculations::aFunctionAfterDefine(int theVariable)
{
}
        #endif
