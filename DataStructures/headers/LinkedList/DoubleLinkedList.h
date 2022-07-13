#pragma once

#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include "LinkedList.h"
#include "LinearNode.h"

namespace LinkedList {
	template<typename K, typename V>
	class DoubleLinkedList : public LinkedList<K, V> {
	private:
		LinearNode<K, V>* tail;
	public:
		DoubleLinkedList<K, V>();
		DoubleLinkedList<K, V>(LinearNode<K, V>*);
		void insert(LinearNode<K, V>*);
		//LinearNode<K, V>* search(K) override;
		void delete_element(K);
		//void modify(K, V) override;
	};

	template<typename K, typename V>
	DoubleLinkedList<K, V>::DoubleLinkedList<K, V>() : DoubleLinkedList<K, V>(nullptr) {
	}

	template<typename K, typename V>
	DoubleLinkedList<K, V>::DoubleLinkedList<K, V>(LinearNode<K, V>* head) : LinkedList<K, V>(head) {
		this->tail = head;
	}

	template<typename K, typename V>
	void DoubleLinkedList<K, V>::insert(LinearNode<K, V>* node) {
		LinkedList<K, V>::insert(node);
		node->setPrev(tail);
		tail = node;
	}

	template<typename K, typename V>
	void DoubleLinkedList<K, V>::delete_element(K key) {
		LinearNode<K, V>* found = LinkedList<K, V>::search(key);
		if (found == nullptr) {
			return;
		}
		if (found->getNext() == nullptr) {
			tail = found->getPrev();
		} else {
			found->getNext()->setPrev(found->getPrev());
		}
		LinkedList<K, V>::delete_element(key);
	}
}

#endif
