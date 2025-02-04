# compact method 
for s in[*open(0)][2::2]:
    *b, = map(int,s.split())
    a = []
    for x,y in zip([0]+b,b):
        a+=[y]*(1+(x>y))
    print(len(a),*a)

# general method
""" num_test_cases = int(input())

for _ in range(num_test_cases):
    size = int(input())
    
    result = []
    previous = 0
    for _ in range(size):
        current = int(input()) 
        if previous > current:
            result += [current, current]
        else:
            result.append(current)
        previous = current
    print(len(result), *result)
"""