# DataStructures
This is an implementation of data structures in C++
## Linked list
Linked list has a chain of nodes which you can visit in order from left to rigth.
These are function:
- bool isEmpty(): return true if it is empty, false otherwise
- int length(): return number of elements inside the list
- void insert(LinearNode<K, V>*): add new node at the end of the list
- LinearNode<K, V>* search(K): return node with key equals to K
- void delete_element(K): remove first occurence of key equals to K
- void modify(K, V): update value of the node with key equals to K
- string toString(): return a rappresentation of list

## Double linked list
Double linked list has a chain of nodes which you can visit from left to right or vice versa.
These are function:
- bool isEmpty(): return true if it is empty, false otherwise
- int length(): return number of elements inside the list
- void insert(LinearNode<K, V>*): add new node at the end of the list
- LinearNode<K, V>* search(K): return node with key equals to K
- void delete_element(K): remove first occurence of key equals to K
- void modify(K, V): update value of the node with key equals to K
- string toString(): return a rappresentation of list