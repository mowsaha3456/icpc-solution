#include<stdio.h>
 
void solve(int i,int n)
 
{
 
if(i<=n) {
 
printf("I love Recursion\n");
 
solve(i+1,n);
 
}
 
}
 
int main()
 
{
 
int n;
 
scanf("%d",&n);
 
solve (1,n);
 
}

