#include<iostream>
using namespace std;
//function defination
int sum(int a,int b){  //parameters(a,b)>>>copy of actual value
    int s;
    s=a+b;
    return s;
}
int min(int a,int b){    //parameters(a,b)>>>copy of actual value
    if(a<b){
        // cout<<a<<" is minimum";
        return a;
    }
    else{
        // cout<<b<<" is minimum";
        return b;
    }
}
//function call
int main() {
    cout<<"sum is = "<<sum(15,5)<<endl;    //arguments(15,5)>>>>actual value
    cout<<min(5,7)<<" is min"<<endl;      //arguments(5,7)>>>>actual value
    return 0;
}