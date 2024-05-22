//#include pch.h may exist here
//#include stdafx.h may exist here

#include <iostream>
#include <limits>

int main() {
	std::cout << "Hello World";

	//ensure the following are always placed at the end of your main function
	std::cin.clear();
	std.cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore any character in the input buffer until we find
	// an enter character
	std::cin.get(); //get one more char from the user

	//This will cause your program to wait for the user to press a key before continuing, which will give you time to examine
		//your program’s output before your operating system closes the console window.

		//Other solutions, such as the commonly suggested system(“pause”) solution may only work on certain operating systems
		//and should be avoided.

		//Older versions of Visual Studio may not pause when the program is run in Start With Debugging(F5) mode.Try running
		//in Start Without Debugging(Ctrl - F5) mode.

	return 0;

	

}