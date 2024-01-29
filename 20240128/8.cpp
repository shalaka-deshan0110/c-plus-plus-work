#include <iostream>

using namespace std;

template <typename T>
void DisplayArray(T* array, int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << endl;
    }
}

int main() {

    cout << "Int numbers" << endl;

    int iNumbers[] = {3, 7, 9, 5, 6, 1, 8, 2, 4};
    int iSize = sizeof(iNumbers) / sizeof(iNumbers[0]);

    DisplayArray(iNumbers, iSize);

    cout << endl;
    cout << "Float numbers" << endl;

    float fNumbers[] = {3.0f, 7.5f, 9.2f, 5.0f, 6.7f, 1.0f, 8.0f, 2.0f, 4.0f};
    int fSize = sizeof(fNumbers) / sizeof(fNumbers[0]);

    DisplayArray(fNumbers, fSize);

    return 0;
}