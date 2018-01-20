/*
 * File: Func_Hxx_FD.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 21-Jan-2018 01:45:16
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "ParNMPC.h"
#include "Func_Hxx_FD.h"
#include <stdio.h>
#include "omp.h"
#include "stdio.h"

/* Function Definitions */

/*
 * Arguments    : const double in1[7]
 *                double Hxx[4]
 * Return Type  : void
 */
void Func_Hxx_FD(const double in1[7], double Hxx[4])
{
  double Hxdt[2];
  int i;
  double ei[7];
  int b_i;
  double b_ei[2];

  /* GEN_FUNC_HXDT */
  /*     OUT1 = GEN_FUNC_HXDT(IN1,IN2) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.0. */
  /*     21-Jan-2018 01:44:50 */
  Hxdt[0] = in1[1] * -0.083333333333333329 + in1[5] * 0.83333333333333337;
  Hxdt[1] = (in1[0] * 0.083333333333333329 + in1[6] * 0.83333333333333337) -
    in1[1] * in1[3] * 0.083333333333333329;
  for (i = 0; i < 2; i++) {
    for (b_i = 0; b_i < 7; b_i++) {
      ei[b_i] = 0.0;
    }

    ei[5 + i] = 1.0;
    for (b_i = 0; b_i < 7; b_i++) {
      ei[b_i] = in1[b_i] + ei[b_i] * 0.0001;
    }

    /* GEN_FUNC_HXDT */
    /*     OUT1 = GEN_FUNC_HXDT(IN1,IN2) */
    /*     This function was generated by the Symbolic Math Toolbox version 7.0. */
    /*     21-Jan-2018 01:44:50 */
    b_ei[0] = ei[1] * -0.083333333333333329 + ei[5] * 0.83333333333333337;
    b_ei[1] = (ei[0] * 0.083333333333333329 + ei[6] * 0.83333333333333337) - ei
      [1] * ei[3] * 0.083333333333333329;
    for (b_i = 0; b_i < 2; b_i++) {
      Hxx[b_i + (i << 1)] = (b_ei[b_i] - Hxdt[b_i]) / 0.0001;
    }
  }
}

/*
 * File trailer for Func_Hxx_FD.c
 *
 * [EOF]
 */
