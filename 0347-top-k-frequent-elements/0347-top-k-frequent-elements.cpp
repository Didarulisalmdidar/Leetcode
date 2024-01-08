class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
           pq.push(make_pair(it.second,it.first)) ;
        }
      vector<int>ans;  
     while(!pq.empty())
     {
         pair<int,int>p=pq.top();
         ans.push_back(p.second);
         k--;
         pq.pop();
         if(k==0)
             break;
         
         
     }
        return ans;
    }
};

//TC= O(NLOGN) NOT efficient