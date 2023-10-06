#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    if(n>0) cout<<"Positive"<<endl;
    else if(n<0) cout<<"Negative"<<endl;
    else cout<<"Zero"<<endl;
    return 0;
}