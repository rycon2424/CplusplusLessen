#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "FileMixer.h"

using namespace std;

int main()
{
	FileMixer* fm = new FileMixer();
	fm -> MixFiles();
	delete fm;

	cin.ignore();
}