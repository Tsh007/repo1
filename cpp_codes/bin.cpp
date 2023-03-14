#include<iostream>
using namespace std;
int main()
{
    int n,a=0,count=1;
    cin>>n;
    for(int i=n;i>0;i=i/2,count=count*10)
        {
            //for(int j=1;j<=count;j++)
               // {
                    
                    
             //   }
            a=(i%2)*(count)+a;
        }
cout<<endl<<a;
    return 0;

}