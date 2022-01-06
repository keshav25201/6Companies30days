 string decodedString(string s){
        // we will use a stack to solve this
        //an opening bracket is always preceded with a number
        if(s.length()==0)return "";
        stack<string>st;
        int n = s.length();
        string res;
        int i  = 0;
        while(i < n)
        {
            if(s[i] == ']'){
                string x;
                while(st.top()!="[")
                {
                    string ch = st.top();st.pop();
                    x = ch + x;
                }
                st.pop();
                int cnt = stoi(st.top());st.pop();
                string y;
                for(int j = 1;j <= cnt;j++)y+=x;
                st.push(y);
                i++;
            }else{
                if(!isdigit(s[i])){
                st.push(string(1,s[i]));
                i++;
                }
                else{
                    string x;
                    while(i < n && isdigit(s[i])){
                        x+=s[i];
                        i++;
                    }
                    st.push(x);
                }
            }
        }
        return st.top();
    }
