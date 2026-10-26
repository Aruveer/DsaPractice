#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string str,int a){
            name=str;
            age=a;
        }
};

class Student : public Person{
    public:
        int studID;
        // LEARN!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        Student(int temp,string n,int a): Person(n,a){
            studID=temp;
        }

        void displayStudentInfo(){
            cout<<"Name : "<<this->name<<"\n";
            cout<<"Age : "<<this->age<<"\n";
            cout<<"Student ID : "<<this->studID<<"\n";
        }
};

int main(){
    Student s1(4744,"Aruveer",20);
    
    s1.displayStudentInfo();


    return 0;
}