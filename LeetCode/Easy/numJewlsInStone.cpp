//O(j+s) solution to problem in O(j) space

#include <map>
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> jewlMap;
        int count = 0;
        for(int j = 0; j < jewels.length();j++)
        {
            char s = jewels[j];
            jewlMap.insert(pair<char, int>(s, 0));
        }
        for(int s = 0; s < stones.length();s++)
        {
            char str = stones[s];
            count += jewlMap.count(str);
        }
        return count;
    }
};
