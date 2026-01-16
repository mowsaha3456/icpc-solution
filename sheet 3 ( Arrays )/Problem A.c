#include <stdio.h>
int main() {
    int N, x;
    long long sum = 0;
 
    scanf("%d", &N);
 
    for(int i = 0; i < N; i++) {
        scanf("%d", &x);
        sum += x;
    }
 
    if (sum < 0)
        sum = -sum;
 
    printf("%lld\n", sum);
 
 
}
