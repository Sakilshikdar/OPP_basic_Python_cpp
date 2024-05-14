#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    string name(){
    string name="sakil";
    return name;
    }

};

class Teacher:public Student{
    public:
    void age ()
    {
        cout<<"From Teacher class"<<endl;
    }
};

int main(){
    Teacher T;
    cout<<T.name()<<endl;
    T.age();
}