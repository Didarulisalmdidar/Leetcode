class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        int n=nums.size();
        vector<int>v[n+1];
        for(auto it:mp)
            v[it.second].push_back(it.first);
        vector<int>ans;
        for(int i=n;i>0;i--)
        {
            if(v[i].size()!=0)
            {
                for(auto it:v[i])
                {
                    ans.push_back(it);
                    k--;
                    if(k==0)
                        break;
                }
            }
            if(k==0)
                break;
        }
        return ans;
        
        
// tc= O(N)        
            
        /*priority_queue<pair<int,int>>pq;
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
        return ans;*/
    }
};
// 1st approach in comment by max heap
//TC= O(NLOGN) NOT efficient
//haepify take N times and eash push in priority_queue takes logn time . Can it solve in Linear time ? Yeah -> Bucket Sort 