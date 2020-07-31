class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            int j = 0;
            while(nums[i] >= pow(10, j) && j < 6){
                j++;
            }
            if(j % 2 == 0){
                count++;
            }
        }
        return count;
    }
};