import sys

def min_cost(n, k, a):
    a.sort()  # Sorting the array to extract the smallest elements
    b = sorted(a[:k//2])  # Choosing k/2 smallest elements and sorting them
    b.append(0)  # Appending 0 at the end
    
    # Finding the first index where b[i] != i + 1
    for i in range(len(b)):
        if b[i] != i + 1:
            return i + 1
    return len(b) + 1  # If the entire sequence is correct, the next index is the answer

# Read input
input = sys.stdin.read
data = input().split()
t = int(data[0])

index = 1
results = []
for _ in range(t):
    n, k = int(data[index]), int(data[index+1])
    a = list(map(int, data[index+2:index+2+n]))
    index += 2 + n
    results.append(str(min_cost(n, k, a)))

# Print all results efficiently
sys.stdout.write("\n".join(results) + "\n")
