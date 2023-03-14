#include<iostream>
#include<math.h>
using namespace std;

int max(int a,int b,int c){
    int max;
    if (a>b){
        if (a>c){max=a;}
        if (a<c){max=c;}
    }
    else {
        if(b>c){max=b;}
        if(b<c){max=c;}
    }


    return max;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int z=max(a,b,c);

    if (z==a){
        if(pow(z,2)==pow(b,2)+pow(c,2))
        cout<<"pythagorian";
    }

    else if (z==b){
        if(pow(z,2)==pow(c,2)+pow(a,2))
        cout<<"pythagorian";
    }
    
    else if (z==c){
        if(pow(z,2)==pow(a,2)+pow(b,2))
        cout<<"pythagorian";
    }
    
    else cout<<"not pythagorian";


    return 0;
}