#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdexcept>
#include "CPUTimer.h"
#include "dsexceptions.h"
#include "LinkedList.h"
#include "StackAr.h"
#include "CursorList.h"
#include "QueueAr.h"
#include "StackLi.h"
#include "vector.h"
#include "SkipList.h"
using namespace std;	

	vector<CursorNode <int> > cursorSpace(250000); //makes CursorList compile

	int ADT_menu(); 
	void menu(char* filename);
	void RunList(char* filename);
	void RunCursorList(char* filename);
	void RunStackAr(char* filename);
	void RunStackLi(char* filename);
	void RunQueueAr(char* filename);
	void RunSkipList(char* filename);

	

	int getChoice() 
	{

		
		int choice = 0;
	

			cout << "      ADT Menu" << endl;
			cout << "0. Quit" << endl;
			cout << "1. LinkedList" << endl;
			cout << "2. CursorList" << endl;
			cout << "3. StackAr" << endl;
			cout << "4. StackLi" << endl;
			cout << "5. QueueAr" << endl;
			cout << "6. SkipList" << endl;

			cout << "Your choice >> "; 
			cin >> choice; 

	  		return choice;
	
		

	}

	int main() 
	{

	
		int choice;
		CPUTimer ct;


       	char filename[100];
	
		cout << "Filename >> " ;
		cin >> filename; 
	
	
			do
				{
					choice = getChoice();
					ct.reset();

					switch(choice)
						{
							case 1: RunList(filename); break;
							case 2: RunCursorList(filename); break;
							case 3: RunStackAr(filename); break;
							case 4: RunStackLi(filename); break;
							case 5: RunQueueAr(filename); break;
							case 6: RunSkipList(filename); break;
						}

					
					cout << "CPU time: " << ct.cur_CPUTime() << endl;
				}

			while (choice > 0); 

	}
	




	
	void RunList(char* filename)
	{

	
		char command;
		ifstream inf(filename);
		int value;

		inf.ignore(1000, '\n');
		List<int> list;
		ListItr<int> listItr = list.zeroth();



			while ( inf >> command >> value)

				if ( command == 'i') 
				{

					list.insert(value, listItr);

				}


				if ( command == 'd') 
				{

					list.remove(value);

				} 

				
	}
 

	void RunCursorList(char* filename) {

	char command;
	ifstream inf(filename);
	int value;

	inf.ignore(1000, '\n');
	List<int> list;
	ListItr<int> listItr = list.zeroth();


	

		while ( inf >> command >> value)

			if(command == 'i') {

				list.insert(value, listItr);
			}


			if(command == 'd') {

				list.remove(value);
			}

	

		

	}

	void RunStackAr(char* filename) {

	char command;
	ifstream inf(filename);
	int value;

	inf.ignore(1000, '\n');
	StackAr <int> stack(1000000);

	

		while( inf >> command >> value)

			if(command == 'i') {

				stack.push(value);

			}

			if(command == 'd') {

				stack.pop();

			}


	}

	void RunStackLi(char* filename) {

	char command;
	ifstream inf(filename);
	int value;

	inf.ignore(1000, '\n');
	StackLi<int> stack;

	

		while ( inf >> command >> value)
			if(command == 'i') {

				stack.push(value);

			}

			if(command == 'd') {

				stack.pop();

			}

		

	}

	void RunQueueAr(char* filename) {

	char command;
	ifstream inf(filename);
	int value;

	//inf.ignore(1000, '\n');
	Queue<int> queue(100000);


		while ( inf >> command >> value)
			if(command == 'i') {

				queue.enqueue(value);

			}

			if(command == 'd') {

				queue.dequeue();
			}

	

	}

	void RunSkipList(char* filename) {


	char command; 
	ifstream inf(filename);
	int value; 

	inf.ignore(1000, '\n');
	SkipList <int> list(0, 250001);




		while ( inf >> command >> value)
			if(command == 'i') {

				list.insert(value);

			}

			if(command == 'd') {
			
				list.deleteNode(value);

			}

	

	}
