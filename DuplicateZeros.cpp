class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                if(i != arr.size()-1){
                    addZero(arr, i+1);
                    i++;
                }
            }
        }
    }
    void addZero(vector<int>& arr, int num){
        for(int i = arr.size()-1; i >= num;  i--){
            arr[i] = arr[i - 1];
        }
        arr[num] = 0;
    }
};