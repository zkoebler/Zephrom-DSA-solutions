#O(nlogn) solution to problem done in O(1) space
def rotateMatrix(matrix):
    for array in matrix:
        array.reverse()
    size = len(matrix)
    size2 = size
    i = 0
    while 0 <= i < size:
        j = 0
        while 0 <= j < size2:
            matrix[i][j],matrix[size-1-j][size-1-i] = matrix[size-1-j][size-1-i],matrix[i][j]
            j += 1
        size2 //= 2
        i += 1
    return matrix
print(rotateMatrix([[1,2,3,4],
                    [5,6,7,8],
                    [9,10,11,12],
                    [13,14,15,16]]))

