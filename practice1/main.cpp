#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    /*
    Adding the below code at the end of your main() function:

    This will cause your program to wait for the user to press a key before continuing, which will
    give you time to examine your program’s output before your operating system closes the console window.

    Other solutions, such as the commonly suggested system(“pause”) solution may only work on certain
    operating systems and should be avoided.

    Older versions of Visual Studio may not pause when the program is run in Start With Debugging (F5) mode.
    Try running in Start Without Debugging (Ctrl-F5) mode.
    */

    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get(); // get one more char from the user



    return 0;
}


