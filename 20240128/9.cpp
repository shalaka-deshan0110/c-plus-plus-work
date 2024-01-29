#include <iostream>

using namespace std;

template <typename T>
T SumArray(T* array, int size){
    T sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }

    return sum;
}

int main() {

    cout << "Int numbers" << endl;

    int iNumbers[] = {3, 7, 9, 5, 6, 1, 8, 2, 4};
    int iSize = sizeof(iNumbers) / sizeof(iNumbers[0]);

    cout << "Sum: " << SumArray(iNumbers, iSize) << endl;

    cout << endl;
    cout << "Float numbers" << endl;

    float fNumbers[] = {3.0f, 7.5f, 9.2f, 5.0f, 6.7f, 1.0f, 8.0f, 2.0f, 4.0f};
    int fSize = sizeof(fNumbers) / sizeof(fNumbers[0]);

    cout << "Sum: " << SumArray(fNumbers, fSize) << endl;

    return 0;
}