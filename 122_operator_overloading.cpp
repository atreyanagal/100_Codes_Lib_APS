//Operator Overloading in Polymorphism in C++

#include<bits/stdc++.h>
using namespace std;

class op_over{

    public:
            void add(int a,int b)
            {
                cout<<"Addition of 2 nos is:"<<a+b;
            }

            void add(int a,int b,int c)
            {
                cout<<"Addition of 3 nos is:"<<a+b+c;
            }

};

int main()
{
    op_over obj;

    obj.add(1,2);
    cout<<endl;
    obj.add(1,2,3);

    return 0;
}

