#include <iostream>
#include <string>

using namespace std;

void Message(const string& message) {
    cout << message << endl;
}

int main() {
  
    void (*functionPointer)(const string&)=nullptr;

 
    functionPointer = Message;
    functionPointer("This is a test message.");

    return 0;
}