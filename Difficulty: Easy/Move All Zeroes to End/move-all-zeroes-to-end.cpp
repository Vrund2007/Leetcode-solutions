class Solution {
  public:
    void pushZerosToEnd(vector<int>& n) {
        vector<int> temp;
        int c =0;
        for(int i = 0; i< n.size(); i++){
            if(n[i]!= 0){
                temp.push_back(n[i]);
            }
            else{
                c++;
            }
        }

        for(int i = 1; i<=c;i++){
            temp.push_back(0);
        }

        for(int i = 0;i<temp.size();i++){
            n[i]= temp[i];
        }
    }
};