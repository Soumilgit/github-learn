/*Problem statement:
Alice scored A marks and Bob scored B marks in an exam. Both A and B are two-digit numbers that don't contain the digit 0.

Alice wants her marks to display higher than Bob's.
For this, she can reverse her score and/or Bob's score.

Is there a way for her score to display higher than Bob's?

For example, if A=37 and B=83, Alice can reverse her score to make it 73 and also reverse Bob's score to make it 38, and now her score is higher.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers A and B — the marks obtained by Alice and Bob, respectively.
Output Format
For each test case, output on a new line the answer: "Yes" if Alice can change her score to display higher than Bob's, and "No" otherwise (without quotes).

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings No, no, NO, and nO will all be treated as equivalent.

Constraints:
1≤T≤10 
11≤A,B<100
A and B don't contain 0 in their decimal representation.
Sample 1:
Input
Output
5
14 41
45 53
58 86
54 82
12 34
Yes
Yes
Yes
Yes
No
Explanation:
Test case 
1
1: Alice can reverse her score to get 
41
41, and also reverse Bob's score to make it 
14
14.

Test case 
2
2: Alice can reverse her score to get 
54
54, and leave Bob's score unchanged.

Test case 
3
3: Alice can reverse her score to get 
85
85, and also reverse Bob's score to make it 
68
68.

Test case 
4
4: Alice can leave her score unchanged, and reverse Bob's score to make it 
28
28.

Test case 
5
5: No matter what Alice does, her score cannot exceed Bob's.
*/
#include <bits/stdc++.h>
using namespace std;



int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        // Reverse Alice's score
        int revA =(A % 10)*10 +A/10;
        // Reverse Bob's score
        int revB =(B%10)*10+B/10 ;
        // Check if the reversed score of Alice is greater than Bob's original score
        if ( revA > revB) {
            cout << "Yes" << endl;
        }
        else if (revA > B ||  A> revB || A>B) { // Check if the reversed score of Bob is greater than Alice's original score
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
