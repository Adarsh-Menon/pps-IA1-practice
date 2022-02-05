#include<stdio.h>
#include<math.h>

float input()
{
  float n;
  printf("Enter a number to find the sqaure root of: ");
  scanf("%f", &n);
  return n;
}

float sr(float n)
{
  float res,t;
  res = n/2;
  t = 0;
  while(fabs(res - t)>0.0000001)
  {
    t = res;
    res = ( (n/t) + t) / 2;
  }
  return res;
}
void output(float n, float sr_res)
{
  printf("Square root of given input %0.2f is = %0.2f \n", n, sr_res);
}

int main()
{
  float n, sr_res;
  n = input();
  sr_res = sr(n);
  output(n, sr_res);
  return 0;
}