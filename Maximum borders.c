def bordershape():
    n,m =map(int,input().split(maxsplit=1))
    count= 0
    for i in range(n):
        border =(input()[:m+1].replace('.',''))
        if count <len(border):
            count =len(border)
    print(count)
test=int(input())
while test:
    bordershape()
    test-=1
