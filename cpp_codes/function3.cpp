#include <iostream>
using namespace std;

int fact(int n){

    int x;
    if(n==1){
        return 1;
    }
    x=n*fact(n-1);

    return x;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<"factorial"<<" "<<fact(n)<<endl;

    cout<<"nCr"<<endl;
    cout<<(fact(n))/(fact(r)*fact(n-r));




    return 0;
}