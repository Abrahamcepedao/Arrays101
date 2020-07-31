class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>S;
        for(int i = 0; i < A.size(); i++){
            S.push_back(pow(A[i], 2));
        }
        sort(S.begin(), S.end()); 
        return S;
    }
};