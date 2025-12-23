class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=arr[i]*(n-i)*(i+1);
            
        }
        return s;
    }
};