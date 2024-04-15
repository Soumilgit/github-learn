#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, l, r;
        cin >> N >> l >> r;

        int a[N];
        int currentHappiness = 0;
        int maxHappiness = 0;
        int minHappiness = 0;

        for (int i = 0; i < N; i++) {
            cin >> a[i];

            if (a[i] >= l && a[i] <= r) {
                currentHappiness++;
                maxHappiness = max(maxHappiness, currentHappiness);
            } else {
                currentHappiness--;
                minHappiness = min(minHappiness, currentHappiness);
            }
        }

        cout << maxHappiness << " " << minHappiness << endl;
    }

    return 0;
}
