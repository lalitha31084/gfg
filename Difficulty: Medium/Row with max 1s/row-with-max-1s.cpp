// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int m=arr.size();
        int n=arr[0].size();
        int max1s=0,index=-1;
        for(int i=0;i<m;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(arr[i][j]==1)
                    c++;
            }
            if(c>max1s){
                max1s=c;
                index=i;
            }
        }
        return index;
    }
};