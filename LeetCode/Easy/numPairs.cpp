#include <map>
/*n(n-1)/2 works because each number can form a pair with at most (n-1) times. this happens for n elements. since this counts the pairs for each number, thye are counted twice meaning they must be divided by 2.*/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        map<int, int*> myMap;
        for(int i = 0; i < nums.size(); i++)
        {
            if(myMap.count(nums[i]) == 0)
            {
                int* val = new int;
                *val = 1;
                myMap.insert(pair<int,int*>(nums[i],val));
            }
            else
            {
                (*myMap[nums[i]])++;
            }
        }
        int pairs = 0;
        for(map<int,int*>::iterator itr = myMap.begin(); itr != myMap.end();++itr)
        {
            int* val = itr->second;
            int n = *val;
            pairs += (n*(n-1)/2);
            delete itr->second;
        }
        return pairs;
    }
};

//O(n) solution which uses "handshake" property of pairing in order to find the number of identical pairs
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//below is an optimization that utilizes an unordered map without heap allocation.
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map <int, int> freq;
        int count = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            freq[nums[i]] += 1;
        }
        unordered_map <int, int>::iterator it;
        it = freq.begin();
        while(it != freq.end())
        {
            count += ((it -> second) * ((it -> second) - 1)) / 2;
            it++;
        }
        return count;
    }
};
