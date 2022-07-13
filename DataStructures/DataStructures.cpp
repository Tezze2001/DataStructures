// DataStructures.cpp: definisce il punto di ingresso dell'applicazione.
//

#include "DataStructures.h"

using namespace std;

bool testNode();
bool testLinearNode();
bool testLinkedList();
bool testDoubleLinkedList();

int main() {
    if (testNode())
        cout << "Test NODE is passed" << endl;
    else
        cout << "Test NODE is not passed" << endl;

    if (testLinearNode())
        cout << "Test LINEAR NODE is passed" << endl;
    else
        cout << "Test LINEAR NODE is not passed" << endl;

    if (testLinkedList())
        cout << "Test LINKED LIST is passed" << endl;
    else
        cout << "Test LINKED LIST is not passed" << endl;

    if (testDoubleLinkedList())
        cout << "Test DOUBLE LINKED LIST is passed" << endl;
    else
        cout << "Test DOUBLE LINKED LIST is not passed" << endl;
	return 0;
}

bool testNode() {
    Node<int, int>* n = new Node<int, int>(0, 10);
    bool result = n->getData() == 10 && n->getKey() == 0;
    n->setData(20);
    result = result && n->getData() == 20;
    return result;
}

bool testLinearNode() {
    LinkedList::LinearNode<int, int>* ln = new LinkedList::LinearNode<int, int>(0, 10);
    ln->setData(20);
    bool result = ln->getData() == 20 && ln->getNext() == nullptr && ln->getPrev() == nullptr;
    LinkedList::LinearNode<int, int>* ln2 = new LinkedList::LinearNode<int, int>(1, 20, ln);
    result = result && ln2->getNext() == ln;
    ln2->getNext()->setNext(ln2);
    result = result && ln2->getNext()->getNext() == ln2;
    return result;
}

bool testLinkedList() {
    LinkedList::LinkedList<int, int>* list = new LinkedList::LinkedList<int, int>();
    bool result = list->isEmpty();
    LinkedList::LinearNode<int, int>* ln = new LinkedList::LinearNode<int, int>(0, 10);
    list = new LinkedList::LinkedList<int, int>(ln);
    list->insert(new LinkedList::LinearNode<int, int>(0, 10));
    list->insert(new LinkedList::LinearNode<int, int>(1, 20));
    list->insert(new LinkedList::LinearNode<int, int>(2, 30));
    list->insert(new LinkedList::LinearNode<int, int>(3, 40));
    list->insert(new LinkedList::LinearNode<int, int>(4, 50));
    list->insert(new LinkedList::LinearNode<int, int>(5, 60));
    result = result && list->toString().compare("10-10-20-30-40-50-60") == 0;
    /*result = result && list->length() == 6;
    result = result && list->removeNode(10) == nullptr;
    result = result && list->removeFirstNode()->getData() == 10;
    result = result && list->length() == 5;
    result = result && list->removeLastNode()->getData() == 60;
    result = result && list->length() == 4;

    result = result && list.removeNode(2)->getData() == 40;
    result = result && list.length() == 3;
    result = result && list.toString().compare("20-30-50") == 0;
    */
    result = result && list->search(2)->getData() == 30;
    list->modify(0, list->search(0)->getData() * 10);
    result = result && list->search(0)->getData() == 100;
    list->modify(1, list->search(1)->getData() * 10);
    list->modify(2, list->search(2)->getData() * 10);
    result = result && list->search(1)->getData() == 200;
    result = result && list->search(2)->getData() == 300;
    list->delete_element(3);
    result = result && list->toString().compare("100-10-200-300-50-60") == 0;
    list->delete_element(0);
    result = result && list->toString().compare("10-200-300-50-60") == 0;
    list->delete_element(5);
    result = result && list->toString().compare("10-200-300-50") == 0;

    return result;
}

bool testDoubleLinkedList() {
    LinkedList::DoubleLinkedList<int, int>* list = new LinkedList::DoubleLinkedList<int, int>();
    bool result = list->isEmpty();
    LinkedList::LinearNode<int, int>* ln = new LinkedList::LinearNode<int, int>(0, 10);
    list = new LinkedList::DoubleLinkedList<int, int>(ln);
    list->insert(new LinkedList::LinearNode<int, int>(0, 10));
    list->insert(new LinkedList::LinearNode<int, int>(1, 20));
    list->insert(new LinkedList::LinearNode<int, int>(2, 30));
    list->insert(new LinkedList::LinearNode<int, int>(3, 40));
    list->insert(new LinkedList::LinearNode<int, int>(4, 50));
    list->insert(new LinkedList::LinearNode<int, int>(5, 60));
    result = result && list->toString().compare("10-10-20-30-40-50-60") == 0;
    /*result = result && list->length() == 6;
    result = result && list->removeNode(10) == nullptr;
    result = result && list->removeFirstNode()->getData() == 10;
    result = result && list->length() == 5;
    result = result && list->removeLastNode()->getData() == 60;
    result = result && list->length() == 4;

    result = result && list.removeNode(2)->getData() == 40;
    result = result && list.length() == 3;
    result = result && list.toString().compare("20-30-50") == 0;
    */

    result = result && list->search(2)->getData() == 30;
    list->modify(0, list->search(0)->getData() * 10);
    result = result && list->search(0)->getData() == 100;
    list->modify(1, list->search(1)->getData() * 10);
    list->modify(2, list->search(2)->getData() * 10);
    result = result && list->search(1)->getData() == 200;
    result = result && list->search(2)->getData() == 300;
    list->delete_element(3);
    result = result && list->toString().compare("100-10-200-300-50-60") == 0;
    list->delete_element(0);
    result = result && list->toString().compare("10-200-300-50-60") == 0;
    list->delete_element(5);
    result = result && list->toString().compare("10-200-300-50") == 0;

    return result;
}