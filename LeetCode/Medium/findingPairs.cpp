//O(n) solution to problem in O(nums2) space
class FindSumPairs {
public:
    vector<int> m_nums1;
    vector<int> m_nums2;
    unordered_map<int,int> mymap;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        m_nums1 = nums1;
        m_nums2 = nums2;
        int size = nums2.size();
        for(int i = 0; i < size;i++)
        {
            mymap[nums2[i]]++;
        }
    }
    
    void add(int index, int val) {
        mymap[m_nums2[index]]--;
        m_nums2[index] += val;
        mymap[m_nums2[index]]++;
    }
    
    int count(int tot) {
        int total = 0;
        int size = m_nums1.size();
        for(int i = 0; i < size;i++)
        {
            total += mymap[tot - m_nums1[i]];
        }
        return total;
        
    }
};
