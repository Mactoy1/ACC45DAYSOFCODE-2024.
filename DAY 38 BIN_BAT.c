#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        int rounds = 0, totalTime = 0;
        while (N > 1) {
            totalTime += A;
            N /= 2;
            rounds++;
        }
        totalTime += B * (rounds - 1);
        printf("%d\n", totalTime);
    }
    return 0;
}