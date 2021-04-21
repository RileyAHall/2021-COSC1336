#include <iostream>

int main(){

	char answer;
	int guess=50;
	int iterator=25;

	std::cout<<"Think of a number between 1 and 100. Enter y for yes, n for no, and e for equal"<<std::endl;

	for(int i=1;i<8;i++)
	{
		std::cout<<"Is your number less than "<<guess<<"?"<<std::endl;
		std::cin>>answer;

		if(answer=='e')
			break;
		if(answer=='y')
			guess=guess-iterator;
		else
			guess=guess+iterator;

		iterator=iterator/2;

		if(iterator==0)
			iterator=1;
	}
	std::cout<<"Your number is "<<guess<<"!"<<std::endl;

	return 0;
}
