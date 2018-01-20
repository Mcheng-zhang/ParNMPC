/*
 * File: GEN_Func_Hux.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 21-Jan-2018 01:45:16
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "ParNMPC.h"
#include "GEN_Func_Hux.h"
#include <stdio.h>
#include "omp.h"
#include "stdio.h"

/* Function Definitions */

/*
 * GEN_FUNC_HUX
 *     HUX = GEN_FUNC_HUX(IN1,IN2)
 * Arguments    : const double in1[7]
 *                double Hux[4]
 * Return Type  : void
 */
void GEN_Func_Hux(const double in1[7], double Hux[4])
{
  double x[4];
  int k;

  /*     This function was generated by the Symbolic Math Toolbox version 7.0. */
  /*     21-Jan-2018 01:44:51 */
  x[0] = 0.0;
  x[1] = 0.0;
  x[2] = in1[1] * -0.083333333333333329;
  x[3] = 0.0;
  for (k = 0; k < 4; k++) {
    Hux[k] = x[k];
  }
}

/*
 * File trailer for GEN_Func_Hux.c
 *
 * [EOF]
 */
