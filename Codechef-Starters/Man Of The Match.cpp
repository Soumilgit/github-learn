/*
    Man of the Match
In a cricket match, there are two teams, each comprising 
11
11 players. The scorecard of the match lists the runs scored and wickets taken by each of these 
22
22 players.

To determine the "Man of the Match", we assess each player's performance. Points are awarded to a player as follows:

Each run scored earns 
1
1 point.
Every wicket taken earns 
20
20 points.
The player with the highest total points is awarded the "Man of the Match" title.

You are given the scorecard of a cricket match, listing the contributions of all 
22
22 players.
The players are numbered from 
1
1 to 
22
22. Find the "Man of the Match".
It is guaranteed that for all inputs to this problem, the "Man of the Match" is unique.

Note: A player who belongs to the losing team can also win the "Man of the Match" award.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 
22 lines of input. The 
i-th of these 
22 lines contains two space-separated integers 
Ai and Bi— respectively, the runs scored and wickets taken by the 
i-th player.
Output Format
For each test case, output on a new line a single integer i 
(1≤i≤22) denoting the index of the player with the maximum score.

The tests for this problem are designed such that there will be exactly one player with the maximum score.
*/
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int maximum = -1, maxPlr = -1;

        for (int i = 1; i <= 22; ++i) {
            int A, B;
            cin >> A >> B;

            // Calculate points using the provided formula
            int totalpoints = A + 20 * B;

            // Update maxScore and maxPlayer if the current player has a higher score
            if (totalpoints > maximum) {
                maximum = totalpoints;
                maxPlr = i;
            }
        }

        cout << maxPlr << endl;
    }

    return 0;
}
