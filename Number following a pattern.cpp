string printMinNumberForPattern(string S){
        //we will do it using stack
        //we will assess the pattern in groups where I is the break point
        //since we are incrementing k there is no point of repeatition
        //its better to watch the pepcoding video might be able to remember it
        
        int n = S.length();
        stack<int>st;
        int k = 1;
        string ans;
        // n length string => n+1 digit number
        for(int i = 0;i < S.length();i++)
        {
            if(S[i] == 'D')
            {
                st.push(k);
                k++;
            }else{
                st.push(k);
                k++;
                while(st.size())
                {
                    int x = st.top();st.pop();
                    ans+=('0' + x);
                }
            }
        }
        //at the end of string if there are a sequence of DDDDDD they have to  be popped out
        st.push(k);
        while(st.size() > 0)
        {
             int x = st.top();st.pop();
             ans+=('0' + x);
        }
        return ans.substr(0,n+1);
    }
