#include <stdio.h>
#include <string.h>
 
int main() {
    // big enough to hold very long names from input and a terminating NUL
    char F1[2048], S1[2048];
    char F2[2048], S2[2048];
 
    // use width specifiers to prevent overflow
    if (scanf("%2047s %2047s", F1, S1) != 2) return 0;
    if (scanf("%2047s %2047s", F2, S2) != 2) return 0;
 
    if (strcmp(S1, S2) == 0)
        printf("ARE Brothers\n");
    else
        printf("NOT\n");
 
    return 0;
}
