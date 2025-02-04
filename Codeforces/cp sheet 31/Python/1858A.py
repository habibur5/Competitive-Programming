for t in [*open(0)][1:]:
    *a, = map(int,t.split())
    print("First" if(a[2]%2 !=0 and a[0]>= a[1]) or (a[2] %2 ==0 and a[0]>a[1]) else "Second")

    #for s in[*open(0)][1:]:a,b,c=map(int,s.split());print('SFeicrosntd'[a>b-c%2::2]) 


# optimize version
for s in[*open(0)][1:]:a,b,c=map(int,s.split());print('SFeicrosntd'[a>b-c%2::2])