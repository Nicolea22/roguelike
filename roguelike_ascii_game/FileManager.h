#pragma once
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

static char** LoadMapFromFile()
{
	char** map;
	
	int height_map;

	ifstream inputfile;

	string line;

	inputfile.open("test2.txt");

	if (inputfile.fail()) 
	{
		perror("test2.txt");
	}
	
	getline(inputfile, line);
	char* lineArray = const_cast<char*>(line.c_str());

	if (lineArray[0] = '-')
	{
		height_map = lineArray[1] - '0';
	}

	map = new char*[height_map];
	int i = 0;

	while (getline(inputfile, line)) 
	{
		
		char* lineArray = const_cast<char*>(line.c_str());

		if (lineArray[0] == '\\')
		{
			char* aux = &lineArray[1];
			aux[line.size() - 1] = '\n';
			while (aux[i] != '\n')
			{
				cout << aux[i];
				i++;
			}
			i = 0;
		}
		
	}
	return map;
}