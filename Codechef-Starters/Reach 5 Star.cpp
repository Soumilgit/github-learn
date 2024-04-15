/*
Reach 5 Star
Chef loves giving contests on Codechef. Chef wants to become 5 star rated. Currently his rating on Codechef is X.
After today's contest, his rating will increase by Y. Note that Y can be negative which means that Chef's rating will decrease.
Find whether Chef will become 5 star rated after today's contest.
Chef will be considered 5 star rated if his rating is greater than or equal to 2000.
Input Format
The first line contains two space-separated integers X and Y — chef's initial rating and the amount by which his rating will increase, respectively.
Output Format
Output YES if chef will become 
5
5 star rated, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X,Y;
	cin>>X>>Y;
	if(X+Y>=2000){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;

}
