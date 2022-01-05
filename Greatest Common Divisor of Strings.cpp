string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1)
        {   //this condition checks if both the strings are made of same repeating string then 
            //appending them will give same string with same number of repeatitions
            int k = __gcd(str1.length(),str2.length()); //gcd of lengths will give the maximum length string
            cout<<k;
            return str1.substr(0,k);
        }
        return "";
    }
