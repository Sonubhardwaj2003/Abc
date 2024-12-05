// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j,n;
//     int num=1;
//     cout<<"enter the number of rows : ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         for(j=1;j<=i+1;j++)
//         {
//             cout<<num<<" ";
//             num++;
            
//         }
//         cout<<endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    char ch='A';
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            cout<<ch<<" ";
            ch++;
            
        }
        cout<<endl;
    }

    return 0;
}