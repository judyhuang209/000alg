# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
def exp(n, m):
	if ( m == 1 ):
		return n
	if ( m%2 == 0 ):
		return exp( n*n, m//2 )
    # '//' floor division
	return n * exp( n*n, m//2 )

if __name__ == "__main__":
    n = int(input())
    for i in range (n):
        x, y = map(int, input().split())
        #get integer
        x = exp(2, x)
        y = exp(2, y)
        print(x+y)