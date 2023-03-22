#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int* arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"Stack overflow"<<endl;
    }
}
void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}
int peek(){
    if(top>=0){
    return arr[top];
    }
}
bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
};


int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peek()<<endl;
    

return 0;
}