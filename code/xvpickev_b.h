for (int i = 0; i < 32; i++) {
  dst.byte[i] = (i < 16) ? b.byte[i * 2] : a.byte[(i - 16) * 2];
}
