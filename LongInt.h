#ifndef _LONGINT_H
#define _LONGINT_H

#include <iostream>
#include "StackLi.h" 

using namespace std;


class LongInt
{
 
	public: 

       LongInt operator+(LongInt& c);
	friend istream& operator>>(istream& input, LongInt& int1);
       friend ostream& operator<<(ostream& output, LongInt& final);	 

	private:
		
	int temp;
	StackLi<int> ls;

};

 //#include "LongIntMain.cpp"

 #endif
