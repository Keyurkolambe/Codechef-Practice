# cook your dish here
for i in range(int(input())):
    a=int(input())
    l=list(map(int,input().split()))
    c=0
    for i in range(len(l)):
        sum=0
        prod=1
        for j in range(i,len(l)):
            sum=sum+l[j]
            prod=prod*l[j]
            if(sum==prod):
                c=c+1
    print(c)
