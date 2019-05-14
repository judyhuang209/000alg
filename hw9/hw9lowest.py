# -*- coding: utf-8 -*-
"""
Created on Tue May 14 19:24:50 2019

@author: 105502506
"""

n = int(input())
for N in range (n):
    # input
    m = int(input())
    score = [int(x) for x in input().split()]
    a=[]
    b=[]
    a.append(score[0])
    # print(score)
    for i in range (1, m):
        if (score[i]>score[i-1]):
            a.append(score[i])
        else:
            for j in range (len(a), m):
                b.append(score[j])
            break
    a.append(4294967296)
    b.append(4294967296)
    
    # output
    x=0
    y=0
    for i in range (3):
        if(a[x]<b[y]):
            print("A", end="")
            x = x+1
        else:
            print("B", end="")
            y = y+1
    print("\n")
