#include <stdio.h>
#include <math.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);  // Read values of N, A, and B

        // Calculate the number of rounds (log2(N) rounds)
        int rounds = log2(N);

        // Total time calculation
        int total_time = rounds * A + (rounds - 1) * B;

        // Print the result for each test case
        printf("%d\n", total_time);
    }

    return 0;
}