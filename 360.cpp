#include<iostream>
using namespace std;
int main(){
	int n;
    cin>>n;
    int a=n/3600;
    n-=a*3600;
    int b=n/60;
    n-=b*60;
    cout<<a<<":"<<b<<":"<<n<<endl;
    return 0;
}