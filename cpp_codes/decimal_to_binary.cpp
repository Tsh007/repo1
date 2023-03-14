#include<iostream>
using namespace std;

int main()
{
int a,b=1,k=0,count=0,t;
cin>>a;

for(int j=a;j!=0;j=j/2,b=b*10)
{
    k=(j%2)*b+k;//vimp to use this and understand 
    //also instead of this complicated thing we can use array
    count++;
}
cout<<endl;
cout<<k;
cout<<endl;


//reverse of this binary number just for fun

for(;count!=0;count--)
{
    cout<<k%10;
    k=k/10;
}

return 0;
}