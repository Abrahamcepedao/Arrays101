class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> array = heights;
        sort(heights.begin(),  heights.end());
        int num = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != array[i]){
                num++;
            }
        }
        return num;
    }
};