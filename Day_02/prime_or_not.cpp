#include<iostream>
using namespace std;
int main(){
    int n ,i;
    cout<<"Enter the number:";
    cin>>n;
    if(n<2)
    {
        cout<<"Not Prime";
    }
    else{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime ";
            break;
        }
        else{
             cout<<"Prime";
             break;
        }
    }
}
return 0;
}