#include <stdio.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int cost_green, cost_purple; // Cost of green and purple-colored balloons
        scanf("%d %d", &cost_green, &cost_purple);

        int participants; // Number of participants
        scanf("%d", &participants);

        int solved1 = 0, solved2 = 0; // Number of participants who solved problem 1 and problem 2

        while (participants--) {
            int p1, p2; // Status of participant's solution for problem 1 and problem 2
            scanf("%d %d", &p1, &p2);

            if (p1 == 1)
                solved1++;

            if (p2 == 1)
                solved2++;
        }

        // Calculate the minimum cost to purchase balloons
        int cost1 = (solved1 * cost_green) + (solved2 * cost_purple);
        int cost2 = (solved1 * cost_purple) + (solved2 * cost_green);

        // Print the minimum cost
        printf("%d\n", cost1 < cost2 ? cost1 : cost2);
    }

    return 0;
}
