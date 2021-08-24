#O(n) time and O(n) space
def isPalindromePerm(string):
    mymap = {}
    stringA = string.replace(" ", "")
    for char in stringA:
        if char not in mymap:
            mymap[char] = 1
        else:
            mymap[char] = mymap[char] + 1
    offense = 0
    for char in mymap:
        currentCharNum = mymap[char]
        if currentCharNum % 2 == 0:
            continue
        else:
            if offense == 0:
                offense += 1
            else:
                return False
    return True
print(isPalindromePerm("red rum sir is murder"))
