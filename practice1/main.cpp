// #imports preprocessor directives - granting access to the given library following the hash-tag sign#include <iostream> //import input/output library#include <limits>//added 10-15-24#include <vector> //generic template --> template < class T, class Alloc = allocator <T> class vector;#include "Names.h"int add(int x, int y);double add(double, double);int add(int a, int b, int c) {    return a+b+c;};double mult(double, double);double mult(double, double, double);using namespace std;//signature (prototype) value-type returning method - (forward declaration)int x;int y;namespace myMath {    int add(int a, int b) {        std::cout << "value " + a <<std::endl;        std::cout << "value " + b  << std::endl;        std::cout << "result: " + (a + b) << std::endl;        return a + b;    }}namespace bot1 {    void name() {  cout << "My name is Robort" << endl;  }};namespace bot2 {    void name() {      cout << "My name is Spark" << endl;      }      void age() {        cout << "I am 7!" << endl;        }}    void aging() {        bool agedOut = false;        while (!agedOut) {        for (int i = 0; i < 1000; i++) {            }            agedOut = true;        }        cout << "Sparkie's rusty!";    }    void getInput(int val) {        cout<<"Enter a integer value: ";        int num{};        cin>>num;    }/*    int total() {        return(add(1,4));    }*/#define FOO 9//#define MY_NAME "?"int main(){    #ifdef FOO        std::cout << MY_NAME << std::endl;    #endif    #ifndef MY_NAME        std::cout << MY_NAME << std::endl;    #endif    #ifdef FOO2        std::cout << "Charlie" << std::endl;    #endif    void func1();    cout<<add(1,1,1)<<endl;    cout<<add(3,3)<<endl;    std::vector<int> first(1024); //creates a buff of 1024 bytes                                   //Pros: Flexible, can resize dynamically, manages memory automatically.                                   //Cons: Slightly more overhead compared to raw arrays.    first.assign(7, 100);   //insert 7 ints with value 100    [[maybe_unused]] double pi { 3.14150 }; //prevents warning when a declared variable is not used    using namespace bot1;    //void cout();    //int x{ getInteger() };    //int y{ getInteger() };    std::cout<<"\nEnter a number: ";    int numR{};    std::cin>>numR;    cout << "Hello world!\n";    aging();    cout << endl;    cout << "test1 ...\n";    for (int i = 0; i < 10,000; i++) {        cout << i;    }    cout << "test2 ...\n";    for (int i = 0; i < 10,000; i++) {        cout << std::unitbuf << i + '\n';    }    cout << "\nPlease enter a number: ";    int num{};  //cout << '\n';    cin >> num;    cout << num; //cout << '\n';    cout << "\nPlease enter an age: ";    int age{};    cin >> age;    cout << age;    //each of these added to as the last element in the buffer, most recent line being added to the top of the buffer stack (FIFO)    //the extractor operator, <<, removes the most recent element placed into the buffer stack via the input operator >>    char one = '1';    cin >> one;    char two = '2';    cin >> two;    //char one = '1';    //cin >> '3';    //char one = '1';    //cin >> '4';    //char one = '1';    //cin >> '5';    //char one = '1';    char six = '6';    cin >> six;    char seven = '7';    cin >> seven;    cout << " " + one;    /*    Adding the below code at the end of your main() function:    This will cause your program to wait for the user to press a key before continuing, which will    give you time to examine your program�s output before your operating system closes the console window.    Other solutions, such as the commonly suggested system(�pause�) solution may only work on certain    operating systems and should be avoided.    Older versions of Visual Studio may not pause when the program is run in Start With Debugging (F5) mode.    Try running in Start Without Debugging (Ctrl-F5) mode.    */    std::cin.clear(); // reset any error flags    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character    std::cin.get(); // get one more char from the user    //int one = 1; //this is copy assignment '='    std::cout << 1;    int too {2}; //this is initialization of a variable; the '{}' are initializers and the '2' is the initial value;    int three; //default-initialization (no initializer)    three = 3; //copy-initialization, using the equals    int four ( 4 ); //direct initialization, using '( )'    //the two below are the preferred forms of initialization    int five { 5 }; //direct-list initialization, using '{ }'    int siks {}; //value initialization; variable name is declare, value is not instantiation until later - empty '{ }'    int zeven = { 7 }; // copy-list-initialization    int eight = 8, nine = 9; //copy    int ten (10), eleven (11); //direct    int twelve { 12 }, thirteen { 13 }; //direct list    int fourteen = { 14 }, fifteen = { 15 }; //copy direct list    int sixteen {}, seventeen {}; //value initialization    int flexibility, durability;    myMath::add(12364,987014);    return 0;}//function definition - implementationvoid declareType() {    cout<<"declare type"<<endl;}