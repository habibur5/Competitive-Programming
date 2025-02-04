""" n = int(input())
m = 1e9
numbers = list(map(int, input().split()))
for x in numbers:
    m = min(m, abs(x))
print(m) """

print(min(map(abs,map(int,[*open(0)][1].split()))))