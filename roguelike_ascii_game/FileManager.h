#pragma once
#include <fstream>
#include <cstdlib>

using namespace std;

static vector<string> LoadMapFromFile(string file)
{
	vector<string> map;

	ifstream inputfile;
	string line;

	inputfile.open(file);

	if (inputfile.fail()) 
	{
		perror(file.c_str());
	}

	while (getline(inputfile, line)) 
	{
		map.push_back(line);
	}

	return map;
}