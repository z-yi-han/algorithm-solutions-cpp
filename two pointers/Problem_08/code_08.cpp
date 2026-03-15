class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;)
        {
            for(int j=i+1;j<n;)
            {
                //双指针
                int left=j+1,right=n-1;
                long long aim=(long long)target-nums[i]-nums[j];
                while(left<right)
                {
                    int sum=nums[left]+nums[right];
                    if(sum<aim) left++;
                    else if(sum>aim) right--;
                    else
                    {
                        ret.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                        //去重1
                        while(left<right && nums[left]==nums[left-1]) left++;
                        while(left<right && nums[right]==nums[right+1]) right--;
                    }
                }
                //去重二
            j++;    
            while(j<n && nums[j]==nums[j-1]) j++;
            }
            //去重3
        i++;
        while(i<n && nums[i]==nums[i-1]) i++;
        }
        return ret;
    }
};
