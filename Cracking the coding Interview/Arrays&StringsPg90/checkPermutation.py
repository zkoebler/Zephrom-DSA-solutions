#O(n) time and O(n) space
def solution1(stringA,stringB):
    if(len(stringA) != len(stringB)):
        return False
    dictA = {}
    dictB = {}
    for char in stringA:
        if(char not in dictA):
            var = 1
            dictA[char] = var
        else:
            dictA[char] = dictA[char] + 1
    for char in stringB:
        if(char not in dictB):
            var = 1
            dictB[char] = var
        else:
            dictB[char] = dictB[char] + 1
    return (dictChecker(dictA,dictB) and dictChecker(dictB,dictA))
def dictChecker(thedict1,thedict2):
    for char in thedict1:
        if(char not in thedict2):
            return False
        else:
            if(thedict1[char] != thedict2[char]):
                return False
    return True

#print(solution1("abc","cba"))

#O(nlogn) time in O(1) space
def solution2(stringA, stringB):
    return sorted(list(stringA)) == sorted(list(stringB))
print(solution2("abc","cbae"))
