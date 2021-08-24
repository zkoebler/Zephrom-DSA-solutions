def compress(string):
    ret = ""
    passing = True
    numChars = 1
    for i in range(0,len(string)-1):
        if string[i] == string[i+1]:
            numChars += 1
            if i == len(string)-2:
                return ret + string[i] + str(numChars)
        else:
            ret += string[i]
            if numChars != 1:
                ret += str(numChars)
            numChars = 1
    if len(string) == len(ret + string[len(string)-1]):
            return "can't compress"
    return ret + string[len(string)-1]
print(compress("poop"))
                

