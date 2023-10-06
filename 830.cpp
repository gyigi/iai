#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,k,cnt=0;
    cin>>a>>k;
    int b=1;
    while(a<=k){
        int c=a;
        a+=b;
        b=c;
        cnt++;
    }
    cout<<cnt+1<<endl;
    return 0;
}