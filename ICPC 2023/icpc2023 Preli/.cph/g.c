#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char ballData[61];
        scanf("%s", ballData);

        double overs = 0.0;
        int runs = 0;
        int wickets = 0;

        for (int i = 0; ballData[i] != '\0'; i++) {
            if (ballData[i] == 'W') {
                wickets++;
            } else {
                runs += ballData[i] - '0';
                overs += 0.1;  // Add 0.1 to overs for each ball
            }
        }

        int totalOvers = (int)overs;
        int totalBalls = (overs - totalOvers) * 10;

        printf("%d.%d Overs %d Run%s %d Wicket%s.\n", totalOvers, totalBalls, runs, (runs > 1) ? "s" : "", wickets, (wickets > 1) ? "s" : "");
    }

    return 0;
}
