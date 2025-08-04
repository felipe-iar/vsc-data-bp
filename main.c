int a @ 0x20000000 = 1;
int b @ 0x20000004 = 1;
int c @ 0x20000008 = 3;

int main()
{
  int res = c;
  b++;
  res -= b;
  res -= a;
  return res;
}
