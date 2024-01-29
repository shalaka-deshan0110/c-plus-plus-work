#include <iostream>

// Function 1: HelloMessage
void HelloMessage() {
    std::cout << "Hello" << std::endl;
}

// Function 2: Goodbye
void Goodbye() {
    std::cout << "Goodbye" << std::endl;
}

int main() {
    // Declare a pointer to a function that returns void and takes no parameters
    void (*functionPointer)();

    // Point the function pointer to HelloMessage and invoke it
    functionPointer = HelloMessage;
    functionPointer();

    // Point the function pointer to Goodbye and invoke it
    functionPointer = Goodbye;
    functionPointer();

    return 0;
}