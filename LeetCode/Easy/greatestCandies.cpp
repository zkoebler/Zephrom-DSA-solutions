//O(n^2) solution where the vector is iterated twice in order to find if the extra candies lead to the kid having the greatest candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> greatestCandies;
        for(int i = 0; i < candies.size();i++)
        {
            int currentKid = candies.at(i) + extraCandies;
            bool val = true;
            for(int j = 0; j < candies.size();j++)
            {
                if(!(j == i))
                {
                    if(candies.at(j) > currentKid)
                    {
                        val = false;
                        break;
                    }
                }
            }
            greatestCandies.push_back(val);
        }
        return greatestCandies;
    }
};



