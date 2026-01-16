#include <stdio.h>
 
int main() {
    float N;
    scanf("%f", &N);
 
    int intPart = (int)N;
    float decPart = N - intPart;
 
    if (decPart == 0)
        printf("int %d\n", intPart);
    else
        printf("float %d %.3f\n", intPart, decPart);
 
    return 0;
}
