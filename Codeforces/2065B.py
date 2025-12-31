def min_length(s):
    # Count the number of unique segments of consecutive identical characters
    count = 1  # First character starts a new segment
    for i in range(1, len(s)):
        if s[i] != s[i - 1]:  # New segment starts
            count += 1
    return count

# Read input
t = int(input())  # Number of test cases
for _ in range(t):
    s = input().strip()
    print(min_length(s))
