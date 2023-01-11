#include<iostream>
using namespace std;
class myClass{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};
int main()
{
    myClass employee;
    employee.setSalary(10000);
    cout<<employee.getSalary();
return 0;
}