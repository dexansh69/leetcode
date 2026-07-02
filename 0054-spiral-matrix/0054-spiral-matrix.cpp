class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;
        int left =0;
        int right = n-1;
        int top=0;
        int bottom = m-1;
        while(left<=right&& top<=bottom){
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
            
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;}
       if(left<=right) {
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;}
    }
    return ans;
    }
};
/*
Why do we use:

if(top <= bottom)
and
if(left <= right)

even though the for loops already have conditions?

Example:

1 2 3

Initially:
top = 0, bottom = 0
left = 0, right = 2

Step 1:
Traverse top row -> 1 2 3
top++

Now:
top = 1
bottom = 0

This means there are NO rows left.

The next loop (right column) won't execute because:
for(i = top; i <= bottom)
=> 1 <= 0 (false)

But if we directly traverse the bottom row:

for(j = right; j >= left; j--)
    ans.push_back(matrix[bottom][j]);

bottom is still 0, so row 0 gets printed AGAIN.

Output becomes:
1 2 3 2 1

Wrong Answer.

Hence before traversing the bottom row we check:

if(top <= bottom)

which means:
"Does the bottom row still exist?"

Similarly,

if(left <= right)

checks whether the left column still exists before traversing it.

The for loops only control iteration.
The if conditions make sure the row/column hasn't already been consumed in a previous traversal.
*/