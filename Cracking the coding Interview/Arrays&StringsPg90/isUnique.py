#O(n) solution in O(n) space
#mySet = set()
#mystr = "abcdefga"
#for char in mystr:
#    if(char in mystr):
#        print("false")
#        break
#    else:
#        mySet.add(char)



#O(nlogn) solution done inplace with no additional data structures
def mergeSort(arr):
    if len(arr) > 1:
 
         # Finding the mid of the array
        mid = len(arr)//2
 
        # Dividing the array elements
        L = arr[:mid]
 
        # into 2 halves
        R = arr[mid:]
 
        # Sorting the first half
        mergeSort(L)
 
        # Sorting the second half
        mergeSort(R)
 
        i = j = k = 0
 
        # Copy data to temp arrays L[] and R[]
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
 
        # Checking if any element was left
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
 
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1
mystr = "abcdefg"
def isUnique(strVar):
    strVar = list(strVar)
    mergeSort(strVar)
    for i in range(len(strVar)-1):
        if strVar[i] == strVar[i+1]:
            return False
    return True
print(isUnique(mystr))
