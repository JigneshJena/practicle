#include<iostream>
using namespace std;
int top=-1,n=5,s[5];
class stack
{
    public:
    void push(int data);
    void pop();
    void display();
    void peep();
    void update();
};
void stack::push(int data){
    top++;
    s[top]=data;
}
void stack::pop(){
    s[top--];
}
void stack :: display(){
    int i;
    for(i=top;i>=0;i--)
    {
        cout<<s[i]<<endl;
    }
}
void stack :: peep(){
    int i;
     cout<<"Enter element to display: ";
    cin>>i;
    if((top-i+1)==-1){
        cout<<"Underflow"<<endl;
        return;
    }
   
    cout<<"Value at location : "<<s[top-i+1]<<endl;
}
void stack:: update(){
    int i;
    if((top-i+1)==-1){
        cout<<"UnderFlow"<<endl;
    }
    cout<<"Enter element to Change:";
    cin>>i;
    cout<<"Value at location: "<<s[top-i+1]<<endl;
    cout<<"Enter new value :";
    cin>>s[top-i+1];
}
int main(){
    stack s;
    int data,ch;
    
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Display "<<endl;
    cout<<"4. Peep"<<endl;
    cout<<"5. Edit "<<endl;
    cout<<"6. Exit"<<endl;
    do {
        cout<<"Enter Choice :";
        cin>>ch;
        switch(ch){
            case 1:
            if(top==n-1){
                cout<<"OverFlow "<<endl;
                break;
            }
            cout<<"Enter data :";
            cin>>data;
            s.push(data);
            s.display();
            break;
            case 2:
            if(top==-1){
                cout<<"Underflow";
                break;
            }
            s.pop();
            s.display();
            break;
            case 3:
            s.display();
            break;
            case 4:
            s.peep();
            break;
            case 5:
            s.update();
            s.display();
            break;
            case 6:
            return 0;
            default:
            cout<<"Enter right choice "<<endl;
        }
    }while(ch!=0);
    return 0;
}