# -*- coding: utf-8 -*-
"""
Created on Tue May 14 20:24:18 2019

@author: 105502506
"""
def coprime(a, b):
    while (a!=0 and b !=0):
        if(a<=b):
            b=b%a
        else:
            a=a%b
    if(a == 0):
        if (b == 1):
            return True
        else:
            return False
    else:
        if (a == 1):
            return True
        else:
            return False

def main():
    n = int(input())

    for i in range (n):
        x = int(input())
        count = 0
        for j in range (1, x+1):
            if(coprime(j, x)):
                count+=1
        print(count)
        
if __name__ == "__main__":
    main()