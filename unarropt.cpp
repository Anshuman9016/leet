#include <bits/stdc++.h>
using namespace std;

vector<int> sortedarray(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionarray;
    
    // 1. Process both arrays together
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            // Fixed typo: added the missing 'if'
            if (unionarray.size() == 0 || unionarray.back() != a[i]) {
                unionarray.push_back(a[i]);
            }
            i++; // Moved outside the inner if so we don't get stuck in an infinite loop
        } else {
            if (unionarray.size() == 0 || unionarray.back() != b[j]) {
                unionarray.push_back(b[j]);
            }
            j++;
        }
    } // <-- Added missing closing brace for the first while loop
    
    // 2. Process remaining elements of array 'a'
    while (i < n1) {
        if (unionarray.size() == 0 || unionarray.back() != a[i]) {
            unionarray.push_back(a[i]);
        }
        i++;
    }
    
    // 3. Process remaining elements of array 'b'
    while (j < n2) {
        if (unionarray.size() == 0 || unionarray.back() != b[j]) {
            unionarray.push_back(b[j]);
        }
        j++;
    }
    
    return unionarray;
} // <-- Added missing closing brace for the function