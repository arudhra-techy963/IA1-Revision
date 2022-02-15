#include <stdio.h>

void input();
int sum(int x, int y, int *result);
void output(int x, int y, int result);

int main()
{
  int *add;
  int a,b;
  
  input(&a,&b);

  int ans = sum(a,b,&add);

  output(a,b,ans);
  return 0;
}

void input(int *x, int *y)
{
  printf("enter 2 numbers: ");
  scanf("%d  %d", x, y);
}

int sum(int x,int y, int *result)
{
  *result = x + y;
  return *result;
}

void output(int x,int y, int result)
{
  printf("The answer of %d + %d = %d", x, y, result);
}
