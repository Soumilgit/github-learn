/*
Overspeeding
Alice is going for a drive. During her drive, she reached a maximum speed of S km/hr.
As per the rules of the government, the speed of the vehicle must not exceed 40 km/hr, otherwise the person will be fined.
You need to tell whether Alice will be fined or not.

Input Format
The only line of input will contain a single integer S - denoting the maximum speed Alice reached while driving.
Output Format
Print YES if Alice will be fined , otherwise print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int S;
    cin>>S;
    if(S>40){
        cout<<"YES"<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
	// your code goes here

}
