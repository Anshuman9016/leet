#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printNos(int n) {
        if ( n < 1 )
        return ;
        cout << n << " " ;
        printNos(n-1);
    }
};