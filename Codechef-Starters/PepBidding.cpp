/*
Pep Bidding
Pep is known for his golden bids on football matches. Surprisingly, he has a rather simple strategy!

Team A and Team P are playing against each other, and each of them have N players.
For each i from 1 to N,Pep believes that the i-th player on team A has an attack power of attA i, and a defense power of defA i.
Similarly, the i-th player on team P has an attack power of attP i, and a defense power of defP i.
The total attack power of a team is the sum of the attack powers of all of its 
N players.
The total defense power is defined similarly.

If the total attack power of one team is strictly greater than the total attack power of the other team, and its total defense power is strictly greater than the total defense power of the other team, Pep bids for that team.
Otherwise, he'll bid for a draw.

Can you tell what Pep will bid on?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of five lines of input.
The first line of each test case contains a single integer N, the number of players on both teams.
The second line contains N space-separated integers 
1
,
2
,
…
,

attA 
1
​
 ,attA 
2
​
 ,…,attA 
N
​
  — the elements of 

attA.
The third line contains 

N space-separated integers 

1
,

2
,
…
,

defA 
1
​
 ,defA 
2
​
 ,…,defA 
N
​
  — the elements of 

defA.
The fourth line contains 

N space-separated integers 

1
,

2
,
…
,

attP 
1
​
 ,attP 
2
​
 ,…,attP 
N
​
  — the elements of 

attP.
The fifth line contains 

N space-separated integers 

1
,

2
,
…
,

defP 
1
​
 ,defP 
2
​
 ,…,defP 
N
​
  — the elements of 

defP.
Output Format
For each test case, output on a new line a string representing what Pep bids for: either "A", "P", or "DRAW" (without quotes).

Each letter of the output may be printed in either lowercase or uppercase, i.e, the strings DRAW, draw, dRaW, and so on will be considered equivalent.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> attA(N), defA(N), attP(N), defP(N);
        for (int i = 0; i < N; i++) {
            cin >> attA[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> defA[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> attP[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> defP[i];
        }

        int totalAttA = accumulate(attA.begin(), attA.end(), 0);
        int totalDefA = accumulate(defA.begin(), defA.end(), 0);
        int totalAttP = accumulate(attP.begin(), attP.end(), 0);
        int totalDefP = accumulate(defP.begin(), defP.end(), 0);

        if (totalAttA > totalAttP && totalDefA > totalDefP) {
            cout << "A" << endl;
        } else if (totalAttA < totalAttP && totalDefA < totalDefP) {
            cout << "P" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}
