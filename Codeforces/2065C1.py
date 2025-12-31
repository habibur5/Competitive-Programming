def can_sort(n, a, b1):
    transformed_a = [b1 - x for x in a] 

    original_sorted = sorted(a) == a
    transformed_sorted = sorted(transformed_a) == transformed_a

    combined_sorted = sorted([min(a[i], transformed_a[i]) for i in range(n)]) == [min(a[i], transformed_a[i]) for i in range(n)]

    return "YES" if original_sorted or transformed_sorted or combined_sorted else "NO"

import sys
input = sys.stdin.read
data = input().split()

t = int(data[0])
index = 1
results = []

for _ in range(t):
    n, m = int(data[index]), int(data[index + 1])
    a = list(map(int, data[index + 2 : index + 2 + n]))
    b = list(map(int, data[index + 2 + n : index + 2 + n + m]))
    
    results.append(can_sort(n, a, b[0]))
    index += 2 + n + m 

sys.stdout.write("\n".join(results) + "\n")
