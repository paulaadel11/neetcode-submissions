class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> count(26,0);
        for(unsigned char c : s)
        {
            count[c - 'a']++;
        }
        for(unsigned char z : t)
        {
            count[z - 'a']--;
        }
        for(int x : count)
        {
            if(x != 0)
            {
                return false;
            }
        }
        return true;
    }
};