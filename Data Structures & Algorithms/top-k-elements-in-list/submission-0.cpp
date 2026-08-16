class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> maxi;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        while(k > 0)
        {
            int maxF = 0;
            int maxE;
            for(auto p : mp)
            {
                if(p.second > maxF)
                {
                    maxF = p.second;
                    maxE = p.first;
                }
            }
            maxi.push_back(maxE);
            mp.erase(maxE);
            k--;
        }
        
        return maxi;
    }
};
