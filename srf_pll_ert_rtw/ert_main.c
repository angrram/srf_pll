/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'srf_pll'.
 *
 * Model version                  : 1.31
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sun Jun 23 10:34:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: AMD->Athlon 64
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include <stdio.h>
#include "srf_pll.h"                   /* Model header file */

/* Example use case for call to exported function: Input1 */
extern void sample_usage_Input1(void);
void sample_usage_Input1(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Input1();

  /* Read function outputs here */
}

/* Example use case for call to exported function: Input2 */
extern void sample_usage_Input2(void);
void sample_usage_Input2(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Input2();

  /* Read function outputs here */
}

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  srf_pll_initialize();
  while (1) {
    /*  Perform application tasks here. */
  }

  /* The option 'Remove error status field in real-time model data structure'
   * is selected, therefore the following code does not need to execute.
   */
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
