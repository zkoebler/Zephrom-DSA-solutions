#O(n) solution to problem in O(M + N) space
def zeroMatrix(matrix):
    rowZero = set()
    colZero = set()
    for i in range(0,len(matrix)*len(matrix[0])):
        row = i//len(matrix)
        col = i % len(matrix[0])
        if matrix[row][col] == 0:
            rowZero.add(row)
            colZero.add(col)
    for i in range(0,len(matrix)*len(matrix[0])):
        row = i//len(matrix)
        col = i % len(matrix[0])
        if row in rowZero or col in colZero:
            matrix[row][col] = 0
    return matrix
print(zeroMatrix([[0,2,3],[4,5,6],[7,8,9]]))

