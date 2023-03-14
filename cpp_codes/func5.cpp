//to find sum of n natural numbers
#include <iostream>
using namespace std;

int sum(int n){

    return (n*(n+1)/2);
}

int main()
{
    int a;
    cin>>a;
    cout<<sum(a)<<endl;


    return 0;

}