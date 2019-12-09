#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Dec 28 23:38:28 2018
 @author: subhash
"""
n = int(input())
a = list(map(int, input().split()))
a.sort()
ev = [i for i in range(1, n+1) if i%2 == 0]
odd = [i for i in range(1, n+1) if i%2 == 1]
count_ev = 0
count_odd = 0
for i in range(n//2):
 count_ev+=abs(a[i] - ev[i])
 count_odd+=abs(a[i] - odd[i])
print(min(count_ev, count_odd))