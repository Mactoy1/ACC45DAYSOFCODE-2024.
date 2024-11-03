#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int cumulative_score_p1 = 0, cumulative_score_p2 = 0;
    int max_lead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T);

        cumulative_score_p1 += S;
        cumulative_score_p2 += T;

        int current_lead;
        int current_leader;
        
        if (cumulative_score_p1 > cumulative_score_p2) {
            current_lead = cumulative_score_p1 - cumulative_score_p2;
            current_leader = 1;
        } else {
            current_lead = cumulative_score_p2 - cumulative_score_p1;
            current_leader = 2;
        }

        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    printf("%d %d\n", winner, max_lead);

    return 0;
}