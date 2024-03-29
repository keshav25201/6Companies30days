Print Anagrams Together
```C++
vector<vector<string> > Anagrams(vector<string>& string_list) {
        map<map<char,int>,vector<string>>m;
        for(string s : string_list)
        {
            map<char,int>fmap;
            for(char ch : s)
            {
                fmap[ch]++;
            }
            m[fmap].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto itr : m)
        {
            ans.push_back(itr.second);
        }
        return ans;
    }
```
