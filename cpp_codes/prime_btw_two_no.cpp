#include<iostream>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        for(int k=2;k<i;k++)
        {
            if(i%k==0){count++;}
            
        }

        if(count==0){cout<<i<<endl;}
        count=0;
    }



    return 0;
}