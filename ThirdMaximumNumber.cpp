class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max = INT_MIN;
        if(nums.size() < 3){
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] > max){
                    max = nums[i];
                }
            }
            return max;
        } else{
            int max2 = INT_MIN, max3 = INT_MIN, count = 0, sCount = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] > max){
                    max3 = max2;
                    max2 = max;
                    max  = nums[i];
                    count++;
                } else if(nums[i] > max2 && nums[i] != max){
                    max3 = max2;
                    max2 = nums[i];
                    count++;
                } else if(nums[i] > max3 && nums[i] != max2 && nums[i] != max){
                    max3 = nums[i];
                    count++;
                } else if(nums[i] == INT_MIN){
                    sCount++;
                    if(sCount == 1){
                        count++;
                    }
                }
            }
            if(count < 3){
                return max;
            } else{
                return max3;
            }
        }
    }
};