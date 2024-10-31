#include <stdio.h>

int main() {
    int T, P, Q;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &P, &Q);
        int total_points = P + Q;
        if ((total_points / 2) % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
    return 0;
}