#include "common.h"

v128 vsrlrn_h_w(v128 a, v128 b) {
  v128 dst;
#include "vsrlrn_h_w.h"
  return dst;
}

void test() { FUZZ2(vsrlrn_h_w); }
