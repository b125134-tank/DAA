#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    Student(){
        marks=90;
    }

    friend void display(Student s);
};

void display(Student s){
    cout<<s.marks;
}

int main() {

    Student s1;
    display(s1);

    return 0;
}