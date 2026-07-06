class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0 ;
        int num = n ;
        int ans = 0 ;
        int ld = 0 ;
        while ( n != 0 ){
            ld = n % 10 ;
            sum = sum + (ld*ld*ld) ;
            
             ans = (ans*10) + ld ;
             n = n /10 ;
        }
        return sum == num ;
    }
};