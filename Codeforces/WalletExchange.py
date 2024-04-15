def who_will_win(a, b):
    total_coins = a + b
    if total_coins % 2 == 0:
        return "Bob"
    else:
        return "Alice"
 
def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        result = who_will_win(a, b)
        print(result)
 
if __name__ == "__main__":
    main()
