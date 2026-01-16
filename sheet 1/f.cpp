#include <stdio.h>
 
int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);
 
    int last_N = N % 10;
    int last_M = M % 10;
 
    printf("%d\n", last_N + last_M);
 
    return 0;
}

