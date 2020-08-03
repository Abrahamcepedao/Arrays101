class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i < nums.size();){
            int j = nums[i];
            if(j != (i+1) && nums[j-1] != j){
                nums[i] = nums[j-1];
                nums[j-1] = j;
            } else{
                i++;
            }
        }
        vector<int> array;
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] != (i+1)){
                array.push_back(i+1);
            } 
        }
        return array;
    }
};