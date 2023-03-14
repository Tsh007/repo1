#include<iostream>
using namespace std;
int fact(int n){
    int x;
    if(n==0||n==1){
        return 1;
    }


    x=fact(n-1)*n;
    return x;
}



int main(){

int n;
cin>>n;

for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<fact(i)/(fact(j)*fact(i-j));
    //vimp use gbd in terminal to debug segmentation fault
    //lol wasted solving segmentation fault on code

    }
    cout<<endl;
}


    return 0;
}