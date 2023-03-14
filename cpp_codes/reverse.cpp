#include<iostream>
using namespace std;
int main(){
    int a,count=1;
    cin>>a;

    for(int i=10;a/i!=0;i=i*10)
    {
        count++;
    }

    
    for(int k=count;k!=0;k--)
    {
        cout<<a%10;
        a=a/10;
    }




    return 0;
}