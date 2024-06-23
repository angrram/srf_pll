/*
 * File: srf_pll_arch.h
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

#ifndef RTW_HEADER_srf_pll_arch_h_
#define RTW_HEADER_srf_pll_arch_h_
#ifndef srf_pll_arch_COMMON_INCLUDES_
#define srf_pll_arch_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* srf_pll_arch_COMMON_INCLUDES_ */

#include "srf_pll.h"

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T v;                            /* '<Root>/v' */
} ExtU_srf_pll_arch_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T fault_id[2];                  /* '<Root>/fault_id' */
  real_T sine_angle;                   /* '<Root>/sine_angle' */
  real_T angle;                        /* '<Root>/angle' */
  real_T freq;                         /* '<Root>/freq' */
} ExtY_srf_pll_arch_T;

/* model data */
extern RT_MODEL_srf_pll_T stf_pll;

/* External inputs (root inport signals with default storage) */
extern ExtU_srf_pll_arch_T srf_pll_arch_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_srf_pll_arch_T srf_pll_arch_Y;

/* Model entry point functions */
extern void srf_pll_arch_initialize(void);

/* Exported entry point function */
extern void stf_pll_Input1(void);

/* Exported entry point function */
extern void stf_pll_Input2(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'srf_pll_arch'
 */
#endif                                 /* RTW_HEADER_srf_pll_arch_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
