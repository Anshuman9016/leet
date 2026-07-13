#include <bits/stdc++.h>
using namespace std;
vector<int> arr = {1,2,3} ;
int main() {
for ( int i = 0 ; i < arr.size() ; i++)
{
    for( int j = i ; j < arr.size() ; j++)
    {
        for ( int k = i ; k <= j ; k++)
        {
            cout << "[" << arr[k] << "]";
        }
        cout << endl;
    }
}
}