#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    cout<<9-n%10<<9-n%100/10<<9-n%1000/100<<9-n/1000<<endl;
    return 0;
}