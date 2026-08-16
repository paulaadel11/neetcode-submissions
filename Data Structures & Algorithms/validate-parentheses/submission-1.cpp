class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 == 1)
        {
            return false;
        }
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if((int)s[i] - (int)st.top() == 1 || (int)s[i] - (int)st.top() == 2)
            {
                st.pop();
            }else
            {
                st.push(s[i]);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
