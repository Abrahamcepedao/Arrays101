class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() < 3){
            return false;
        }
        bool status = true;
        for(int i = 1; i < A.size(); i++){
            if(A[i-1] == A[i]){
                return false;
            }
            if(status){
                if(A[i-1] > A[i]){
                    if(i == 1){
                        return false;
                    }
                    status = !status;
                }
            } else{
                if(A[i-1] < A[i]){
                    return false;
                }
            }
        }
        return !status;
    }
};