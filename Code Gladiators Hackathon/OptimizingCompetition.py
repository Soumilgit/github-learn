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
