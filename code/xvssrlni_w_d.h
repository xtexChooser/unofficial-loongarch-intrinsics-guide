for (int i = 0; i < 4; i++) {
  if (i < 2) {
    u64 temp = (u64)b.dword[i] >> imm;
    dst.word[i] = clamp<u64>(temp, 0, 2147483647);
  } else {
    u64 temp = (u64)a.dword[i - 2] >> imm;
    dst.word[i] = clamp<u64>(temp, 0, 2147483647);
  }
}
for (int i = 4; i < 8; i++) {
  if (i < 6) {
    u64 temp = (u64)b.dword[i - 2] >> imm;
    dst.word[i] = clamp<u64>(temp, 0, 2147483647);
  } else {
    u64 temp = (u64)a.dword[i - 4] >> imm;
    dst.word[i] = clamp<u64>(temp, 0, 2147483647);
  }
}
