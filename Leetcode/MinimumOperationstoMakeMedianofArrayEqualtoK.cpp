#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        // Sort the array
        sort(nums.begin(), nums.end());
        
        // Calculate the size of the array
        int n = nums.size();
        
        // Initialize the answer
        long long ans = 0;
        
        // Iterate over the array to calculate the minimum operations
        for (int i = 0; i < n; i++) {
            // For elements less than the median, increase them to k
            if (i < n / 2) {
                ans += max(0LL, (long long)nums[i] - k);
            }
            // For the median element, adjust it to k
            else if (i == n / 2) {
                ans += abs((long long)nums[i] - k);
            }
            // For elements greater than the median, decrease them to k
            else {
                ans += max(0LL, (long long)k - nums[i]);
            }
        }
        
        // Return the minimum number of operations
        return ans;
    }
};
