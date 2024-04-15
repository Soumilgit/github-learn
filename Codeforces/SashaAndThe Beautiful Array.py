t=int(input())
 
for _ in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        
        arr.sort()
        
        beauty=sum(abs(arr[i]-arr[i-1]) for i in range(1,n) )
        
        print(beauty)
