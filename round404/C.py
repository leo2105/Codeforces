
import sys
import os
def BS ( l, h, k):
    if h < l :
        return l
    mid = (l + h) // 2
    if (mid*(mid+1)) >= 2*k :
        return BS ( l, mid-1, k )
    else:
        return BS ( mid+1, h, k )
if __name__ == "__main__":
   # print ( sys.version )
   # n = int(input())
   # m = int(input())
    n, m = map(int, input().split())
    if m >= n :
        print ( n )
    else:
        x = n - m;
        idx = BS ( 0 , 1000000000000000000, x )
        print(idx+m)
