#include<iostream>
using namespace std;
int digitsum(int num){
    int temp,lastdigit,DS=0;
    temp=num;
    while(temp>0){
        lastdigit=num%10;
        num=num/10;
        DS=DS+lastdigit;
        temp++;
    }
   return DS;
}
int main(){
    int num;
    cout<<"enter the value of number = ";
    cin>>num;
    cout<<"sum of digits is = "<<digitsum(num)<<endl;
    return 0;
} 