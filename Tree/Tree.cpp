#include <iostream>

int main(){

	int height;
	int spacing;
	int asterisk;

	std::cout<<"How tall do you want your tree to be:"<<std::endl;
	std::cin>>height;
	spacing=height;

	for(int i=1;i<height;i++){

		asterisk=(i*2)-1;

		for(int j=0;j<spacing;j++)
			std::cout<<" ";
		for(int j=0;j<asterisk;j++)
			std::cout<<"*";

		spacing--;
		std::cout<<"\n";
	}
	for(int i=0;i<height;i++)
		std::cout<<" ";

	std::cout<<"*";
	std::cout<<"\n";

	return 0;
}
