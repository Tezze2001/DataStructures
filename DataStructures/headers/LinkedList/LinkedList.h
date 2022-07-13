#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinearNode.h"
#include <string>

namespace LinkedList {
	template<typename K, typename V>
	class LinkedList {
	private:
		LinearNode<K, V>* head;
	public:
		LinkedList<K, V>();
		LinkedList<K, V>(LinearNode<K, V>*);
		bool isEmpty();
		int length();
		std::string toString();

		void insert(LinearNode<K, V>*);
		LinearNode<K, V>* search(K);
		void delete_element(K);
		void modify(K, V);

		/*LinearNode<K, V>* getNode(int);
		LinearNode<K, V>* removeNode(int);
		LinearNode<K, V>* removeFirstNode();
		LinearNode<K, V>* removeLastNode();
		LinearNode<K, V>* updateNode(int, T);*/

	};

	template<typename K, typename V>
	LinkedList<K, V>::LinkedList<K, V>() {
		this->head = nullptr;
	}

	template<typename K, typename V>
	LinkedList<K, V>::LinkedList<K, V>(LinearNode<K, V>* head) {
		this->head = head;
	}

	template<typename K, typename V>
	bool LinkedList<K, V>::isEmpty() {
		return head == nullptr;
	}

	template<typename K, typename V>
	int LinkedList<K, V>::length() {
		LinearNode<K, V>* tmp = head;
		if (isEmpty()) {
			return 0;
		}
		int i;
		for (i = 0; tmp != nullptr; i++) {
			tmp = tmp->getNext();
		}
		return i;
	}

	template<typename K, typename V>
	std::string LinkedList<K, V>::toString() {
		LinearNode<K, V>* tmp = head;
		std::string s = "";

		if (isEmpty()) {
			return s;
		}

		while (tmp != nullptr) {
			s.append(std::to_string(tmp->getData()));
			s.append("-");
			tmp = tmp->getNext();
		}
		s.pop_back();
		return s;
	}

	template<typename K, typename V>
	void LinkedList<K, V>::insert(LinearNode<K, V>* node) {
		LinearNode<K, V>* tmp = head;
		if (isEmpty()) {
			head = node;
			return;
		}

		while (tmp->getNext() != nullptr) {
			tmp = tmp->getNext();
		}
		tmp->setNext(node);
	}

	template<typename K, typename V>
	LinearNode<K, V>* LinkedList<K, V>::search(K key) {
		LinearNode<K, V>* tmp = head;

		if (isEmpty()) {
			return tmp;
		}
		bool found = false;
		while (tmp != nullptr && !found) {
			if (tmp->getKey() == key) {
				found = true;
			}
			else {
				tmp = tmp->getNext();
			}
		}

		if (found) {
			return tmp;
		}

		return nullptr;

	}

	template<typename K, typename V>
	void LinkedList<K, V>::delete_element(K key) {
		LinearNode<K, V>* tmp = head;
		LinearNode<K, V>* back = nullptr;

		if (isEmpty()) {
			return;
		}

		while (tmp != nullptr && tmp->getKey() != key) {
			back = tmp;
			tmp = tmp->getNext();
		}

		if (tmp == nullptr) {
			return;
		}


		if (back == nullptr) {
			head = tmp->getNext();
		} else {
			std::cout << back;
			back->setNext(tmp->getNext());
		}
		delete tmp;
	}	

	template<typename K, typename V>
	void LinkedList<K, V>::modify(K key, V data) {
		LinearNode<K, V>* tmp = search(key);
		if (tmp != nullptr)
		{
			tmp->setData(data);
		}
	}

	/*
	template<typename K, typename V>
	LinearNode<K, V>* LinkedList<K, V>::getNode(int pos) {
		LinearNode<K, V>* tmp = head;

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

	template<typename K, typename V>
	LinearNode<K, V>* LinkedList<K, V>::removeNode(int pos) {
		LinearNode<K, V>* tmp = head;
		LinearNode<K, V>* before = nullptr;
		LinearNode<K, V>* deleted = nullptr;

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

	template<typename K, typename V>
	LinearNode<K, V>* LinkedList<K, V>::removeFirstNode() {
		return removeNode(0);
	}

	template<typename K, typename V>
	LinearNode<K, V>* LinkedList<K, V>::removeLastNode() {
		return removeNode(length() - 1);
	}

	template<typename K, typename V>
	LinearNode<K, V>* LinkedList<K, V>::updateNode(int pos, T data) {
		LinearNode<K, V>* tmp = getNode(pos);
		if (tmp != nullptr) {
			tmp->setData(data);
		}
		return tmp;
	}

	template<typename K, typename V>
	std::string LinkedList<K, V>::tostd::string() {
		LinearNode<K, V>* tmp = head;
		std::string s = "";

		if (isEmpty()) {
			return s;
		}

		while (tmp != nullptr) {
			s.append(to_std::string(tmp->getData()));
			s.append("-");
			tmp = tmp->getNext();
		}
		s.pop_back();
		return s;
	}*/

}
#endif 