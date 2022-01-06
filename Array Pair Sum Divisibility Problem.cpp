 bool canPair(vector<int> nums, int k) {
        //store cnt of nums[i]%k in map
        //for 
        map<int,int>m;
        int n = nums.size();
        for(int i = 0;i < n;i++)
        {
            m[nums[i]%k]++;
        }
        for(int i = 0;i < n;i++)
        {
            // cout<<i<<" ";
            int r = nums[i]%k;
            if((k%2==0&&r==k/2) || r == 0)
            {
                if(m[r]%2!=0)return false;
            }else{
                if(m[k - r] != m[r])return false;
            }
        }
        return true;
    }
