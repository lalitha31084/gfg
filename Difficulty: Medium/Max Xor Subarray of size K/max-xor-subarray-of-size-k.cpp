class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int s=0;
        for(int i=0;i<k;i++){
            s=s^arr[i];
        }
        int res=s;
        for(int i=k;i<n;i++){
            s=s^arr[i];
            s=s^arr[i-k];
            res=max(res,s);
        }
        return res;
        
    }
};