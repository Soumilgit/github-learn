/*
50-50 Rule
Schools of Chefland use the 50−50 rule to grade their students. As per the rule , students are awarded :Z grade, if their attendance is strictly less than 
50% .F grade, if they score strictly less than 50%.
50% marks, given that their attendance is greater than or equal to 50% .
A grade, otherwise.
You are given two integers, X and Y, denoting the percentage of attendance and percentage of marks obtained by Alice. What grade will Alice get?
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers X and Y — the percentage of attendance and percentage of marks obtained by Alice.
Output Format
For each test case, output on a new line, the grade awarded to Alice.
Note that you may print the grade in lowercase or uppercase.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X<50){
	        cout<<"Z"<<endl;
	    }
	    else if(X>=50 && Y<50){
	        cout<<"F"<<endl;
	    }
	    else{
	        cout<<"A"<<endl;
	    }
	}
	return 0;

}
