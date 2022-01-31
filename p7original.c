#include <stdio.h>

typedef struct complex{
  float real;
  float imaginery;
}complex;

complex input(){
  complex a;
  printf("enter your real part of the number");
  scanf("%f",&a.real);
  printf("enter your imaginery part of the number");
  scanf("%f",&a.imaginery);
  return a;
}


complex summ(complex a,complex b){
  complex sum;
  sum.real=a.real + b.real;
  sum.imaginery= a.imaginery+ b.imaginery;
  return sum;
}



void output(complex a,complex b,complex sum)
{
  printf("the sum of %0.1f + %0.1fi and %0.1f + %0.1fi is %0.1f + %0.1fi\n ",a.real, a.imaginery, b.real, b.imaginery, sum.real, sum.imaginery);
}

int main()
{
  complex a;
  complex b;
  complex sum;
  a= input();
  b= input();
  sum= summ(a,b);
  output(a,b,sum);
  return 0;
}