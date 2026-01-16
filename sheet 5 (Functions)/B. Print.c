#include <stdio.h>
 
void mow()
{
    int n, i;
    scanf("%d", &n);
 
    for(i = 1; i <= n; i++)
    {
        if(i > 1)
            printf(" ");
        printf("%d", i);
    }
}
 
int main()
{
    mow();
    
}

