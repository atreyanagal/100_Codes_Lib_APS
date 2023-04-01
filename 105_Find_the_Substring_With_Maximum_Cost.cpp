//https://leetcode.com/contest/biweekly-contest-101/problems/find-the-substring-with-maximum-cost/

class Solution {
public:
    int maximumCostSubstring(string str, string ch, vector<int>& value) {
        
       int i;

	    map<char,int> mp;

        for(i=0;i<value.size();i++)
            mp[ch[i]]=value[i];
        
        int ar[str.length()];

        for(i=0;i<str.length();i++)
		{
            if(mp.find(str[i])==mp.end())
			{
                ar[i]= str[i]%'a' + 1;
                cout<<ar[i]<<endl;
            }
            
            else
			{
                ar[i] = mp[str[i]];
			}
        }
        
        int maxc=INT_MIN,c=0;
        
        for(int i=0;i<str.length();i++)
		{
            c=c+ar[i];

            if(c<0)
			{
                c=0;
			}

            if(c>maxc)
			{
                maxc=c;
			}
            
        }
        return maxc;
    }
};