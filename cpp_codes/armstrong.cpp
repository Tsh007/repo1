#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,sum=0;
    
    cin>>a;
    int original=a; //vimp to store it bcz we are changing the variable a
    //so to compare at last we will have to use this original value instead


    for(;a!=0;)
    {
        sum=pow(a%10,3)+sum;
        a=a/10;
    }
    if(sum==original) cout<<"armstrong";
    
    else cout<<"nothing vro";


    return 0;

}