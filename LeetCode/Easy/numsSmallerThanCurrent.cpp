class Solution {
public:
    //O(n^2) time
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> myVec;
        for(int i = 0; i < nums.size();i++)
        {
            int currentNum = nums[i];
            int val = 0;
            for(int j = 0; j < nums.size();j++)
            {
                int otherNum = nums[j];
                if(currentNum != otherNum && currentNum > otherNum)
                {
                    val++;
                }
            }
            myVec.push_back(val);
        }
        return myVec;
    }
};

//Improved running time (faster than 94% of submissions) O(nLogn)
#include <algorithm>

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        std::unordered_map<int,int> numMap;
        vector<int> copyVec;
        copyVec = nums;
        std::sort(copyVec.begin(),copyVec.end());   //O(nlogn) on average
        
        int theSize = copyVec.size();
        for(int i = --theSize; i >= 0; --i)
        {
            numMap[copyVec[i]] = i;
        }
        
        copyVec.clear();
        for(int i = 0; i < theSize + 1;i++)
        {
            copyVec.push_back(numMap[nums[i]]);
        }
        return copyVec;
    }
};


