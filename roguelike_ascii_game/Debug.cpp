#include "Debug.h"
#include <iostream>

 void Debug::printVector(vector<string> vec)
{
	vector<string>::iterator it;

	for (it = vec.begin(); it != vec.end(); it++) 
	{
		cout << *it << endl;
	}
}


 void Debug::printRoom(Room room) 
 {
	 vector<string> room_data = room.getRoom();
	 printVector(room_data);
 }


 void Debug::printThresholds(vector<string> vec) 
 {
	 for (int i = 0; i < vec.size(); i++) 
	 {
		 cout  << "Height: " <<  i ;
		 cout << ", Width: " << vec[i].size() - 1 << endl;
	 }
 }