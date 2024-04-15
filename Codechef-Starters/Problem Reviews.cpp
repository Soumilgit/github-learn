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
