void cond(long a, long *p) {
  if (p && a > *p)
    *p = a;
}

void cond_goto(long a, long *p) {
  if (!p)
    goto end;
  if (a <= *p)
    goto end;
  *p = a;
end:;
}
