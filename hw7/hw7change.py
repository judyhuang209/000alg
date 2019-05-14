# -*- coding: utf-8 -*-
"""
Created on Wed May  1 18:31:11 2019

@author: 105502506
"""
def main():
    n = int(input())
    for i in range (n):
        
        # input
        m, t = map(int, input().split())
        c = [999 for a in range(0, t+1)]
        if m == t and m == 0:
            return 0
        unit = [int(x) for x in input().split()]
        minU = min(unit)
        for a in range (minU):
            c[a] = 0
        
        # algo
        for j in range (0, m):                  #面额索引值
            for k in range (unit[j], t+1):      # k=金額
                c[k] = min(c[k], c[k-unit[j]]+1)
        print(c[t])
            
if __name__ == "__main__":
    main()