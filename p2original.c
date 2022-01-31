#include<stdio.h>

  void input(int *a, int *b, int *c)
  {
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);
    printf("Enter the third number: ");
    scanf("%d", c);
  }


 void cmp(int a,int b,int c,int *largest){
   if(a>=b&&a>c)
       {
         *largest=a;
       }
   else if(b>c)
       {
          *largest=b;
       }
   else
       {
          *largest=c;
       }
 }


void output(int largest)
  {
    printf("The largest number present is: %d", largest);
  }


  int main()
  {
    int a, b ,c, largest;
    input(&a, &b, &c);
    cmp(a, b, c, &largest);
    output(largest);
    return 0;
  }