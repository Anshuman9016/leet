#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long rev = 0;
        int original_x = x; 

        while (x != 0) {
            int digit = x % 10;

            if (rev > INT_MAX / 10) {
                return false; 
            }
            
            rev = rev * 10 + digit;
            x = x / 10;
        }
        return rev == original_x;
    }
};