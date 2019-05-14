# -*- coding: utf-8 -*-
"""
Created on Wed May  1 20:38:28 2019

@author: 105502506
"""
def countnum(a, b):
    for i in range (1, a+1):
        if b-i < 0:
            break
        b -= i
    if b <= (i+1)/2:
        return b
    else:
        return (i+1)-b

def main():
    n = int(input())
    for i in range (n):
        a, b = map(int, input().split())
        print(countnum(a, b))
    
if __name__ == "__main__":
    main()
