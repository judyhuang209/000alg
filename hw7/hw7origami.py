# -*- coding: utf-8 -*-
"""
Created on Wed May  1 20:05:18 2019

@author: 105502506
"""
def maxwid(a, b):
    if a > b:
        a, b = b, a
    wid = b/4
    if a < wid:
        return a
    elif a == wid:
        return wid
    else:
        if wid < a/2:
            return a/2
        else:
            return wid

def main():
    while (True):
        n = int(input())
        if n == 0:
            return 0
        arr = [0 for i in range (n)]
        # print(arr)
        for i in range (n):
            a, b = map(int, input().split())
            arr[i] = maxwid(a, b)
            # print(arr)
        print(arr.index(max(arr))+1)
    
if __name__ == "__main__":
    main()