// #include<iostream>
// using namespace std;
// int main(){
//     int i ,j,n;
//     cout<<"Enter the row and column:";
//     cin>>n;
//     for(i=n;i>=1;i--)
//     {
//       for(j=1;j<=i;j++)
//       {
//         cout<<j<<" ";
//       }
//       cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int i ,j,n;
    cout<<"Enter the row and column:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      for(j=n;j>=n-i+1;j--)
      {
        cout<<j<<" ";
      }
      cout<<endl;
    }
}