class Solution {
  public:
    void sortIt(vector<int>& arr) {
        
        int i=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i]%2==0 && arr[j]%2!=0){
                swap(arr[i],arr[j]);
                i++;
            }
            else if(arr[i]%2!=0){
                i++;
            }
            
        }
           sort(arr.begin(),arr.begin()+i,greater<int>());
           sort(arr.begin()+i,arr.end());
        
    }
};