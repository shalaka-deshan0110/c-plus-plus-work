#include <iostream>
#include <string>

using namespace std;

bool Ascending(int nX, int nY){
    return nY > nX;
}

bool Descending(int nX, int nY){
    return nY < nX;
}

typedef bool (*Compare)(int, int);

void Sort(int *numbers, int size, Compare compareFunc) {
    for (int n = 0; n < size; n++) {
        int nBestIndex = n;
        for (int i = n + 1; i < size; i++) {
            if (compareFunc(numbers[i], numbers[nBestIndex])) {
                nBestIndex = i;
            }
        }
        swap(numbers[n], numbers[nBestIndex]);
    }

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }
}

int main() {

    int numbers[] = {3, 7, 9, 5, 6, 1, 8, 2, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Ascending" << endl;

    Sort(numbers, size, Ascending);

    cout << "Descending" << endl;

    Sort(numbers, size, Descending);

    return 0;
}