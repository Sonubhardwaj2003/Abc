#include<iostream>
using namespace std;
int sum(int a,int b){
    a=a+15;       //pass origanal value of a and b 
    b=b+10;
    return a+b;   

}
int main()
{
    int a=15;
    int b=5;
    cout<<"sum is = "<<sum(a,b)<<endl;
    cout<<a<<endl;                    //in a and b origanal value is print
    cout<<b<<endl;
    return 0;
}