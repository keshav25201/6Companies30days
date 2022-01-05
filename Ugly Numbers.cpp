//this is a hard question according to gfg
//must do question

ull getNthUglyNo(int n) {
	    set<ull>possible;
	    possible.insert(1);
	    ull x;
	    while(n--)
	    {
	        x = *possible.begin();
	        possible.erase(possible.begin());
	        possible.insert(x*2);
	        possible.insert(x*3);
	        possible.insert(x*5);
	    }
	    return x;
	}
