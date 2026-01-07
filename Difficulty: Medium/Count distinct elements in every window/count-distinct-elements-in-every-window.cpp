class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        vector<int>res;
        int n=arr.size();
        map<int,int>mp;
        int c=0;
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
        }
        res.push_back(mp.size());
        for(int i=k;i<n;i++){
            mp[arr[i-k]]--;
            if(mp[arr[i-k]]==0){
                mp.erase(arr[i-k]);
                
            }
            mp[arr[i]]++;
            res.push_back(mp.size());
        }
        return res;
    }
};