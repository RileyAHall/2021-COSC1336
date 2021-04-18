#include <iostream>

int main(){

	int intNumberOne, intNumberTwo;

	std::cout<<"Enter a number:";
	std::cin>>intNumberOne;
	std::cout<<"\nEnter another number:";
	std::cin>>intNumberTwo;

	if(intNumberOne<intNumberTwo)
		std::cout<<"\n"<<intNumberOne<<" is the smaller number\n"<<intNumberTwo<<" is the larger number"<<std::endl;
	else if(intNumberOne>intNumberTwo)
		std::cout<<"\n"<<intNumberTwo<<" is the smaller number\n"<<intNumberOne<<" is the larger number"<<std::endl;
	else
		std::cout<<"\nThe numbers are equal in value"<<std::endl;

	std::cout<<"The sum of the two numbers is: "<<intNumberOne+intNumberTwo<<std::endl;
	std::cout<<"The difference of the two numbers is: "<<intNumberOne/intNumberTwo<<std::endl;
	std::cout<<"The product of the two numbers is: "<<intNumberOne*intNumberTwo<<std::endl;
	std::cout<<"The ratio of the two numbers is: "<<intNumberOne+intNumberTwo<<std::endl;

	return 0;
}
