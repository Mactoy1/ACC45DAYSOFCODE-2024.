#include <stdio.h>

int main() {
    int T, N, A, B;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &N, &A, &B);
        int total_duration = (N / 2) * (A + B) + (N % 2) * B;
        printf("%d\n", total_duration);
    }
    return 0;
}