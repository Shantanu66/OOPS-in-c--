#include<bits/stdc++.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #include<bits/stdc++.h>
using namespace std;
///OOPS
///better to create in different files for main and class
/*class Student
{
    int age;
public:
    int rollnumber;
    char name[50];
    void display()
    {
        cout<<age<<" "<<rollnumber;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a,int password)
    {
        if(password!=123)
        {
            return;
        }
        age=a;
    }
};
int main()
{
    //create object statically
    Student s1;
    Student s2,s3,s4;

    //create object dynamically
    Student *s5=new Student;
    //s1.age=24;
    s1.setAge(24);
    s1.rollnumber=1929174;
    s1.display();
    cout<<"Enter Name:"<<endl;
    cin.getline(s1.name,50);
    cout<<"Name:"<<s1.name<<endl;
    cout<<"Age:"<<s1.getAge()<<endl;
    cout<<"Roll number:"<<s1.rollnumber<<endl;
    //(*s5).age=20;
    (*s5).rollnumber=1382923;
    //s5->age=20;
    s5->setAge(32);
    s5->rollnumber=1382923;
    s5->display();
    cin.getline(s5->name,50);
}*/
/*class Student
{
    int age;
public:
    int Roll;
    ///default user created constructor
    Student()
    {
        cout<<"Default Constructor called"<<endl;
    }
    ///parameterized user created constructor
    Student(int r)
    {
        Roll=r;
        cout<<"parameterized constructor called"<<endl;
    }
    Student(int Roll)
    {
        this->Roll=Roll;   //here it is mandatory because we have to diffrentiate between
                           //parameter roll number and property roll number
        cout<<"parameterized constructor called"<<endl;
    }
    Student(int r,int a)
    {
        this->Roll=r;  //optional
        this->age=a;   //optional
        cout<<"Parameterized constructor 2 called"<<endl;
        cout<<"This:"<<this<<endl;
    }
    void display()
    {
        cout<<age<<" "<<Roll<<endl;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age=a;
    }
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }
};*/
/*int main()
{
    Student S(1929174);
    S.display();

    /*Student S1(10,100);
    cout<<"Address of S1:"<<&S1<<endl;
    Student s1;
    s1.display();
    Student s2;
    s2.display();
    Student *s3=new Student;
    s3->display();
    Student s4(1929100);
    s4.display();
    Student *s5=new Student(11278172,43);
    s5->display();
    return 0;
}*/