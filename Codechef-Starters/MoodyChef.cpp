/*
Moody Chef
Chef loves integers that are in the range of l to r. More formally, Chef loves an integer x if it satisfies the condition l≤x≤r.
Chef has an array A of length N. Currently, the happiness of Chef is 0.
He will examine the elements of the array in order from index 1 to N.

If he finds an integer that he loves, his happiness will increase by 1; otherwise, his happiness will decrease by 1.
Find the values of maximum and minimum happiness Chef will experience while going through the array.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains three integers N, l and r — the number of elements in the array, the least number that chef loves, the biggest number that chef loves.
The next contains N space-separated integers, where the ℎi thinteger denotes A i.

Output Format
For each test case, output on a new line, two space-separated integers denoting the maximum and minimum happiness Chef will experience.
*/
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
