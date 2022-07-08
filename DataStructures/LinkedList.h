#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinearNode.h"
#include <string>

using namespace std;

template<typename T>
class LinkedList {
private:
	LinearNode<T>* head;
public:
	LinkedList<T>();
	LinkedList<T>(LinearNode<T>*);
	bool isEmpty();
	int length();
	void addNode(LinearNode<T>*);
	LinearNode<T>* getNode(int);
	LinearNode<T>* removeNode(int);
	LinearNode<T>* removeFirstNode();
	LinearNode<T>* removeLastNode();
	LinearNode<T>* updateNode(int, T);
	string toString();
};

template<typename T>
LinkedList<T>::LinkedList<T>() {
	head = nullptr;
}

template<typename T>
LinkedList<T>::LinkedList<T>(LinearNode<T>* head) {
	this->head = nullptr;
}

template<typename T>
bool LinkedList<T>::isEmpty() {
	return head == nullptr;
}

template<typename T>
int LinkedList<T>::length() {
	LinearNode<T>* tmp = head;
	if (isEmpty()) {
		return 0;
	}
	int i;
	for (i = 0; tmp != nullptr; i++) {
		tmp = tmp->getNext();
	}
	return i;
}

template<typename T>
void LinkedList<T>::addNode(LinearNode<T>* node) {
	LinearNode<T>* tmp = head;
	if (isEmpty()) {
		head = node;
		return;
	}

	while (tmp->getNext() != nullptr) {
		tmp = tmp->getNext();
	}
	tmp->setNext(node);
}

template<typename T>
LinearNode<T>* LinkedList<T>::getNode(int pos) {
	LinearNode<T>* tmp = head;

	if (isEmpty()) {
		return tmp;
	}

	if (pos > length()) {
		return nullptr;
	}

	int i;
	for (i = 0; i < pos && tmp->getNext() != nullptr; i++) {
		tmp = tmp->getNext();
	}

	return tmp;
}

template<typename T>
LinearNode<T>* LinkedList<T>::removeNode(int pos) {
	LinearNode<T>* tmp = head;
	LinearNode<T>* before = nullptr;
	LinearNode<T>* deleted = nullptr;

	if (isEmpty()) {
		return deleted;
	}

	if (pos > length()) {
		return deleted;
	}

	int i;
	for (i = 0; i < pos && tmp->getNext() != nullptr; i++) {
		before = tmp;
		tmp = tmp->getNext();
	}

	if (before == nullptr) {
		deleted = tmp;
		head = tmp->getNext();
		deleted->setNext(nullptr);
		
	} else {
		deleted = tmp;
		before->setNext(tmp->getNext());
		deleted->setNext(nullptr);
	}

	return deleted;
}

template<typename T>
LinearNode<T>* LinkedList<T>::removeFirstNode() {
	return removeNode(0);
}

template<typename T>
LinearNode<T>* LinkedList<T>::removeLastNode() {
	return removeNode(length() - 1);
}

template<typename T>
LinearNode<T>* LinkedList<T>::updateNode(int pos, T data) {
	LinearNode<T>* tmp = getNode(pos);
	if (tmp != nullptr) {
		tmp->setData(data);
	}
	return tmp;
}

template<typename T>
string LinkedList<T>::toString() {
	LinearNode<T>* tmp = head;
	string s = "";

	if (isEmpty()) {
		return s;
	}

	while (tmp != nullptr) {
		s.append(to_string(tmp->getData()));
		s.append("-");
		tmp = tmp->getNext();
	}
	s.pop_back();
	return s;
}
#endif 