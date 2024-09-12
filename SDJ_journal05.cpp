#include<iostream>
using namespace std;
class vehicle{
    protected:
    char fuel[30];
    int regNO;
    public:
    void getdata(){
        cout<<"Enter Registration Number : "<<endl;
        cin>>regNO;
        cout<<"Enter Vehicle Fuel type:"<<endl;
        cin>>fuel;
    }
    void display(){
        cout<<"Registration Number :"<<regNO<<endl;
        cout<<"Fuel Type :"<<fuel<<endl;
    }
};
class twoWheeler:public vehicle{
    private:
    double distance,milege;
    public:
 
    void getdata(){
           vehicle::getdata();
        cout<<"Enter Distance (in KM):";
        cin>>distance;
        cout<<"Enter milege (in km/l):";
        cin>>milege;
    }
    void display(){
        vehicle::display();
        cout<<"Distance :"<<distance<<" km"<<endl;
        cout<<"milege: "<<milege<<" km/l"<<endl;

        double fuelused=distance/milege;
        cout<<"Fuel Used : "<<fuelused<<" per kilometer"<<endl;

    }

};
int main(){
    twoWheeler tw;
    cout<<"Ener two-Wheeler Informaion: "<<endl;
    tw.getdata();

    cout<<"\nTwo-Wheeler Informaiton :"<<endl;
    tw.display();
    return 0;
}