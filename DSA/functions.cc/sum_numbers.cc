#include<iostream>
using namespace std;
int sum(int n ){
    int i,s=0;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    cout<<"sum is = "<<sum(n)<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int sum(int n ){
//     int i,s=0;
//     for(i=1;i<=n;i++){
//         s=s+i;
//     }
//     return s;
// }
// int main(){
    
//     cout<<"sum is = "<<sum(10)<<endl;
//     return 0;
// }