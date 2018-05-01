#pragma once
#include <vector>
#include <string>
#include "Room.h"

using namespace std;

class Debug
{
public:
	static void printVector(vector <string>);
	static void printRoom(Room);
	static void printThresholds(vector<string>);
};