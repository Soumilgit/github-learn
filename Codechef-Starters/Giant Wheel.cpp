/*Problem statement:
Alice is visiting the amusement park!

Alice's height is X centimeters.
The park stipulates that the minimum height necessary to get on the giant wheel is 60 centimeters.

Will Alice be able to ride on the giant wheel?

Input Format
The only line of input contains a single integer X — Alice's height.

Output Format
Output the answer on a single line: "Yes" if Alice can ride the giant wheel, and "No" otherwise (without quotes).

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings NO, no, No, and nO will all be treated as equivalent.

Constraints:
1≤X≤100
Sample 1:
Input
Output
59
No
Explanation:
Alice's height is 
59
59 centimeters, which is less than the minimum height of 
60
60.
So, she can't ride the giant wheel.

Sample 2:
Input
Output
60
Yes
Explanation:
Alice's height is 
60
60 centimeters, which equals the minimum height of 
60
60.
So, she can ride the giant wheel.

Sample 3:
Input
Output
61
Yes
Explanation:
Alice's height is 
60
60 centimeters, which is greater than the minimum height of 
60
60.
So, she can ride the giant wheel.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X;
	cin>>X;
	if(X>=60){
	    cout<<"Yes"<<endl;
	}
	else{
	    cout<<"No"<<endl;
	}
	return 0;

}
