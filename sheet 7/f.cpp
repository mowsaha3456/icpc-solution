#include <stdio.h>
 
int a[1005];
 
void solve(int i, int n)
 
{
 
if(i>=n)
 
return;
 
solve(i+1,n);
 
if(i%2==0)
 
printf("%d ",a[i]);
 
}
 
int main()
 
{
 
int n;
 
scanf("%d",&n);
 
for(int i=0; i<n; i++) scanf("%d", &a[i]);
 
solve(0,n);
 
return 0;
 
}

