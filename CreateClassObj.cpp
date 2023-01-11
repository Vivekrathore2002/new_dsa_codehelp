#include<iostream>
using namespace std;
class myClass{
    public:
    int a;
    string myString;
    void myMethod(){
        cout<<"Hello world"<<endl;
    }
};
int main()
{
    myClass myobj;
    myobj.a=1;
    myobj.myString="vivek";
    cout<<myobj.a<<"\n";
    cout<<myobj.myString<<"\n";
    myobj.myMethod();
return 0;
}