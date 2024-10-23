#include <stdio.h>

int main() {
    int T, H, X, Y, attacks;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &H, &X, &Y);

        attacks = H / X;
        if (H % X != 0) {
            attacks++;
        }

        if (H - Y <= 0) {
            attacks = 1;
        } else {
            int special_attacks = (H - Y) / X;
            if ((H - Y) % X != 0) {
                special_attacks++;
            }
            if (special_attacks < attacks) {
                attacks = special_attacks + 1;
            }
        }

        printf("%d\n", attacks);
    }
return 0;
}