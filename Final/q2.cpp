#include <iostream>
#include <vector>
#include <string>

void print(std::vector<int> vtrScanMe, std::string strLabel){

	if(vtrScanMe.size()==0){//			if vector is empty return error code
		std::cout<<"error vector is empty"<<std::endl;
		return;
	}

	for(int i=0;i<vtrScanMe.size();i++)//		loops through the whole vector and
		std::cout<<strLabel<<": "<<vtrScanMe.at(i)<<std::endl;
}//							prints all of its contents

int main(){

	std::vector<int> vtrStorage(0);
	std::string strLabel="";

//	vtrStorage.push_back(1);//			making sure my program works
//	vtrStorage.push_back(3);
//	vtrStorage.push_back(2);
//	strLabel="hi";

	print(vtrStorage,strLabel);
	return 0;
}

