class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[n] = nums[i];
                n++;
            }
        }
        if(nums.size() == 0){
            return 0;
        } else{
            return n;
        }
    }
};