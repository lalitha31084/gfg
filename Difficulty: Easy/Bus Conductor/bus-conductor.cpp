class Solution {
  public:
    int findMoves(vector<int>& chairs, vector<int>& passengers) {
        // code here
        int c=0;
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        for(int i=0;i<chairs.size();i++){
            c+=abs(chairs[i] - passengers[i]);
        }
        return c;
    }
};