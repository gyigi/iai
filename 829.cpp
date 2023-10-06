#include<iostream>
using namespace std;
int n,m,c;
int main(){
    cin>>n>>m>>c;
    if(c%m==0) cout<<c/m<<" "<<10<<endl;
    else cout<<c/m+1<<" "<<c%m<<endl;
    return 0;
}