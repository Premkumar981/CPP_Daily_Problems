#include<iostream>
using namespace std;

class Address{
	public:
		Address(string street,string city,string state,string zip):street(street),city(city),state(state),zip(zip){	
		}
	private:
		string street;
		string city;
		string state;
		string zip;
};

class Person{
	public:
		Person(string name): name(name), address(nullptr){
		
		}
		void setAddress(Address* address){
			this->address=address;
		}
	private:
		string name;
		Address* address;
};

int main()
{
	Address* address=new Address("123 main St.","Anytown","CA","12345");
	Person person("john Doe");
	person.setAddress(address);
}
*
