#include <stdio.h>
void binary(int n);

int main()
{
  int n;
  scanf("%d",&n);
  
  printf("The Binary value is:");
  binary(n);
}

void binary(int n)
{
   int b[8]={0};
   int index=7;
   while(n>=1)
   {
     if(n%2==0)
     {
         b[index--]=0;
     }
     else
     {
         b[index--]=1;
     }
     n/=2;
   }
   
   for(int u=0;u<8;u++)
   {
      printf("%d",b[u]);
   }
}