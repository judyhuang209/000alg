# -*- coding: utf-8 -*-
"""
Created on Thu Mar 14 23:05:19 2019

@author: 105502506
"""

def print_bubble_sort (n, s):
    count = 0
    for i in range (n - 1):
        swapped= False
        for j in range (n - 1 - i):
            if s[j] > s[j + 1]:
                s[j], s[j + 1] = s[j + 1], s[j]
                swapped = True
                count += 1
        if swapped == False:
            break
    return print("Optimal swapping takes", count, "swaps.")
    
def main():
    n = int(input())
    for i in range (n):
        num_list = []
        m = int(input())
        # get list from input
        num_list = [int(x) for x in input().split()]
        print_bubble_sort (m, num_list)
    
if __name__ == '__main__':
    main()