#include<iostream>
using namespace std;
int main()
{
    // ....
    // int i=1,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // ....
    // ....
    // int i=1,n;
    // cin>>n;
    // int count=1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count=count+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    
    // }
    // ....
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        int j=n;
        while(j<=n){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
return 0;
}