class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        
    map<int,int> mpp;
    int n = arr.size();
    
    for (int i = 0 ; i<n ; i++){
        mpp[arr[i]]++ ;
    }
    
    vector<vector<int>> ans ;
    
    for ( auto x : mpp){
        ans.push_back({x.first, x.second}) ;
    }
    
    return ans ;
    
    }
};