'''
Optimizing Competition (100 Marks)
A thrilling boat competition is on the horizon, and N enthusiastic participants are eager to team up and participate. Each participant has a weight, represented by Wi. However, there is a catch - the competition only allows teams consisting of two participants. As an organizer, you want to ensure fairness by allowing only teams with the same total weight.


For instance, if there are K teams, each comprising participants (a1, b1), (a2, b2), ..., (ak, bk), where ai is the weight of the first participant in the i-th team, and bi is the weight of the second participant in the i-th team, a key condition needs to be satisfied: a1 + b1 = a2 + b2 = ... = ak + bk = s, where s is the common total weight of each team.


Your challenge is to find an optimal value for s such that the maximum possible number of teams can be formed. It is important to note that each participant can only be part of one team.




Input Format
The first line contains an integer N, the number of participants.

The second line contains N space-separated integers W1, W2, ..., WN, where wi represents the weight of the i-th participant.



Constraints
1 ≤ N ≤ 50

1 ≤ Wi ≤ N



Output Format
Print the maximum number of teams that can be formed with the optimal total weight s.

Sample TestCase 1
Input
6
1 1 3 4 2 2
Output
2
Explanation

There are two possible cases:


Case 1: The value of s = 3

Two teams can be formed (1, 2) and (1, 2).


Case 2: The value of s = 4

Two teams can be formed (1, 3) and (2, 2).


In any case, the maximum number of valid teams formed are 2.
'''
def count_teams(weights, s):
    cnt = 0
    rem = list(weights)
    while rem: # Added the condition for the while loop
        first = rem.pop(0)
        partner = s - first
        if partner in rem:
            rem.remove(partner)
            cnt += 1
    return cnt

def max_teams_possible(N, weights):
    max_teams = 0
    for s in range(2, 2 * N + 1):
        teams = count_teams(weights, s)
        max_teams = max(max_teams, teams)
    return max_teams

N = int(input())
weights = list(map(int, input().split()))
print(max_teams_possible(N, weights))
