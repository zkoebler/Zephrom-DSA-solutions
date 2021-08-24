//O(n*m) solution in O(1) space
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int outerSize = accounts.size();
        int max = 0;
        for(int i = 0; i < outerSize; i++)
        {
            int innerSize = accounts[i].size();
            int sum = 0;
            for(int j = 0; j < innerSize; j++)
            {
                sum += accounts[i][j];
            }
            if(sum > max)
            {
                max = sum;
            }
        }
        return max;
    }
};
