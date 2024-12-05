// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j,n;
//     cout<<"enter the number of rows : ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             cout<<" ";
            
//         }
//         for(j=0;j<n-i;j++)
//         {
//             cout<<(i+1)<<" ";
            
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
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        //space
        for(j=0;j<i;j++)
        {
            cout<<" ";
            
        }
        //number
        for(j=0;j<n-i;j++)
        {
            cout<<(i+1);
            
        }
        cout<<endl;
    }

    return 0;
}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j,n;
//     cout<<"enter the number of rows : ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         //space
//         for(j=0;j<i;j++)
//         {
//             cout<<" ";
            
//         }
//         //number
//         char ch='A';
//         for(j=0;j<n-i;j++)
//         {
//             cout<<(ch);
//             ch++;
            
//         }
//         cout<<endl;
//     }

//     return 0;
// }