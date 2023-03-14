#include<iostream>
using namespace std;
int main()
{
    int a,a1=0,a2=1,sum;
    cin>>a;
    cout<<a1;
    cout<<a2;
    for(int i=1;i<=(a-2);i++){
        sum=a1+a2;
        cout<<sum;
        a1=a2;
        a2=sum;

    }



    return 0;
}