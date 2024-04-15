/*
The Ides of March
Beware the ides of March.

Julius Caesar was warned by a soothsayer to be wary of the ides of March — namely, the 
15
15-th of March.

Today is the N-th day of March. Your task is to tell Caesar whether it is the ides of March, so that he can take extra safety precautions if necessary.
Input Format
The only line of input will contain a single integer N, today's date in March.
Output Format
Print "Yes" if today is the ides of March, and "No" otherwise (without quotes).

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings NO, no, nO, and No will all be treated as equivalent.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	if(N==15){
	    cout<<"Yes"<<endl;
	}
	else{
	    cout<<"No"<<endl;
	}
	return 0;

}
