#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    if((n%4==0&&n%100!=0)||(n%400==0)) cout<<"Leap year"<<endl;
    else cout<<"Common year"<<endl;
    return 0;
}