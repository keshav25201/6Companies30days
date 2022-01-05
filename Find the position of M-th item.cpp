 int findPosition(int N , int M , int K) {
        int x = (K+M-1)%N;
        return x==0?N:x; 
    }
