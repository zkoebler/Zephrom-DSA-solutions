#O(n) or O(n^2) if the strings are equal
def oneAway(stringA, stringB):
    if(len(stringA) != len(stringB)):
        if(len(stringB) > len(stringA)):
                stringA,stringB = stringB,stringA
        for char in stringA:
            tmp = ''.join([stringA[i] for i in range(0,len(stringA)) if stringA[i] != char])
            if tmp == stringB:
                return True
        return False
    else:
        val = 0
        for i in range(0,len(stringA)):
            if(stringA[i] != stringB[i]):
                val += 1
                if val > 1:
                    return False
    return True
def swap(a,b):
    if(b > a):
        a,b = b,a
    print(a)
    print(b)
swap(2,4)
print(oneAway("pale","bake"))


