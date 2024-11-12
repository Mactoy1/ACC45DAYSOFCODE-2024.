#include <stdio.h>
#include <stdlib.h>

int min_operations_to_zero(int n, int arr[]) {
    int count_pos = 0, count_neg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) count_pos++;
        else count_neg++;
    }

    // If N is odd, it's impossible to balance
    if (n % 2 != 0) return -1;

    // Calculate the number of operations needed
    int difference = abs(count_pos - count_neg);
    return difference / 2;  // Minimum operations to make counts equal
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", min_operations_to_zero(n, arr));
    }
    return 0;
}