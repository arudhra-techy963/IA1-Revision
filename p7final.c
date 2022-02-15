#include <stdio.h>

typedef struct cmplx
{
    float real;
    float imaginary;
}complex;

complex input();
complex add(complex a, complex b);
void output(complex a,  complex b, complex sum);

int main()
{
    complex c1, c2, sum;

    c1 = input();
    c2 = input();
    
    sum = add(c1, c2);
    output(c1, c2, sum);
    return 0;
}


complex input()
{
    complex c;
    printf("Enter the Real part: ");
    scanf("%f", &c.real);
    printf("Enter the Imaginary part : ");
    scanf("%f", &c.imaginary);
    return c;
}

complex add(complex a, complex b)
{
    complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(complex a, complex b, complex sum)
{
    printf("\n1st complex number = %0.1f + %0.1fi\n",a.real, a.imaginary);
    printf("2nd complex number = %0.1f + %0.1fi\n",b.real, b.imaginary);
    printf("the answer %.2f + %.2fi: \n", sum.real, sum.imaginary);
}