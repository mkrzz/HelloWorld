// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    // initialize some integer variables 
    int a = 0;
    int b = 3;

    // ask user to enter a number 
    std::cout << "please enter a number: ";

  
  
    // read in the users number into variable a
    std::cin >> a;

    // enter a second number 
    std::cout << "enter a second number:";

    // read in the users second number into variable b
    std::cin >> b;



    // output the variable a to a command line 
    std::cout << "The total of your numbers is " << a + b << std::endl;

    return 0;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
