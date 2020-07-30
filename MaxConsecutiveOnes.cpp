class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int numOnes = 0;
        int i = 0;
        while(i < nums.size()){
            int j = i;
            int count = 0;
            while(j < nums.size() && nums[j] == 1){
                count++;
                j++;
            }
            if(count > numOnes){
                numOnes = count;
            }
            i++;
            i = i + count;
        }
        return numOnes;
    }
};