#include<iostream>
using namespace std;
int main(){
    int n ,i,fact;
    fact=1;
    cout<<"Enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial:"<<fact;//only valid upto n=33
}