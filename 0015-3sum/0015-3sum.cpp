class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        vector<vector<int>> res;
        int si = n.size();
        
        sort(n.begin(), n.end());
        for(int i = 0; i < si-2; i++){
            int left = i + 1;  
            int right = si - 1;  

            if(i!=0 && n[i] == n[i-1]){
                continue;
            }

            while(left < right){
                int s = n[left] + n[right]; 

                if(s == -n[i]){
                    res.push_back({n[left], n[right], n[i]});
                    left++;
                    right--;
                    while (left < si && n[left] == n[left - 1]) {
                        left++;
                    }
                    while (right>=0 && n[right] == n[right + 1]) {
                        right--;
                    }   
                }
                else if(s < -n[i]){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return res;
    }
};