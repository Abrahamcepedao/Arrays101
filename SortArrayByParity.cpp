class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int even = 0;
        int odd = A.size()-1;
        int count = 0;
        int number = A[0];
        int current = 0;
        while(count < A.size()){
            if(number % 2 == 0){
                A[even++] = number;
                if(even != A.size()){
                    number = A[even];
                }
            } else{
                current = A[odd];
                A[odd--] = number;
                number = current;
            }
            count++;
        }
        return A;
    }
};