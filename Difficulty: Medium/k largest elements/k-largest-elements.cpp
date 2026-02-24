class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        priority_queue<int>maxHeap;
        int n=arr.size();
        for(int i=0;i<n;i++){
            maxHeap.push(arr[i]);
        }
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(maxHeap.top());
            maxHeap.pop();
            
            
        }
        
        return res;
    }
};