#include<iostream>
using namespace std;
class student{
    protected:
    char name[30];
    double id ,m1,m2,m3,total,percentage;

    public:
    void inputInfo(){
        cout<<"Enter  your name :"<<endl;
        cin>>name;
        cout<<"Enter your Id/Roll no : "<<endl;
        cin>>id;
    }
    void getmarks(){
        cout<<"Enter your sub mark1:"<<endl;
        cin>>m1;
        cout<<"Enter your sub mark2:"<<endl;
        cin>>m2;
        cout<<"Enter your sub mark3:"<<endl;
        cin>>m3;
        total=(m1+m2+m3);
    }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Id :"<<id<<endl;
        cout<<"Your sub mark1:"<<m1<<endl;
        cout<<"Your sub mark2:"<<m2<<endl;
        cout<<"Your sub mark3:"<<m3<<endl;
        cout<<"Total Marks is :"<<total<<endl;
        cout<<"Percentage is :"<<total/3<<endl;
    }
};
int main(){
    student s[100];
    int n;
    cout<<"Enter the nubmer of student :";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
         s[i].inputInfo();

    }
    
    for (int i = 0; i <n; i++)
    {
        s[i].getmarks();
    }

     for (int i = 0; i < n ;i++)
    {
    s[i].display();
    }  
    
    return 0;
}