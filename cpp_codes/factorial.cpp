//factorial 
#include<iostream>
using namespace std;

int fact(int a){
    int x;
    if(a==0){
        return 1;
    }
    x=(fact(a-1))*a;
    return x;

}

int main(){

    int n;
    cin>>n;

    cout<<fact(n);



    return 0;
}