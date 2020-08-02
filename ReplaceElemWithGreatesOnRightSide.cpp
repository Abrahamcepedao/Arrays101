class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = 0;
        int lastNum = arr[arr.size()-1];
        for(int i = (arr.size()-1); i >= 1; i--){
            if(lastNum > max){
                max = lastNum;
            }
            lastNum = arr[i-1];
            arr[i-1] = max;
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};