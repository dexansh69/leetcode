class Solution {
public:
        vector<int> GenerateRow(int row){
            vector<int> ansRow;
            int ans =1;
            ansRow.push_back(ans);
            for(int i=1;i<row;i++){
                    ans = ans*(row-i);
                    ans = ans/i;
                    ansRow.push_back(ans);

            }
            return ansRow;

        }
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
                ans.push_back(GenerateRow(i));
        }
return ans;
    }
};