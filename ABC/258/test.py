def rotate(a,n):
    return a[n:]+a[:n]
a = [1, 2, 3]
print(rotate(a, 5))