    int minSubArrayLen(int target, vector<int>& nums) {
        //lets try two pointer method
        //realase when sum is greater than equal to target
        int n = nums.size();
        int ans = -1;
        int sum = 0;
        for(int i = 0,j = 0; i < n;i++)
        {
            sum+=nums[i];
            while(sum >= target && j <= i)
            {
                if(ans == -1 || i-j+1 < ans)ans = i-j+1;
                sum-=nums[j];
                j++;
            }
        }
        return ans==-1?0:ans;
    }
