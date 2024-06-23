/*
 * File: srf_pll.h
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

#ifndef RTW_HEADER_srf_pll_h_
#define RTW_HEADER_srf_pll_h_
#ifndef srf_pll_COMMON_INCLUDES_
#define srf_pll_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* srf_pll_COMMON_INCLUDES_ */

#include "fault_detection.h"
#include "pd_nf_pi_dvco.h"

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  MdlrefDW_pd_nf_pi_dvco_T Model_InstanceData;/* '<Root>/Model' */
} DW_srf_pll_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_srf_pll_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T th;                           /* '<Root>/th' */
  real_T sin_p;                        /* '<Root>/sin' */
  real_T fault[2];                     /* '<Root>/fault' */
  real_T freq;                         /* '<Root>/freq' */
} ExtY_srf_pll_T;

/* Block signals and states (default storage) */
extern DW_srf_pll_T srf_pll_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_srf_pll_T srf_pll_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_srf_pll_T srf_pll_Y;

/* Model entry point functions */
extern void srf_pll_initialize(void);

/* Exported entry point function */
extern void Input1(void);

/* Exported entry point function */
extern void Input2(void);

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
 * '<Root>' : 'srf_pll'
 */
#endif                                 /* RTW_HEADER_srf_pll_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
