class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int pseudo=0;
        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
                pseudo = matrix[i][j];
                matrix[i][j]= matrix[j][i];
                matrix[j][i]= pseudo;
                
            }
        }
        // now row swapping
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                pseudo=matrix[i][j];
                matrix[i][j]=matrix[i][n-1-j];
                matrix[i][n-1-j]= pseudo;
            }
        }
       
    }
};