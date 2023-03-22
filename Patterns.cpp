// #include<iostream>
// using namespace std;
// int main()
// {
    // int n;
    // cin>>n;
    // for(int i=1;i<n;i++){
    //     for(int j=1;j<n;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }


    //////////
    // int n;
    // cin>>n;
    // int count = 1;
    // for(int i=0;i<n;i++){
        
    //     for(int j=0;j<n;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    ///////////
    // #include<iostream>
    // using namespace std;
    // int main()
    // {
    //     int i=1;
    //     int n;
    //     cin>>n;
    //     while(i<=n){
    //         int j=1;
    //         while(j<=i){
    //             cout<<i<<" ";
    //             j++;
    //         }
    //         i++;
    //         cout<<endl;
    //     }
    // }


    ///////
    // #include<iostream>
    // using namespace std;
    // int main()
    // {
    //     int i=1;
    //     int n;
    //     cin>>n;
    //     int j=1;
    //     while(i<=n){
    //         while(j<=n){
    //             cout<<j<<" ";
    //             j++;
    //         }
    //         i++;
    //         cout<<endl;
    //     }
    // }

    ////
    // #include<iostream>
    // using namespace std;
    // int main()
    // {
    //     int n;
    //     cin>>n;
    //     int i=1;
    //     int count=1;
    //     while(i<=n){
    //         int j=i;
    //         while(j>0){
    //             cout<<count<<" ";
    //             count++;
    //             j--;
    //         }
    //         i++;
    //         cout<<endl;
    //     }
    // }
    ///////
    // #include<iostream>
    // using namespace std;
    // int main()
    // {
    //     int n;
    //     cin>>n;
    //     int i=1;
    //     while(i<=n){
    //         int j=i;
    //         int count=i;
    //         while(j>0){
    //             cout<<count<<" ";
    //             count++;
    //             j--;
    //         }
    //         i++;
    //         cout<<endl;
    //     }
    // }
    //////////
    #include<iostream>
    using namespace std;
    int main()
    {
        int i=1;
        int n;
        cin>>n;
        while(i<=n){
            int j=1;
            int count=i;
            while(j<=i){
                cout<<count<<" ";
                count--;
                j++;
            }
            i++;
            cout<<endl;
        }
    }