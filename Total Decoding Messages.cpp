  int MOD = 1e9+7; 
	    int util(string&str,int idx,int dp[])
	    {
	        if(idx >= str.length())return 1;
	        if(dp[idx]!=-1)return dp[idx];
	        if(str[idx] == '0')return dp[idx] = 0;
	        int ans = 0;
	        ans = (ans + util(str,idx+1,dp))%MOD;
	        if(idx+1 < str.length())
	        {
	            if(str[idx]=='1' || (str[idx]=='2' && str[idx+1] <= '6'))
	            ans = (ans + util(str,idx+2,dp))%MOD;
	        }
	        return dp[idx] = ans;
	    }
		int CountWays(string str){
		    int dp[str.length()];
		    memset(dp,-1,sizeof(dp));
		    return util(str,0,dp);
		}
