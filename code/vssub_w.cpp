#include "common.h"

v128 vssub_w(v128 a, v128 b) {
  v128 dst;
#include "vssub_w.h"
  return dst;
}

void test() { FUZZ2(vssub_w); }
