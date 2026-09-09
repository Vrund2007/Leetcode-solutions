class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        vector<int> res(m + n);
        
        int i = 0, j = 0, in = 0;  // Initialize all variables
        
        while(i < m && j < n) {
            if(n1[i] <= n2[j]) {
                res[in] = n1[i];
                in++;
                i++;
            }
            else {
                res[in] = n2[j];  // Fixed: was n1[j]
                in++;
                j++;
            }
        }
        while(i < m) {
            res[in] = n1[i];
            in++;
            i++;
        }
        
        while(j < n) {
            res[in] = n2[j];
            in++;
            j++;
        }
        
        n1 = res; 
    }
};