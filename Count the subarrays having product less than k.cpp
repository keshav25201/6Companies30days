//acquire and release strategy
//two pointer method
//acquire till product is strictly less than k
//release when product is greater than equal to k
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int product = 1;
        int ans = 0;
        for(int r = 0,l = 0;r < n;r++)
        {
            product = product*a[r];
            while(product >= k && l <= r)
            {
                product/=a[l];
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    }
