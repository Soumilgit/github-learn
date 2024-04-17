/*
Problem Statement:
You are given a binary string S of length N.
You can perform the following operation on it:

Choose an index 1≤i≤N, and flip every character of S from index i to N.
Flipping a character means turning it from 0 to 1 and vice versa.
For example, if S=1001101 and you choose i=4, the resulting string will be S=1000010.

Find the minimum number of operations required to turn S into an alternating string.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains one integer N — the length of S.
The next line contains the binary string S.
Output Format
For each test case, output on a new line the minimum number of operations required to make S alternating.

Constraints:
1≤T≤10 
1≤N≤2⋅10 
S is a binary string, i.e, contains only the characters 
0
0  
1
1.
The sum of N over all test cases won't exceed 2*10^5.
Sample 1:
Input
Output
3
1
1
2
11
4
0010
0
1
1
Explanation:
Test case 
1
1: As a string of length 
1
1, 
�
S is already alternating.

Test case 
2
2: Choose 
�
=
2
i=2, turning the string into 
10
10, which is alternating.

Test case 
3
3: Choose 
�
=
2
i=2, turning the string into 
0101
0101, which is alternating.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    string S;
	    cin>>S;
	    int ginti=0;
	    for(int i=1;i<N;i++){
	        if(S[i] == S[i-1]){
	            ginti++;
	        }
	    }
	    cout<<ginti<<endl;
	    
	    
	}
	return 0;

}
