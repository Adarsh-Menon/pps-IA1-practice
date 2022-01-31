#include<stdio.h>

void input(char *m, char *n)
{
    printf("Enter the First String: ");
    scanf("%s", m);
    printf("Enter the Second String: ");
    scanf("%s", n);
}



int strcmp(char *m, char *n)
{
    int i,total;
    for(i=0; m[i] && (m[i] == n[i]); i++);
    total=m[i]-n[i];
    return total;
}


void output(char *m, char *n, int ans)
{
    if(ans < 0)
    {
      printf("%s is great than %s\n", n , m);
    }
    else if(ans > 0)
    {
      printf("%s is great than %s\n", m , n);
    }
    else
    {
       printf("%s is = to %s\n",n,m);
    }
}


int main()
{
  char m[20], n[20];
  int ans;
  input(m,n);
  ans = strcmp(m,n);
  output(m , n, ans);
  return 0;
}