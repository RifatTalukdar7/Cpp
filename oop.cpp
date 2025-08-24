#include<iostream>
using namespace std;
class Student{
    string name;
public:
    int age;
    bool gender;
    void setName(string s){
        name=s;
    }
    void getName(){
        cout<<name<<endl;
    }
    Student(string n,int a,bool g){
        name=n;
        age=a;
        gender=g;
    }
    Student(Student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    void Info(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
        cout<<"gender : "<<gender<<endl;
    }
    bool operator == (Student &a){
        if(a.name==name && a.age==age && a.gender==gender){
            return true;
        }
        return false;
    }
};
int main()
{
    Student a("Rifat",20,0);
    a.Info();
    Student b(a);
    b.Info();
    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

    return 0;
}
