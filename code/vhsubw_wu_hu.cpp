#include "common.h"

v128 vhsubw_wu_hu(v128 a, v128 b) {
  v128 dst;
#include "vhsubw_wu_hu.h"
  return dst;
}

void test() { FUZZ2(vhsubw_wu_hu); }
