//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 5.4
// C/C++ source code generated on  : 09-Aug-2024 12:52:54
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include Files
#include "main.h"
#include "QuadSLS_PT_Controller_QSF.h"
#include "QuadSLS_PT_Controller_QSF_terminate.h"
#include "rt_nonfinite.h"

// Function Declarations
static void argInit_1x10_real_T(double result[10]);

static void argInit_1x12_real_T(double result[12]);

static void argInit_1x3_real_T(double result[3]);

static void argInit_3x4_real_T(double result[12]);

static double argInit_real_T();

static void main_QuadSLS_PT_Controller_QSF();

// Function Definitions
//
// Arguments    : double result[10]
// Return Type  : void
//
static void argInit_1x10_real_T(double result[10])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 10; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

//
// Arguments    : double result[12]
// Return Type  : void
//
static void argInit_1x12_real_T(double result[12])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 12; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

//
// Arguments    : double result[3]
// Return Type  : void
//
static void argInit_1x3_real_T(double result[3])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 3; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

//
// Arguments    : double result[12]
// Return Type  : void
//
static void argInit_3x4_real_T(double result[12])
{
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 3; idx0++) {
    for (int idx1{0}; idx1 < 4; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 3 * idx1] = argInit_real_T();
    }
  }
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_QuadSLS_PT_Controller_QSF()
{
  double dv1[12];
  double dv3[12];
  double dv[10];
  double dv2[3];
  double u[3];
  // Initialize function 'QuadSLS_PT_Controller_QSF' input arguments.
  // Initialize function input argument 'x'.
  // Initialize function input argument 'Kv'.
  // Initialize function input argument 'param'.
  // Initialize function input argument 'ref'.
  // Call the entry-point 'QuadSLS_PT_Controller_QSF'.
  argInit_1x10_real_T(dv);
  argInit_3x4_real_T(dv1);
  argInit_1x3_real_T(dv2);
  argInit_1x12_real_T(dv3);
  QuadSLS_PT_Controller_QSF(dv, dv1, dv2, dv3, u);
}

//
// Arguments    : int argc
//                char **argv
// Return Type  : int
//
int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_QuadSLS_PT_Controller_QSF();
  // Terminate the application.
  // You do not need to do this more than one time.
  QuadSLS_PT_Controller_QSF_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
