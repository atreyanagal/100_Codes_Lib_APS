//https://leetcode.com/contest/biweekly-contest-101/problems/form-smallest-number-from-two-digit-arrays/

class Solution {
public:
    
    int minNumber(vector<int>& n1, vector<int>& n2) 
    {
        int i;
        
        map<int,int> mp1;
        map<int ,int > mp2;
        
        for(i=0;i<n1.size();i++)
            mp1[n1[i]]++;
        
        for(i=0;i<n2.size();i++)
            mp2[n2[i]]++;
    
        for(auto &j : mp1)
        {
            if(mp2.find(j.first) != mp2.end())
                return j.first;
            
        }
        
        int m1 = *min_element(n1.begin(),n1.end());
        int m2 = *min_element(n2.begin(),n2.end());
        
        if(m1<m2)
            return (m1*10)+m2;
        
        return (m2*10)+m1;
    }
};