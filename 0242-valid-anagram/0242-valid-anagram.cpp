// hashmap solution, similar to neetcode python implementation

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            return true;
        else
            return false;
        
    }
};
// TC = O(NLOGN)
// SC = 0(1)
// can solve it by map TC = O(N)/O(S+T) SC= O(N)