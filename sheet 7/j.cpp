#include<stdio.h>
void num(int i, int n, long long int  multi)
{
    if(i>n)
        {
 
   printf("%lld", multi);}
   else
  num(i+1, n, multi*i);
 
}
int main(){
int n;
scanf("%d",&n);
num(1 , n, 1);
}
