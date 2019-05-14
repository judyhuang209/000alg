# -*- coding: utf-8 -*-
"""
Created on Wed Apr 24 03:29:04 2019

@author: 105502506
"""

edge = []
weight = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
for i in range (24):
    edge.append(int(input()))
        
#stage1
w=999
N=0
for i in range (3):
    weight[i+1]=edge[i]
    if weight[i+1]<w:
        w=weight[i+1]
        N=i+1
print(N, weight[N])
    
#stage2
w=999
B=0
for i in range (4, 7):
    w=999
    for j in range (i-1, i+6, 3):
        if edge[j]<w:
            w = edge[j]
            #mark the node before
            B = j//3
            #mark
            weight[i] = w + weight[B]  
w=999
N=0
for i in range (4, 7):
    if weight[i]<w:
        w=weight[i]
        N=i
print(N, weight[N])           
    
#stage3
w=999
B=0      
for i in range (7, 10):
    w=999
    for j in range (i+5, i+12, 3):
        if edge[j]<w:
            w = edge[j]
            #mark the node before
            B = j//3
            #mark
            weight[i] = w + weight[B]  
w=999
N=0
for i in range (7, 10):
    if weight[i]<w:
        w=weight[i]
        N=i
print(N, weight[N])
    
#stage4
w=999
B=0
for i in range (21, 24):
    B = i - 14
    weight[10] = edge[i] + weight[B]
    if weight[10]<w:
        w = weight[10]
print('10', w)
        
    