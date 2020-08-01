class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                if(i < (nums.size()-1)){
                    for(int j = i+1; j < nums.size(); j++){
                        nums[j-1] = nums[j]; 
                    }
                    nums[nums.size()-1] = val + 1;
                    i--;
                }
                len++;
            }
        }
        len = nums.size() - len;
        return len;
    }
};