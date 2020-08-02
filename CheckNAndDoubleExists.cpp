class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        if(arr.size() == 0){
            return  false;
        }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] % 2 == 0){
                for(int j = 0; j < arr.size(); j++){
                    if((arr[i] == (arr[j]*2) || arr[j] == (arr[i]*2)) && i != j){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};