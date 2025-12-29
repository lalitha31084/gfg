class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int i = 0, j = 0, cnt = 0;
        
        while (i < a.size() && j < b.size()) {
            cnt++;
            if (a[i] <= b[j]) 
            {
                if (cnt == k) return a[i];
                i++;
            } 
            else 
            {
                if (cnt == k) return b[j];
                j++;
            }
        }
        
        while (i < a.size()) {
            cnt++;
            if (cnt == k) return a[i];
            i++;
        }
        
        while (j < b.size()) {
            cnt++;
            if (cnt == k) return b[j];
            j++;
        }
        
        return -1;
    }
};
