#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        //space
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
            
        }
        //one side numbers
        for(j=1;j<=i+1;j++)
        {
            cout<<(j);
            
        }
        //other side numbers
        for(j=i;j>=1;j--)
        {
            cout<<(j);
            
        }
        cout<<endl;
    }

    return 0;
}