#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool checkRecursive(int i, const string& s) {
        if (i >= s.size() / 2) {
            return true;
        }

        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }

        return checkRecursive(i + 1, s);
    }

public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), 
            [](char c) { return !isalnum(c); }), 
            s.end());

        transform(s.begin(), s.end(), s.begin(), 
            [](unsigned char c){ return tolower(c); });

        return checkRecursive(0, s);
    }
};