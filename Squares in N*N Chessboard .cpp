//calculate mathematically
  //ans = sigma(1 to n)(n-x+1)*(n-x+1)
  //count of squares with side x in a nXn board is (n-x+1)*(n-x+1)
    long long squaresInChessBoard(long long N) {
        // code here
        long long ans = (N*(N+1)*(2*N+1))/6;
        return ans;
        // return 0;
    }
