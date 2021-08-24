class Solution {
/*
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.
*/
public:
    vector<int> runningSum(vector<int>& nums) {	//iterates through the vector and calls the summation on each iteration
        vector<int> sum;
        for(int i = 1; i <= nums.size(); i++)
        {
            sum.push_back(summation(i,nums));
        }
        return sum;
    }
    
    int summation(int end, vector<int>& nums)		//iterates through nums from start to 'end' and produces a sum with each iteration
    {
        int theSum = 0;
        for(int i = 0; i < end;i++)
        {
            theSum += nums.at(i);
        }
        return theSum;
    }
};

//Time complexity: O(n^2)
//Space complexity: O(n)
