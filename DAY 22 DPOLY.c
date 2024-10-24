#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N);  // Read the number of terms in the polynomial
        
        int degree = -1;  // Initialize degree
        for (int i = 0; i < N; i++) {
            int coefficient;
            scanf("%d", &coefficient);  // Read the coefficient of x^i
            
            if (coefficient != 0) {
                degree = i;  // Update degree to the highest index with non-zero coefficient
            }
        }
        
        printf("%d\n", degree);  // Output the degree of the polynomial
    }
    
    return 0;
}