#include "distribution.h"

//distribution function definition
#pragma omp declare simd simdlen(16)
float dist_func(const float alpha, const float rn) {
  return delta_max*sinf(alpha*rn)*expf(-rn*rn);
}