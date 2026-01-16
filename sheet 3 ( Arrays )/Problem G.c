#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
 
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
 
    int ok = 1;
 
    for (int i = 0; i < n; i++) {
        if (A[i] != A[n-1-i]) {
            ok = 0;
            break;
        }
    }
 
    if (ok == 1){
        printf("YES");
    }
    else{
     printf("NO");
    }
 
}
