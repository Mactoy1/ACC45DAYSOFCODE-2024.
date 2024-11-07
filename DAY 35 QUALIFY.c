#include <stdio.h>

int main() {
    int T, X, A, B, score;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &X, &A, &B);
        score = A * 1 + B * 2;
        if (score >= X)
            printf("Qualify\n");
        else
            printf("NotQualify\n");
    }
    return 0;
}