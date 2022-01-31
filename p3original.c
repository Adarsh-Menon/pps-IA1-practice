#include<stdio.h>

int input(){
    int a;
    printf("enter your number\n");
    scanf("%d",&a);
    return a;
}

int sum(int a){
  int sum;
  sum=0;
  for(int i=1; i<=a; i++){
    sum=sum+i;
  }
  return sum;
}

void output(int a,int sum){
  for(int i=1; i<a; i++){
    printf("%d+\n",i);
  }
  printf("%d=%d",a,sum);
}

int main(){
  int a;
  int b;
  a=input();
  b=sum(a);
  output(a,b);
  return 0;
}