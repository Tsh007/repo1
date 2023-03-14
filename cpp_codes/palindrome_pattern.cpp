#include<iostream>
using namespace std;
int main(){
    int n,count=1,xyz=2;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        for(int k=n-i;k>=1;k--)
        {
            cout<<" ";

        }

        for(int j=count;j>=1;j--)
        {
            cout<<j;
        }
        count++;
        
        
        for(int l=2;l<=i;l++)
        {
            cout<<l;
        }
        
       
        cout<<endl;
    }


    return 0;

}