class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here

        vector<int>res;
        for( auto row:mat){
            for(int ele:row){
                res.push_back(ele);
            }
        }
        
        sort(res.begin(),res.end());
        return res[k-1];
        
    }
};
