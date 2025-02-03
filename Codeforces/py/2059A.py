def can_get_three_distinct_sums(n, a, b):
    a.sort() 
    distinct_sums = set()
    
    for i in range(n):
        distinct_sums.add(a[i] + b[i])
        if len(distinct_sums) >= 3:
            return "YES"
    
    return "NO"


def solve():
    t = int(input().strip())
    
    for _ in range(t):
        n = int(input().strip())
        a = list(map(int, input().strip().split()))
        b = list(map(int, input().strip().split()))
        
        print(can_get_three_distinct_sums(n, a, b))

solve()
