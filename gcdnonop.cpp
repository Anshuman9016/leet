#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        for(int i = min(a,b); i >= 1; i--) {
            if(a % i == 0 && b % i == 0) {
                return i;
            }
        }
        return 1;
    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    cout << "GCD = " << obj.gcd(a,b);

    return 0;
}