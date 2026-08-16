class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1)
        {
            return false;
        }
        set<int> s;
        for(int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        if(nums.size() == s.size())
        {
            return false;
        }
        return true;
    }
};