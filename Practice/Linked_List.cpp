#include <iostream>
#include <list>
using namespace std;

void printL(const list<int>& l) {
    for (int val : l) {
        cout << val << "->";
    }
    cout << "NULL" << endl;
}

int main() {
    list<int> l1 = {10, 20, 30};

    printL(l1);

    return 0;
}