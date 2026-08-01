class Solution {
public:
    bool check(vector<int>& nums) {
       int n = nums.size();
       int count =0;
       for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
       }
       if(count ==0){
        return true;
       }
       else if(count>1){
        return false;
       }
       else if(count==1& nums[n-1]<=nums[0]){
        return true;
       }
       return false;
    }

};