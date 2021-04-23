#include <iostream>
#include <fstream>
#include <vector>

#include "FileMixer.h"

using namespace std;

FileMixer::FileMixer()
{
	cout << "FileMixer Initialized" << "\n";
	cout << " " << "\n";
}

FileMixer::~FileMixer()
{
	cout << "FileMixer Destroyed" << "\n";
}

void FileMixer::MixFiles()
{
	vector<string> fileOneLines = SaveTextToString("Z:\\CplusplusRepo\\CplusplusLessen\\FileMixer\\JabberWocky.txt");
	vector<string> fileTwoLines = SaveTextToString("Z:\\CplusplusRepo\\CplusplusLessen\\FileMixer\\JabberWocky_lat.txt");

	//Creates Text file found in C:\Users\Bosko\source\repos\Opdracht2Cplusplus\Opdracht2Cplusplus
	ofstream outfile("CombinedText.txt"); // Creates and opens the txt file

	int totalLengthVectors = (fileOneLines.size() + fileTwoLines.size()); // total size of both vectors
	for (int i = 0; i < totalLengthVectors; i++)
	{
		if (i < fileOneLines.size())
		{
			outfile << fileOneLines[i] << endl;
		}
		if (i < fileTwoLines.size())
		{
			outfile << fileTwoLines[i] << endl;
		}
	}
	outfile.close();
}

vector<string> FileMixer::SaveTextToString(string filePath)
{
	vector<string> lines;
	ifstream txtFile;
	txtFile.open(filePath); // Try to open txt file in path
	if (txtFile.is_open()) // If succesfully openend
	{
		string allLines;
		cout << "Could open file " << "\n";
		while (getline(txtFile, allLines))
		{
			//cout << allLines << '\n';
			lines.push_back(allLines); //Save each line in vector
		}
		txtFile.close();
	}
	else
	{
		cout << "Could NOT open/find file in path " << "\n";
	}

	return lines;
}

