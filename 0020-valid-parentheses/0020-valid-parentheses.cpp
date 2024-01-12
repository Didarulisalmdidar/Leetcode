class Solution {
public:
    bool isValid(string s) {
      stack<char>st;
        for(auto it:s)
        {
            if(it==')' || it=='}' || it==']')
            {
                if(!st.empty()){
                if(it==')' && st.top()!='(')
                    return false;
                else if(it=='}' && st.top()!='{')
                        return false;
                else if(it==']' && st.top()!='[')
                        return false;
                else
                    st.pop();
                
                }
                else
                    return false;
            }
            else
                st.push(it);
        }
        if(!st.empty())
        return false;
        else
            return true;

    }
};