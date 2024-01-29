#include <iostream>

using namespace std;

class GameObject {
private:
    int id;
    int position[3];

public:
    GameObject(int id, int x, int y, int z) : id(id) {
        position[0] = x;
        position[1] = y;
        position[2] = z;
    }

    void Draw() const {
        cout << "Class Name: GameObject, ID: " << id << endl;
    }

    int* Move(int x, int y, int z) {
        position[0] += x;
        position[1] += y;
        position[2] += z;
        return position;
    }
};

int main() {
    GameObject myObject(1, 10, 20, 30);
    myObject.Draw();

    int* newPos = myObject.Move(1, 2, 3);
    cout << "New Position: [" << newPos[0] << ", " << newPos[1] << ", " << newPos[2] << "]" << endl;

    return 0;
}