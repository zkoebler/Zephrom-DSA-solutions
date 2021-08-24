//O(n) solution to shuffling the vectors into a new vector
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> newVec;
        int size = nums.size();
        for(int i = 0; i < size - n; i++)
        {
            newVec.push_back(nums.at(i));
            newVec.push_back(nums.at(i + n));
        }
        return newVec;
    }
};
