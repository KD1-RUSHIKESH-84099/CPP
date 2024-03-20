#include <iostream>
using namespace std;

class Address {
    private:
    string  building;
    string street;
    string city;
    int pin;

    public: 
    Address() {
        // this->building = building;
        // this->street = street;
        // this->city = city;
        // this->pin = pin;
    }

    void acceptDetails() {
        cout<<"Enter building name"<<endl;
        cin>>building;
        cout<<"Enter street name"<<endl;
        cin>>street;
        cout<<"Enter City Name"<<endl;
        cin>>city;
        cout<<"ENter the pin"<<endl;
        cin>>pin;
    }
    void displayDetails() {
        cout<<building<<endl;
        cout<<street<<endl;
        cout<<city<<endl;
        cout<<pin<<endl;
    }
};

int main() {
    Address a1;
    a1.acceptDetails();
    a1.displayDetails();
    return 0;


}