#O(n) algo for inserting
def URLify(string):
    elements = string.split(' ')
    newList = [x for x in elements if x != '']
    idx = 1
    while(idx < len(newList)):
        newList.insert(idx,'%20')
        idx += 2
    return newList
print(URLify("      Mr John Smith is happy!    "))
