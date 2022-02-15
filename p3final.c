#include <stdlib.h>

int input();
int sum_n(int n);
void output(int n, int sum);

int main()
{
  int n = input();

  int ans = sum_n(n);

  output(n, ans);

  return 0;
}

int input()
{
  int x;
  printf("enter a number: ");
  scanf("%d", &x);
  return x;
}

int sum_n(int n)
{
  int i = 1;
  int sum = 0;
  while (i <= n)
    {
      sum += i;
      ++i;
    }
  return sum;
}

void output(int n, int sum)
{
  printf("Sum of %d natural numbers = %d", n, sum);
}