class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n==INT_MIN || n==INT_MAX)return false;
        return (n&(n-1))==0;
    }
};