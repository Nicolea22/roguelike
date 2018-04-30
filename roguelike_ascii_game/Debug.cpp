#include "Debug.h"
#include <iostream>

 void Debug::printVector(vector<string> v)
{
	vector<string>::iterator it;

	for (it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << endl;
	}
}
