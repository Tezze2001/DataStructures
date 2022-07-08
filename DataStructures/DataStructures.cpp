// DataStructures.cpp: definisce il punto di ingresso dell'applicazione.
//

#include "DataStructures.h"

using namespace std;

bool testNode();
bool testLinearNode();
//bool ();

int main() {
    if (testNode())
        cout << "Test node is passed" << endl;
    else
        cout << "Test node is not passed" << endl;

    if (testLinearNode())
        cout << "Test linear node is passed" << endl;
    else
        cout << "Test linear node is not passed" << endl;
	return 0;
}

bool testNode() {
    Node<int> n = Node<int>(10);
    bool result = n.getData() == 10;
    n.setData(20);
    result = result && n.getData() == 20;
    return result;
}

bool testLinearNode() {
    LinearNode<int> ln = LinearNode<int>(10);
    ln.setData(20);
    bool result = ln.getData() == 20 && ln.getNext() == nullptr;
    LinearNode<int> ln2 = LinearNode<int>(50, &ln);
    result = result && ln2.getData() == 50 && ln2.getNext()->getData() == 20;
    ln2.getNext()->setNext(&ln2);
    result = result && ln2.getNext()->getNext() == &ln2;
    return result;
}