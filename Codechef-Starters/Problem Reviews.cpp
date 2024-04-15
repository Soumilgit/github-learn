/*
    Problem Reviews
Om Khangat has come up with a problem that he thinks can be used in a CodeChef contest, and has submitted his proposal for review.

CodeChef's review panel has 
N judges, each of whom will give Om's problem a point value between 
1
1 and 
10
10, denoting how good they think it is (
1
1 being the lowest, and 
10
10 the highest).
A problem is considered good if and only if every judge gives it a score that's strictly greater than 
4
4.

You know the point values given by each judge to Om's problem. Can you tell whether his problem is good?

Input Format
The first line of input will contain a single integer 
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains one integer 
N — the number of judges.
The next line contains 

N space-separated integers 

Output Format
For each test case, print the answer on a new line: YES if Om's problem is good, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e, the strings YES, yes, YeS, and yES will all be treated as equivalent.

Sample 1:
Input
Output
3
4
3 5 6 9
3
8 7 8
4
10 9 10 4
NO
YES
NO

 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int S[N];
        
        for(int i=0;i<N;i++){
            cin>>S[i];
        }
        
        bool isGood = true;

        // Check each judge's score
        for (int i = 0; i < N; i++) {
            if (S[i] <= 4) {
                // If any judge gives a score less than or equal to 4, the problem is not good
                isGood = false;
                break;
            }
        }

        // Output the result based on the isGood flag
        if (isGood) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
