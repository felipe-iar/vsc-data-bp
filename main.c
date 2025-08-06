#include <intrinsics.h>

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
    __no_operation();
  }

  // __setLogBreak()
  while (c < 10)
  {
    c++;
  }
  
  return 0;
}
