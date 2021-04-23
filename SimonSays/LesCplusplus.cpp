#include <iostream>
#include "SimonSays.h"
#include <windows.h>

#include <vector>

int main()
{
	// The optimized way
	SimonSays* ss = new SimonSays();
	ss -> Play();
	delete ss;

	Sleep(1000);

	/* Normal way
	SimonSays ss();
	ss.Play();
	*/

	return 0;
}