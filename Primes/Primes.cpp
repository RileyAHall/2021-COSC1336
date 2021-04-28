#include <iostream>

int main(){

	bool isPrime=false;
	for(int i=1;i<=10000;i++){
		isPrime=true;
		for(int j=2;j<i;j++){
			if(!isPrime)
				break;
			if(i%j==0)
				isPrime=false;
		}
		if(isPrime)
			std::cout<<i<<" is a prime number"<<std::endl;
		isPrime=false;
	}
	return 0;
}
