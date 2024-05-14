
#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    string Stmethod(string name){
        
        cout<<"From student class"<<endl;
        return name;
    }
    int stAge(int age);
};

int Student::stAge(int age){
    return age;

};


int main(){
    Student class7;
    cout<<class7.Stmethod(
        "toha"
    )<<endl;

    cout<<class7.stAge(20);
    return 0;
}