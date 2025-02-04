""" for t in [*open(0)][2::2]:
    *a,= t.split()
    print(*a)
    a=sorted(a, key=int)
    b=[]
    c=[]
    for i in a:
        if(i==a):
            b+=i
        else:
            c+=i
    if(len(b)==0 or len(c)==0):
        print(-1)
    else:
        print(len(b),len(c))
        print(*b)
        print(*c)
"""
""" for s in[*open(0)][2::2]:a=sorted(s.split(),key=int)
print(*([-1],[l:=a.index(a[-1]),len(a)-l]+a)[l>0])
import sys

# Read input from standard input
lines = sys.stdin.readlines()

# Process every alternate line starting from the third
for s in lines[2::2]:
    # Split the line into words and sort them based on integer values
    a = sorted(s.split(), key=int)
    
    # Find the index of the maximum value
    l = a.index(a[-1])
    #print(l)
    
    # Print results based on the condition
    if l > 0:
        print(l,"\n", len(a) - l,"\n", *a)

    else:
        print(-1)
 """

for t in [*open(0)][2::2]:
    a = sorted(t.split(),key=int)
    print(*([-1],[l:=a.index(a[-1]),len(a)-l]+a)[l>0])