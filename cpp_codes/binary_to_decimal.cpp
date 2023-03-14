#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the binary number"<<endl;
    cin>>a;
    int count=0,p=1,sum=0;


    for(int i=1;a/i!=0;i=i*10){
        count++;
    }



    for(int k=1;k<=count;k++)
    {
        sum = sum + (a%10)*p;
        p=p*2;
        a=a/10;
    }
cout<<endl;
cout<<sum;

    return 0;
}