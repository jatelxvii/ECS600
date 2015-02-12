#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdexcept>
#include "LongInt.h"

using namespace std;

  LongInt LongInt::operator+(LongInt& c)
	{

		int a,b, sum;
		int temp = 0;
		LongInt tempstack;


	
			while(!this->ls.isEmpty() && !c.ls.isEmpty())
				{

					a = this->ls.top();
	 				b = c.ls.top();
				       sum = a+ b + temp; 
					
 
			if(sum > 9)
				{
				//(tempstack.ls).push(sum%10);

					temp = 1;
					sum = sum - 10;
					this->ls.pop();
					c.ls.pop();
					tempstack.ls.push(sum);
				}
			
			else 
				{

					//(tempstack.ls).push(sum);

					temp = 0;
					this->ls.pop();
					c.ls.pop();
					tempstack.ls.push(sum);
				}

	}



		while(!this->ls.isEmpty())
			{

				a = this->ls.top();
				sum = a + temp;

					if(sum > 9) 
						{

							temp = 1;
							sum = sum - 10; 
							this->ls.pop();
							tempstack.ls.push(sum);
						}

		else
			{
		
				temp = 0;
				this->ls.pop();
				tempstack.ls.push(sum);
			}


			}



	while(!c.ls.isEmpty())
		{

			b = c.ls.top();
			sum = b + temp;

				if(sum > 9) 
					{

						temp = 1;
						sum = sum - 10; 
						c.ls.pop();
						tempstack.ls.push(sum);
		}

	else
		{
			temp = 0;
			c.ls.pop();
			tempstack.ls.push(sum);
		}


		}


	if( temp == 1) 
		{

			(tempstack.ls).push(temp);
		}

	
	return tempstack;

		
	} 



 

  istream& operator>>(istream& input, LongInt& int1) 
	{
		char a;
		a = input.get(); 
		
			while(isdigit(a) == true) 
				{
					int1.ls.push(int(a)-48);
					a = input.get();
					
				}
		return input;

			
	} 


ostream& operator<<(ostream& output, LongInt& final)
	{
		while(!final.ls.isEmpty())
			{
				output << final.ls.top();
				final.ls.pop();
			}

	return output;

	}


