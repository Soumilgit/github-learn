/*
	Healthy Sleep
At IIITA, students have diverse sleep patterns, and there isn't a fixed duration for their daily sleep.
Typical scientific recommendations suggest that the duration of a healthy sleep is 
8
8 hours per day.
As you begin your journey as a programmer, you've been tasked by the renowned programmer of IIITA, Pavitra Pandey, with your first project.

Your assignment is to write a program that takes as input the number of hours a student sleeps per day, and judges how good their sleep schedule is. Specifically,

If the student sleeps for strictly less than 
8
8 hours, the program should output LESS.
If the student sleeps for exactly 
8
8 hours, the program should output PERFECT.
If the student sleeps for strictly more than 
8
8 hours, the program should output MORE.
Can you write such a program?

Input Format
The only line of input contains a single integer 
�
H, denoting the number of hours a student sleeps per day.
Output Format
Output a single string containing the answer:

LESS if the student doesn't get enough sleep.
PERFECT if the student sleeps the perfect amount of time.
MORE if the student sleeps too much.
Each character of the output may be printed in either uppercase or lowercase, i.e, the strings LESS, less, LeSs, and lesS will all be treated as equivalent.

Constraints
1
≤
�
≤
24
1≤H≤24
Sample 1:
Input
Output
2
LESS
Explanation:
The student sleeps for 
2
2 hours, which is less than 
8
8.
So, the program should output LESS.

Sample 2:
Input
Output
13
MORE
Explanation:
The student sleeps for 
13
13 hours, which is more than 
8
8.
So, the program should output MORE.

Sample 3:
Input
Output
8
PERFECT
Explanation:
The student sleeps for exactly 
8
8 hours, so the program should output PERFECT.
*/
	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int H;
    cin>>H;
    if(H < 8){
        cout<<"LESS"<<endl;
    }
    else if (H == 8){
        cout<<"PERFECT"<<endl;
    }
    else{
        cout<<"MORE"<<endl;
    }
    return 0;
    
    
	// your code goes here

}
