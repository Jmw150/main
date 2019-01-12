
A = [[4.0,1/2.0,1.0],[1/2.0,17/16.0,1/4.0],[1.0,1/4.0,33/64.0]]

L = A
n = len(A)

# step 1
L[0][0] = A[0][0]**0.5

# step 2
for j in range(1,n-1) :
    L[j][0] = A[j][0]/L[0][0]

# step 3
for i in range(1,n-2) :
    # step 4
    temp = 0
    for k in range(0,i-2) :
        temp += L[i][k]**2
    L[i][i] = (A[i][i] - temp)**0.5
    # step 5
    for j in range(i+1,n-1) :
        temp = 0
        for k in range(0,i-2) :
            temp += L[j][k]*L[i][k]
        L[j][i] = (A[j][i] - temp)/L[i][i]

# step 6
temp = 0
for k in range(0,n-2) :
    temp += L[n-1][k]**2
L[n-1][n-1] = (abs(A[n-1][n-1] - temp))**0.5

# step 7
print (L)
