#include<iostream>
using namespace std;
class  person{
    protected:
    char name[30];
    int age;
    public:
    person(){
        for (int  i = 0; i < sizeof(name); i++)
        {
            name[i]='\0';
        }
        age=0;
    }
    void readData(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void display(){
        cout<<"Your Name is :"<<name<<endl;
        cout<<"Your Age is :"<<age<<endl;
    }

};
class student: public person{
    private:
    float percentage;
    public:
    student(){
        percentage=0.0;
    }
    void readstudentData(){
        cout<<"Eneter the percentage :";
        cin>>percentage;
    }
    void displaystudentData(){
        cout<<"Your name :"<<name<<endl;
        cout<<"Your percentage is :"<<percentage<<"%";
    }

};
class teacher:public person{
    private:
    double salary;
    public:
    teacher(){
        salary=0.0;
    }
    void readteacherData(){
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void displayteacherData(){
        display();
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    student s;
    teacher t;
    cout<<"Enter student Details "<<endl;
    s.readData();
    s.readstudentData();

    cout<<"\n Enter teacher Details "<<endl;
    t.readData();
    t.readteacherData();

    cout<<"\n Student Information "<<endl;
    s.displaystudentData();

    cout<<"\n Teacher Information "<<endl;
    t.displayteacherData();

    return 0;

}
