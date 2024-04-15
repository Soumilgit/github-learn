/* Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Write code here
    int T;
    cin>>T;
    while(T--){
        int P,X,R1;
        cin>>P>>X>>R1;
        int N,Y,R2;
        cin>>N>>Y>>R2;
        if((P/X)+R1 > (N/Y) + R2){
            cout<<"NINA"<<endl;
            cout<<(N/Y)+R2<<endl;
        }
        else if((P/X)+R1 < (N/Y)+R2){
            cout<<"PAUL"<<endl;
            cout<<(P/X)+R1<<endl;
        }
        else{
            cout<<"BOTH"<<endl;
            cout<<(P/X)+R1<<endl;
        }
        }
        return 0;
    }
