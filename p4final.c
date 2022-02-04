#include<stdio.h>

int input(){
    int n;
    printf("Enter the given number");
    scanf("%d", &n);
    return n;
}

void arrayyy(int n,int a[n]){
  for(int i=0; i<n; i++){
    printf("enter the number\n");
    scanf("%d",&a[i]);
  }
}


int summ(int n, int a[n]){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return sum;
}

void output(int n,int a[n],int sum){
  for(int i=0; i<(n-1); i++){
    printf("%d+",a[i]);
  }
  printf("%d=%d\n",a[n-1],sum);
}

int main()
{
    int n = input();
    int a[n];
    arrayyy(n, a);
    int sum = summ(n, a);
    output(n, a, sum);
    return 0;
}