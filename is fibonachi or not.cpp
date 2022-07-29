#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,c=1;
    int z=c;
    bool b=false;
    while(z<=n){
        if(z==n){cout<<"YES";b=true; break;}
        z=a+c;
        a=c;
        c=z;
    }
    if(b==false){cout<<"NO";}
    return 0;
}