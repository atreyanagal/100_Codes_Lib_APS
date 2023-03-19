//https://leetcode.com/contest/biweekly-contest-99/problems/count-total-number-of-colored-cells/

class Solution {
public:
    long long coloredCells(long long num) 
    {
        long long term1,term2;
            
        term1=num*num;
        term2=(num-1)*(num-1);
        return term1+term2;
    }
};