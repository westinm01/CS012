#include "IntVector.h"
#include <iostream>
#include <stdexcept>
using namespace std;

IntVector:: IntVector(){
this->sz=0;
this->cap=0;
data=new int[cap];
//make sure you don't have a dangling pointer.
}

IntVector:: IntVector(unsigned size, int value){
this->sz=size;
this->cap=size;
   // value=0;
data=new int[cap];
    unsigned i;
for(i=0;i<sz;i++){        
*(data+i)= value;
}
}


IntVector:: ~IntVector(){
delete[] data;
}


unsigned int IntVector:: size() const{
    return sz;
}

unsigned IntVector:: capacity() const{
    return cap;
}


bool IntVector:: empty() const{
    if(sz==0){
        return true;
    }
    else{
        return false;
    }
}

const int & IntVector:: at(unsigned index)const{
    if(index<0 || index>(sz-1) || sz==0){
	throw out_of_range("IntVector::at_range_check");
	}
	else{
		return *(data+index);
}
}


const int & IntVector:: front() const{
	return *data;
    
}


const int & IntVector:: back() const{
    return *(data+sz-1);
}