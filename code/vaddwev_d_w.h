for (int i = 0;i < 2;i++) {
  dst.dword[i] = (s64)(s32)a.word[2 * i] + (s64)(s32)b.word[2 * i];
}
