#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string get_name(string name){
        return name;
    }
};

class Student: public Person{
    public:
    string get_name(string name,int age){
        cout<<name <<" "<< age<<endl;
    }
};
class Student2: public Person{
    public:
    string get_name(string name,int age){
        cout<<name <<" "<< age<<endl;
    }
};


int main(){
    Person P;
    Student st;
    cout<<P.get_name("sakil")<<endl;
    st.get_name("sakil2", 20);
    st.get_name("sakil3", 30);
    cout<<endl;
    return 0;
}