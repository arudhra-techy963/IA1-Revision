#include <stdio.h>

int input();
int large(int x , int y, int z);
void output(int x, int y, int z, int result);

int main()
{
  int a,b,c;
  a = input();
  b = input();
  c = input();

  int largestNumber = large(a,b,c);

  output(a,b,c,largestNumber);
  return 0;
}

int input ()
{
  int x;
  printf("Enter number: ");
  scanf("%d", &x);
  return x;
}

int large(int x, int y, int z)
{
  int large;
  if (x >= y && x >= z)
      large = x;
  if (y >= x && y >= z)
      large = y;

  if (z >= y && z >= x)
      large = z;

  return large;

}

void output(int x , int y, int z, int result)
{
  printf("the largest number among %d,%d,%d id %d", x ,y ,z , result);
}