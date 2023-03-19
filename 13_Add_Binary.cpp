//https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) 
    {
        if(b.size()>a.size())
        swap(a,b);

        int i,j,carry=0;

        for(i=b.size()-1,j=a.size()-1;i>=0;i--,j--)
        {
            if(carry==0)
            {
                if(b[i]=='1' && a[j]=='0')
                {
                    a[j]='1';
                }

                else if(b[i]=='1' && a[j]=='1')
                {
                    a[j]='0';
                    carry=1;
                }
            }

            else
            {
                if(b[i]=='0' && a[j]=='0')
                {
                    a[j]='1';
                    carry=0;
                }

                else if(b[i]=='1' && a[j]=='1')
                {
                    a[j]='1';
                    carry=1;
                }

                else
                {
                    a[j]='0';
                    carry=1;
                }
            }
        }

        if(carry==1)
        {
            for(int i=j;i>=0;i--)
            {
                if(carry==1)
                {
                    if(a[i]=='1')
                    {
                        a[i]='0';
                        carry=1;
                    }

                    else
                    {
                        a[i]='1';
                        carry=0;
                    }
                }
            }

            if(carry==1)
            {
                a="1"+a;
            }
        }
            return a;
    }
};