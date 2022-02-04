#include<stdio.h>

float input(){
  float n;
  printf("enter the square root number\n");
  scanf("%f",&n);
  return n;
}

float sq(float n)
{
  float x = n;
  float y = 1;
  float e = 0.000001;
  while (x - y > e)
  {
    x  = (x + y) / 2;
    y = n / x; 
  }
  return x;
}
void output(float n, float s)
{
  printf("Square root of given input %0.2f is = %0.2f \n", n, s);
}

int main()
{
  float n, s;
  n = input();
  s = sq(n);
  output(n, s);
  return 0;
}