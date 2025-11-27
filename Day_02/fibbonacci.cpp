#include<iostream>
using namespace std;
int main(){
    int n,i,next;
    int a=0,b=1;
    cin>>n;
    if(n==1)
    {
        cout<<a<<" ";
    }
    if(n>=1)
    {
        cout<<a<<" ";
    }
    if(n>=2)
    {
        cout<<b<<" ";
    }
    for(i=3;i<=n;i++)
    {
        next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
    return 0;

}