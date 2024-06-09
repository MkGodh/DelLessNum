#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rNum;
    int position = 1;

    vector<int> vec;

    while (true) {
        cout << "Welcome to robot queue Input your id: ";
        -cin >> rNum;

        if (rNum == -1) {
            break;
        }

        while (!vec.empty() && vec.back() < rNum) {
            vec.pop_back(); // удаляем робота, чей номер меньше, чем у нового
        }

        vec.push_back(rNum); // добавляем нового робота в очередь
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << "Robot num: " << vec[i] << " position in queque: " << position << "\n";
        position++;
    }


}
