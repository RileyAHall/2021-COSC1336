#include <iostream>
#include "square.h"

Square::Square(){
	dblLength=0;
}

Square::Square(double dblpLength){
	dblLength=dblpLength;
}

Square::~Square(){

}

void Square::setLength(double dblpLength){
	dblLength=dblpLength;
}

double Square::getLength(){
	return dblLength;
}

double Square::getWidth(){
	return dblLength;
}

double Square::getPerimeter(){
	return dblLength*4;
}

double Square::getArea(){
	return dblLength*dblLength;
}

void Square::print(){
	std::cout<<getLength()<<" "<<getWidth()<<" "<<getPerimeter()<<" "<<getArea();
}
