#include<iostream>
using namespace std;
int main(){
    int a,count=0;
    cin>>a;

    for(int i=2;i<a;i++)
    {
        if(a%i==0){count++;}
    }
    if(count==0){cout<<"prime number";}
    else {cout<<"not prime";}



    return 0;
}