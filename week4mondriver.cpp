#include "LinkedList.hpp"
#include <iostream>
#include <string>
using namespace std;

//Node* newNode = new Node(elem);

int main() {
    LinkedList<int> intList;

    cout << "Testing append...\n";
    intList.append(7);
    intList.append(18);
    intList.append(33);
    cout << intList;

    cout << "Testing getElement...\n";
    cout << "Element at pos 0: " << intList.getElement(0) << endl;
    cout << "Element at pos 1: " << intList.getElement(1) << endl;

    cout << "Testing replace...\n";
    intList.replace(1, 99);
    cout << intList;

    cout << "Length of list: " << intList.getLength() << endl;
    cout << "Is the list empty? " << (intList.isEmpty() ? "Yes" : "No") << endl;

    cout << "Clearing list...\n";
    intList.clear();
    cout << intList;
    cout << "Is the list empty? " << (intList.isEmpty() ? "Yes" : "No") << endl;

    // Test with strings
    LinkedList<string> strList;
    strList.append("I");
    strList.append("love");
    strList.append("Las Positas College");
    cout << "String list: " << strList;

    return 0;
}
