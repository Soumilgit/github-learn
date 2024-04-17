'''Problem Statement:
You are given an array A of length N. You can perform the following operation on it:
Choose any index i such that 1<i<N and A 
i is not smaller than either of its neighbors, i.e, both A i ≥A i−1 and A i ≥ A i+1 are true.
Then, decrease A i by 1.
Is it possible to make all the elements of A equal by performing this operation several (possibly, zero) times?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains N — the number of elements in A.
The second line of each test case contains N space-separated integers , denoting the array A.
Output Format
For each test case, output on a new line the answer: "Yes" if it is possible to make all the elements of A equal, and "No" otherwise (without quotes).

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings NO, no, No, and nO will all be treated as equivalent.

Constraints:
1≤T≤10 
1≤N≤2⋅10 
The sum of N over all test cases won't exceed 2.10^5.
Sample 1:
Input
Output
3
1
1
4
1 3 2 1
7
2 4 5 1 4 5 3
YES
YES
NO
Explanation:
Test case 
1
1: 
A contains only a single element, so all its elements are already equal.

Test case 
2
2: Perform operations as follows:

Choose i=2 and decrease it, to get 
[
1
,
2
,
2
,
1
]
[1,2,2,1].
Choose i=2 again and decrease it, to get 
[
1
,
1
,
2
,
1
]
[1,1,2,1].
Choose i=3 and decrease it, to get 
[
1
,
1
,
1
,
1
]
[1,1,1,1].
All the elements are equal now.
Test case 
3
3: It can be shown that no matter what, the array elements cannot all be made equal.
'''
def chk_ele(arr):
    if arr[0] != arr[-1]:
        return "NO"
    else:
        fst_lst = arr[0];
        for ele in arr[1:-1]:
            if ele < fst_lst:
                return "NO"
        return "YES"
        
T=int(input())

for _ in range(T):
    N=int(input())
    
    A=list(map(int,input().split()))
    
    result = chk_ele(A)
    print(result)
