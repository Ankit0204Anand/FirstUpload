#include<iostream>
using namespace std;

int fact(int a)
{
    int s=1;
    for(int i=2;i<=a;i++)
    {
       
        s=s*i;
        
    }

    return s;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int d=fact(i)/(fact(i-j) * fact(j));
            cout<<d;
        }
        cout<<endl;
    }
    return 0;
}