#include <stdio.h>
 
void average(double a[], int n)
{
    int i;
    double sum = 0;
 
    for(i = 0; i < n; i++)
        sum = sum + a[i];
 
    printf("%.7lf", sum / n);
}
 
int main()
{
    int n, i;
    double a[10000];
 
    scanf("%d", &n);
 
    for(i = 0; i < n; i++)
        scanf("%lf", &a[i]);
 
    average(a, n);
    return 0;
}
