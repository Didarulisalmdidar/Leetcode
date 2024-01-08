class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>rslt;
    for(int i=0;i<strs.size();i++)
    {
       string key=strs[i];
       vector<int>cnt(26);
       for(int j=0;j<key.size();j++)
       {
           cnt[key[j]-'a']++;
       }
       string ans="";
       for(int i=0;i<cnt.size();i++)
       {
           ans+=to_string(cnt[i]);
           ans+='#';
       }
       rslt[ans].push_back(key);
       //cout<<ans<<" "<<key<<endl;

    }
        vector<vector<string>>res;
        for(auto it=rslt.begin();it!=rslt.end();it++)
            res.push_back(it->second);
        return res;
    }
};

//TC = O(M*N)
// M- NO OF STRING N-AVG LEN OF STRING
//SC=O(M*N)