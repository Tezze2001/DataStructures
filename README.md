# DataStructures
This is an implementation of data structures in C++
## Linked list
Linked list has a chain of nodes which you can visit in order from left to rigth.
These are function:
- bool isEmpty(): return true if it is empty, false otherwise
- int length(): return number of elements inside the list
- void addNode(LinearNode<T>*): add new node at the end of the list
- LinearNode<T>* getNode(int): return node in a certain position
- LinearNode<T>* removeNode(int): remove node in a certain position and it will be returned
- LinearNode<T>* removeFirstNode(): remove first node
- LinearNode<T>* removeLastNode(): remove last node
- LinearNode<T>* updateNode(int, T): update value of the node in a certain position and return it updated
- string toString(): return a rappresentation of list
## Double linked list
Double linked list has a chain of nodes which you can visit from left to right or vice versa.
These are function:
- bool isEmpty(): return true if it is empty, false otherwise
- int length(): return number of elements inside the list
- void addNode(LinearNode<T>*): add new node at the end of the list
- LinearNode<T>* getNode(int): return node in a certain position
- LinearNode<T>* removeNode(int): remove node in a certain position and it will be returned
- LinearNode<T>* removeFirstNode(): remove first node
- LinearNode<T>* removeLastNode(): remove last node
- LinearNode<T>* updateNode(int, T): update value of the node in a certain position and return it updated
- string toString(): return a rappresentation of list