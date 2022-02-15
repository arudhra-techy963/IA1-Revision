#include <stdio.h>

float sqRoot(float n);
float input();
float output(float x, float y, float z,float result1,float result2, float result3);

int main()
{
  float a,b,c;
  a = input();
  b = input();
  c = input();

  float a1,b1,c1;
  a1 = sqRoot(a);
  b1 = sqRoot(b);
  c1 = sqRoot(c);

  output(a,b,c,a1,b1,c1);

}

float input()
{
    float x;
    printf("Enter number = ");
    scanf("%f", &x);
    return x;
}


//square root function
float sqRoot(float n)
{
  float x = n;
  float y = 1.0;

  if ( x < 0 )
  {
    printf ("-ve argument to squareRoot.\n");
    x = -1.0;
  }

  else
  {
    while (x > y)
    {
      x = (x + y) / 2;
      y = n / x;
    }
  }

  return x;
}

float output(float x, float y, float z, float result1, float result2, float result3)
{
    printf("sqrt of %.2f is %.2f\n", x, result1);
    printf("sqrt of %.2f is %.2f\n", y, result2);
    printf("sqrt of %.2f is %.2f\n", z, result3);
}