class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int cnt=0;
       
        if(nums.size()<3)
            return ans;
       
        map<int,char>mp;
        int zero=0;
     for(int i=0;i<nums.size()-2;i++)
        {
           int left=i+1;
           int right=nums.size()-1;
           if(mp[nums[i]]==1)
            continue;
            map<int,int>ma;
            while(left<right)
            {

                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0)
                {
                    //cout<<i<<" "<<nums[i]<<endl;
                   if(ma[nums[i]]==1 && ma[nums[left]]==1 && ma[nums[right]]==1)
                   {
                       int x=0;
                       //cout<<"ma " <<i<<" "<<left<<" "<<right<<endl;
                   }
                   else{
                   ans.push_back({nums[i],nums[left],nums[right]});
                   cout<<nums[i]<<" "<<nums[left]<<" "<<nums[right]<<endl;
                   }
                   ma[nums[i]]=1;
                   ma[nums[right]]=1;
                   ma[nums[left]]=1;
                   left++;
                   right--;

                   //cout<<"baaa " <<i<<" "<<left<<" "<<right<<endl;

                }
                else if(sum>0)
                    right--;
                else
                    left++;
            }
            mp[nums[i]]=1;
        }
        return ans;
        
    }
};