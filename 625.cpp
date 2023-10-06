#include<iostream>
using namespace std;
int cnt;
int main(){
	int n;
    cin>>n;
    cnt+=(n/20); n-=20*(n/20);
    cnt+=(n/10); n-=10*(n/10);
    cnt+=(n/5); n-=5*(n/5);
    cnt+=(n/1); n-=1*(n/1);
    cout<<cnt<<endl;
    return 0;
}