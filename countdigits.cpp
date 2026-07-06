class Solution {
  public:
    int countDigits(int n) {
        // code here
        int cnt = 0 ;
        while ( n > 0 )
        {
            int lastdigit = n % 10 ; 
            n = n / 10 ;
            cnt = cnt + 1;
        }
        return cnt ; 
    }
};