#include <string>
#include <iostream>
#include <vector>
#include "address.h"

Address::Address(){
	init();
}

Address::~Address(){

}

void Address::print(){
	std::cout<<toString();
}

std::string Address::toString(){
	std::string strAddress=getFirst()+" "+getLast()+" "+getPhoneNumber();
	return strAddress;
}

void Address::init(){
	setFirst("");
	setLast("");
	setPhoneNumber("(000) 000 0000");
}

void Address::setFirst(std::string strpFirst){
	if(strpFirst.size()<1){
		strpFirst="Default";
	}
	strFirst=strpFirst;
}

void Address::setLast(std::string strpLast){
	strLast=strpLast;
}

void Address::setPhoneNumber(std::string strpPhoneNumber){
	strPhoneNumber=strpPhoneNumber;
}

std::string Address::getFirst(){
	return strFirst;
}

std::string Address::getLast(){
	return strLast;
}

std::string Address::getPhoneNumber(){
	return strPhoneNumber;
}

void Address::input(){
	std::string strTempValue="";

	std::cout<<"Enter a first name: ";
	std::cin>>strTempValue;
	setFirst(strTempValue);

	std::cout<<"Enter a last name: ";
	std::cin>>strTempValue;
	setLast(strTempValue);

	std::cout<<"Enter a phone number: ";
	std::cin>>strTempValue;
	setPhoneNumber(strTempValue);
}

int main(){
	std::vector<Address> vtrAddress(2);
	Address objAddress=Address();
	Address objAddress2=Address();

	vtrAddress.clear();

	objAddress.setFirst("chris");
	objAddress.setLast("M");
	objAddress.setPhoneNumber("(210) 555 5555");

	vtrAddress.push_back(objAddress);

	objAddress2.setFirst("Daniel");
	objAddress2.setLast("M");
	objAddress2.setPhoneNumber("(210) 333 3333");

	vtrAddress.push_back(objAddress2);

	objAddress=Address();

	objAddress.input();

	vtrAddress.push_back(objAddress);


//	objAddress.setFirst("chris");
//	objAddress.setLast("M");
//	objAddress.setPhoneNumber("(210) 555 5555");

	for(int i=0;i<vtrAddress.size();i++){
		vtrAddress.at(i).print();
		std::cout<<std::endl;
	}
	return 0;
}
