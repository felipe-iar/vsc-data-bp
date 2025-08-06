int a = 0;
int b = 0;
int c = 0;

int main()
{
  // __setDataBreak()
  while (a < 0x0001FFFF)
  {
    a++;
  }
  
  // __setDataLogBreak()
  while (b < 100)
  {
    b++;
    for (unsigned int i = 0; i < 300; i++);
  }

  // __setLogBreak()
  while (c < 10)
  {
    c++;
  }
  
  return 0;
}
