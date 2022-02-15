#include<stdio.h>

typedef struct cmplx
{
  float real;
  float img;
}complex;

complex add(complex a, complex b);
complex add_n_complex(int n, complex c[n]);
complex input_complex();
void input_n_complex(int n, complex c[n]);
int get_n();
void output(int n, complex c[n], complex result);

int main()
{
  int n = get_n();

  complex c[n], res;
  input_n_complex(n, c);

  res = add_n_complex(n, c);

  output(n, c, res);

  return 0;
}

int get_n()
{
  int n;

  printf("Enter the number of complex numbers: ");
  scanf("%d", &n);

  return n;
}

complex input_complex()
{
    complex c;
    printf("\nEnter the real part: ");
    scanf("%f", &c.real);

    printf("Enter the imaginary part : ");
    scanf("%f", &c.img);

    return c;
}

void input_n_complex(int n, complex c[n])
{
    for(int i=0; i<n; i++)
    c[i] = input_complex();
}

complex add(complex a, complex b)
{
    complex res;
    res.real = a.real + b.real;
    res.img = a.img + b.img;
    return res;
}

complex add_n_complex(int n, complex c[n])
{
  complex res;
  res.img = 0;
  res.real = 0;

  for(int i=0; i<n; i++)
    res = add(res, c[i]);

  return res;
}

void output(int n, complex c[n], complex result)
{
  if(n==1)
  {
    printf("\ncomplex Number = %0.2f + %0.2fi\n",c[0].real, c[0].img);
    printf("the answer is %0.2f + %0.2fi\n",result.real, result.img);
  }

  else
  {
    printf("\n complex numbers are: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%0.2f + %0.2fi\n", c[i].real, c[i].img);
    }

    printf("\n the result= %0.2f + %0.2fi",result.real, result.img);
  }
}