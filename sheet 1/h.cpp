#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B;
    scanf("%lf %lf", &A, &B);
 
    printf("floor %.0lf / %.0lf = %.0lf\n", A, B, floor(A / B));
    printf("ceil %.0lf / %.0lf = %.0lf\n", A, B, ceil(A / B));
    printf("round %.0lf / %.0lf = %.0lf\n", A, B, round(A / B));
 
    return 0;
}
