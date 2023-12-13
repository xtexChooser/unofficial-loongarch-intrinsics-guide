for (int i = 0; i < 8; i++) {
  if (i < 4) {
    s32 temp = (s32)a.word[i] >> (b.word[i] & 31);
    dst.half[i] = clamp<s32>(temp, 0, 65535);
  } else {
    dst.half[i] = 0;
  }
}
for (int i = 8; i < 16; i++) {
  if (i < 12) {
    s32 temp = (s32)a.word[i - 4] >> (b.word[i - 4] & 31);
    dst.half[i] = clamp<s32>(temp, 0, 65535);
  } else {
    dst.half[i] = 0;
  }
}
