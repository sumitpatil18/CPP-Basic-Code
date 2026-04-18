#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    public:
    Student(string n){
        name=n;
    }
    friend void funFriend(Student obj);
};
void funFriend(Student obj){
    cout<<"Value of:"<<obj.name;
}
int main(){
    Student s1("sumit");
    funFriend(s1);
    return 0; 
}