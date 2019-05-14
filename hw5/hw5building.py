# -*- coding: utf-8 -*-
"""
Created on Mon Apr  1 01:57:38 2019

@author: 105502506
"""
def bubble_sort_abs (n, s):
    for i in range (n - 1):
        swapped= False
        for j in range (n - 1 - i):
            if abs(s[j]) >= abs(s[j + 1]):
                s[j], s[j + 1] = s[j + 1], s[j]
                swapped = True
        if swapped == False:
            break

def count_flr(m, building):
    now = 0
    count = 1
    for i in range (1, m):
        if building[i]*building[now] < 0:
            now = i
            count += 1
    print(count)
    

if __name__ == "__main__":
    n = int(input())
    for i in range (n):
        m = int(input())
        build = []
        for j in range (m):
            x = int(input())
            build.append(x)
        bubble_sort_abs(m, build)
        count_flr(m, build)
        