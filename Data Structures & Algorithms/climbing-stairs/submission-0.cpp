class Solution {
public:
unordered_map<int,int> mp;
    int climbStairs(int n) {
        if(n == 0 || n == 1)
        {
            return 1;
        }
        if(mp.count(n))
        {
            return mp[n];
        }
        int left = climbStairs(n - 1);
        int right = climbStairs(n - 2);
        mp[n] = left + right;
        return mp[n];
    }
};
