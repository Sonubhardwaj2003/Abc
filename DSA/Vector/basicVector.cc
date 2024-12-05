// #include<iostream>
// #include<vector>
// using namespace std;
// int main ()
// {
//     vector<int>v;            //initlization
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main ()
// {
//     vector<int>v(5,-100);      //initilization
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main ()
// {
//     vector<int>v(5,-100);      //initilization
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main ()
// {
//     vector<int>v;      //shorting
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     v.push_back(-2);
//     v.push_back(5);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     sort(v.begin(),v.end());
//     cout<<"\n";
//      for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// static bool cmp(int x,int y)
// {
//     if(x>y)
    
//         return true;
//     else
//         return false;
// }
// int main()
// {
//     vector<int>v;      //
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     v.push_back(-2);
//     v.push_back(5);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     sort(v.begin(),v.end(),cmp);
//     cout<<"\n";
//      for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }





#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x,int y)
{
    if(x%2==0 && y%2==0)
        return x>y;

    if(x%2!=0 && y%2!=0)
        return x<y;

    if(x%2==0 && y%2!=0)
        return true;

    if(x%2!=0 && y%2==0)
        return false;

}
int main()
{
    vector<int>v;      //
    v.push_back(10);
    v.push_back(22);
    v.push_back(30);
    v.push_back(40);
    v.push_back(-2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(9);
    v.push_back(111);
    v.push_back(0);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end(),cmp);
    cout<<"\n";
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}