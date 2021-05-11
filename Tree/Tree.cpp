#include "Tree.h"
#include <iostream>

int main(){

	int heigh;
	int spacing;
	int asterisk;

	std::cout<<"How tall do you want your tree to be:"<<std::endl;
	std::cin>>heigh;
	spacing=heigh;

	printTree(heigh);

	return 0;
}

void printTree(int height){

	int spacing=height;
	int asterisk;

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
}
