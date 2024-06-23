/*
 * File: srf_pll_arch.c
 *
 * Code generated for Simulink model 'srf_pll_arch'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sun Jun 23 09:32:47 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Custom Processor->Custom Processor
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "srf_pll_arch.h"
#include "srf_pll.h"

/* External inputs (root inport signals with default storage) */
ExtU_srf_pll_arch_T srf_pll_arch_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_srf_pll_arch_T srf_pll_arch_Y;

/* model data */
RT_MODEL_srf_pll_T stf_pll;

/* Model step function for TID1 */
void stf_pll_Input1(void)              /* Explicit Task: stf_pll_Input1 */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/stf_pll_Input1' */

  /* ModelReference: '<Root>/stf_pll' incorporates:
   *  Inport generated from: '<Root>/In Bus Element'
   *  Outport generated from: '<Root>/Out Bus Element'
   *  Outport generated from: '<Root>/Out Bus Element3'
   *  Outport generated from: '<Root>/Out Bus Element1'
   *  Outport generated from: '<Root>/Out Bus Element2'
   */
  srf_pll_Input1(&stf_pll, &srf_pll_arch_U.v, &srf_pll_arch_Y.sine_angle,
                 &srf_pll_arch_Y.fault_id[0], &srf_pll_arch_Y.freq);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/stf_pll_Input1' */
}

/* Model step function for TID2 */
void stf_pll_Input2(void)              /* Explicit Task: stf_pll_Input2 */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/stf_pll_Input2' */

  /* ModelReference: '<Root>/stf_pll' incorporates:
   *  Inport generated from: '<Root>/In Bus Element'
   *  Outport generated from: '<Root>/Out Bus Element'
   *  Outport generated from: '<Root>/Out Bus Element3'
   *  Outport generated from: '<Root>/Out Bus Element1'
   *  Outport generated from: '<Root>/Out Bus Element2'
   */
  srf_pll_Input2(&stf_pll, &srf_pll_arch_U.v, &srf_pll_arch_Y.angle,
                 &srf_pll_arch_Y.sine_angle, &srf_pll_arch_Y.freq);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/stf_pll_Input2' */
}

/* Model initialize function */
void srf_pll_arch_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/stf_pll' */
  srf_pll_initialize(&stf_pll);

  /* SystemInitialize for ModelReference: '<Root>/stf_pll' */
  srf_pll_Init(&stf_pll);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
