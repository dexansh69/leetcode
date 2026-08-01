class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        // Loop chalakar drop points count karo
        for(int i = 1; i < n; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        
        // Agar 1 se zyada drop hain, toh rotated sorted ho hi nahi sakta
        if(count > 1){
            return false;
        }
        
        // Agar 0 drop hai, iska matlab array pehle se perfectly sorted hai (e.g., [1,2,3])
        if(count == 0){
            return true;
        }
        
        // Agar exact 1 drop hai, toh rotated hone ke liye 
        // aakhri element ko pehle element se chota ya barabar hona padega (e.g., [3,4,1,2])
        if(count == 1 && nums[n-1] <= nums[0]){
            return true;
        }
        
        // Baki sabhi cases ke liye false (jaise count == 1 ho par nums[n-1] > nums[0] ho)
        return false;
    }
};