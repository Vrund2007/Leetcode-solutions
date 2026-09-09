class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &n) {

        if(n.size()== 0){
            return {};
        }
        vector<int> temp;
        temp.push_back(n[0]);  

        for (int i = 1; i < n.size(); i++) {
            if (n[i] != n[i-1]) {
                temp.push_back(n[i]);
            }
        }

        return temp;
    }

};