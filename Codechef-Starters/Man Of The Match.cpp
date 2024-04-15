#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int maximum = -1, maxPlr = -1;

        for (int i = 1; i <= 22; ++i) {
            int A, B;
            cin >> A >> B;

            // Calculate points using the provided formula
            int totalpoints = A + 20 * B;

            // Update maxScore and maxPlayer if the current player has a higher score
            if (totalpoints > maximum) {
                maximum = totalpoints;
                maxPlr = i;
            }
        }

        cout << maxPlr << endl;
    }

    return 0;
}
