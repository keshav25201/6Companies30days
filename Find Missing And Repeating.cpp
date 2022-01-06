int *findTwoElement(int *arr, int n) {
        //step1:
        //let x be the unique and y be the repeating number
        int xxory = 0;
        int x = 0,y = 0;
        int*res = new int[2];
        for(int i = 0;i < n;i++)
        {
            xxory^=arr[i];
            xxory^=(i+1);
        }
        //now we have got x^y
        //step2: we have two identify x and y;
        //since xxory =  x^y = 1^2^3.....^n^arr[0]^arr[1]^......^arr[n-1]
        //we can divide the rhs into two parts based on rightmost set bit
        //one part would be where rsbm is set and other it is not
        //xor of part1  = x and  xor of part2 = y
        
        int rsbm = xxory&(-xxory);
        for(int i = 0;i < n;i++)
        {
            if((arr[i]&rsbm) == 0)x^=arr[i];//brackets are important
            else y^=(arr[i]);
            if(((i+1)&rsbm) == 0)x^=(i+1);
            else y^=(i+1);
        }
        //step3 : check which is duplicate from x and y
        for(int i = 0;i < n;i++)
        {
            if(arr[i] == x){
                swap(x,y);
                break;
            }
        }
        res[0] = y;
        res[1] = x;
        return res;
    }
