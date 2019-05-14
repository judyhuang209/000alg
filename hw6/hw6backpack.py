# -*- coding: utf-8 -*-
"""
Created on Wed Apr 24 02:45:27 2019

@author: 105502506
"""

def quick_sort(list, left, right): #in-place
    if left >= right:
        return list
    key = list[left]
    left_pivot = left
    right_pivot = right
    while left_pivot < right_pivot:
        while left_pivot < right_pivot and list[right_pivot] >= key: #從左向右找小於key值的
            right_pivot = right_pivot - 1
        while left_pivot < right_pivot and list[left_pivot] <= key: #從右向左找大於key值的
            left_pivot = left_pivot + 1
        if left_pivot < right_pivot:
            list[left_pivot], list[right_pivot] = list[right_pivot], list[left_pivot]
    list[left], list[left_pivot] = list[left_pivot], list[left] #跟key值交換
    quick_sort(list, left, left_pivot - 1)
    quick_sort(list, right_pivot + 1, right)
    return list

def knapSack(W , wt , val , m): 
  
    if m == 0 or W == 0 : 
        return 0
  
    # If weight of the nth item is more than Knapsack of capacity 
    # W, then this item cannot be included in the optimal solution 
    if (wt[m-1] > W): 
        return knapSack(W , wt , val , m-1) 
  
    # return the maximum of two cases: 
    # (1) nth item included 
    # (2) not included 
    else: 
        return max(val[m-1] + knapSack(W-wt[m-1] , wt , val , m-1), 
                   knapSack(W , wt , val , m-1))

if __name__ == "__main__":
    n = int(input())
    for i in range (n):
        W = int(input())
        weight = []
        value = []
        weight = list(map(int, input().split()))
        value = list(map(int, input().split()))
        m = len(weight)
        print(knapSack(W, weight, value, m))
        