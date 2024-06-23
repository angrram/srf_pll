/*
 * File: srf_pll.c
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

#include "srf_pll.h"
#include "pd_nf_pi_dvco.h"
#include "fault_detection.h"

/* Block signals and states (default storage) */
DW_srf_pll_T srf_pll_DW;

/* External inputs (root inport signals with default storage) */
ExtU_srf_pll_T srf_pll_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_srf_pll_T srf_pll_Y;

/* Model step function for TID1 */
void Input1(void)                      /* Explicit Task: Input1 */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Input1' */

  /* ModelReference generated from: '<Root>/Model2' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/fault'
   *  Outport: '<Root>/freq'
   *  Outport: '<Root>/sin'
   */
  fault_detection(&srf_pll_U.Input, &srf_pll_Y.sin_p, &srf_pll_Y.freq,
                  &srf_pll_Y.fault[0]);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Input1' */
}

/* Model step function for TID2 */
void Input2(void)                      /* Explicit Task: Input2 */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Input2' */

  /* ModelReference generated from: '<Root>/Model' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/freq'
   *  Outport: '<Root>/sin'
   *  Outport: '<Root>/th'
   */
  pd_nf_pi_dvco(&srf_pll_U.Input, &srf_pll_Y.th, &srf_pll_Y.sin_p,
                &srf_pll_Y.freq, &(srf_pll_DW.Model_InstanceData.rtdw));

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Input2' */
}

/* Model initialize function */
void srf_pll_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  pd_nf_pi_dvco_initialize();

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Input2' */

  /* SystemInitialize for ModelReference generated from: '<Root>/Model' */
  pd_nf_pi_dvco_Init(&(srf_pll_DW.Model_InstanceData.rtdw));

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Input2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
