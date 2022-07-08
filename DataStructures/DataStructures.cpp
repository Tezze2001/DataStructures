// DataStructures.cpp: definisce il punto di ingresso dell'applicazione.
//

#include "DataStructures.h"

using namespace std;

bool testNode();
bool testLinearNode();
bool testLinkedList();

int main() {
    if (testNode())
        cout << "Test node is passed" << endl;
    else
        cout << "Test node is not passed" << endl;

    if (testLinearNode())
        cout << "Test linear node is passed" << endl;
    else
        cout << "Test linear node is not passed" << endl;

    if (testLinkedList())
        cout << "Test linked list is passed" << endl;
    else
        cout << "Test linked list is not passed" << endl;
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

bool testLinkedList() {
    LinkedList<int> list = LinkedList<int>();
    bool result = list.isEmpty();
    list.addNode(new LinearNode<int>(10));
    list.addNode(new LinearNode<int>(20));
    list.addNode(new LinearNode<int>(30));
    list.addNode(new LinearNode<int>(40));
    list.addNode(new LinearNode<int>(50));
    list.addNode(new LinearNode<int>(60));
    result = result && list.toString().compare("10-20-30-40-50-60") == 0;
    result = result && list.length() == 6;
    result = result && list.removeNode(10) == nullptr;
    result = result && list.removeFirstNode()->getData() == 10;
    result = result && list.length() == 5;
    result = result && list.removeLastNode()->getData() == 60;
    result = result && list.length() == 4;

    result = result && list.removeNode(2)->getData() == 40;
    result = result && list.length() == 3;
    result = result && list.toString().compare("20-30-50") == 0;

    result = result && list.getNode(2)->getData() == 50;
    result = result && list.updateNode(0, list.getNode(0)->getData() * 10)->getData() == 200;
    result = result && list.updateNode(1, list.getNode(1)->getData() * 10)->getData() == 300;
    result = result && list.updateNode(2, list.getNode(2)->getData() * 10)->getData() == 500;

    return result;
}