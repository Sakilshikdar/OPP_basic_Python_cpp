
#include<bits/stdc++.h>

using namespace std;

class Employe{
    private:
    int salary;

    public:
    void Salary(int s){
        salary =s;
    };
    int getSalary(){
        return salary;
    };



};

int main(){
    Employe E;
    E.Salary(2000);
    cout<<E.getSalary()<<endl;
}