import numpy as np

def selectsort(set):
    n = len(set)
    lowest = set[0]
    sorted = set
    for i in range(n):
        lowest = sorted[i]
        lowest_index = i
        tempvar = set[i]
        for j in range(i,n):
            if set[j] < lowest:
                lowest = set[j]
                lowest_index = j                
        sorted[lowest_index] = tempvar
        sorted[i] = lowest
    return sorted
print(selectsort([10, 8, 9, 18, 100, 123, 22]))

def bubblesort(set):
    n = len(set)
    sorted = set
    for i in range(n):
        high = sorted[i]
        for j in range(1, n-i):
            if set[j-1] > set[j]:
                low = set[j]
                high = set[j-1]
                set[j] = high
                set[j-1] = low
    return set
print(bubblesort([10, 8, 9, 33, 100, 123, 22, 3.14, 5]))

def mergesort(set):
    n = len(set)
    return
