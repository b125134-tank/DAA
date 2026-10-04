#include<iostream>
using namespace std;

class Student{
    int marks;
public:
    Student(){
        marks=185;
    }

    friend void display(Student s);
};

void display(Student s){
    cout<<s.marks;
}

int main(){
    Student s;
    display(s);
    
    return 0;
}