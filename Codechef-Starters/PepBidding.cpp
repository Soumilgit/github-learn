#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> attA(N), defA(N), attP(N), defP(N);
        for (int i = 0; i < N; i++) {
            cin >> attA[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> defA[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> attP[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> defP[i];
        }

        int totalAttA = accumulate(attA.begin(), attA.end(), 0);
        int totalDefA = accumulate(defA.begin(), defA.end(), 0);
        int totalAttP = accumulate(attP.begin(), attP.end(), 0);
        int totalDefP = accumulate(defP.begin(), defP.end(), 0);

        if (totalAttA > totalAttP && totalDefA > totalDefP) {
            cout << "A" << endl;
        } else if (totalAttA < totalAttP && totalDefA < totalDefP) {
            cout << "P" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}
