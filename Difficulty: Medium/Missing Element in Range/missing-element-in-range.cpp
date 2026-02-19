class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        set<int>s;
        vector<int>res;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>=low && arr[i]<=high){
                s.insert(arr[i]);
            }
        }
        for(int i=low;i<=high;i++){
            if(s.find(i)==s.end()){
                res.push_back(i);
            }
        }
        return res;
        
        
    }
};