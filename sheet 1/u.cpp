#include <stdio.h>
 
int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
 
    int x = A, y = B, z = C;
    int temp;
 
    // Sort in ascending order using simple swaps
    if (x > y) { temp = x; x = y; y = temp; }
    if (y > z) { temp = y; y = z; z = temp; }
    if (x > y) { temp = x; x = y; y = temp; }
 
    // Print sorted numbers
    printf("%d\n%d\n%d\n\n", x, y, z);
 
    // Print original numbers
    printf("%d\n%d\n%d\n", A, B, C);
 
    return 0;
}
