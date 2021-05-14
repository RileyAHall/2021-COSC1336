#include <iostream>
#include <vector>

int maxv(std::vector<int> vtrScanMe){
	int largestElement;//				storage variable for the largest element

	if(vtrScanMe.size()==0)//			if vector is empty return error code
		return -1;

	largestElement=vtrScanMe.at(0);//		start with first element because why not

	for(int i=0;i<vtrScanMe.size();i++)//		loops through the whole vector
		if(vtrScanMe.at(i)>largestElement)//	if a larger element is found replace
			largestElement=vtrScanMe.at(i);// the old one

	return largestElement;//			return the newly found largest element
}

int main(){

	std::vector<int> vtrStorage(0);
//	vtrStorage.push_back(1);//			making sure my program works
//	vtrStorage.push_back(3);
//	vtrStorage.push_back(2);

	std::cout<<maxv(vtrStorage);
	return 0;
}

