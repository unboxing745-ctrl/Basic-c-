#include<iostream>
using namespace std;
int main(){
    int n ,p,i,num;
    cout<<"enter the number:";
    cin>>n;
    num=n;
    cout<<"enter the power";
    cin>>p;
    for(i=1;i<p;i=i+1)
    {
        num=num*n;
    }
    cout<<num;
}