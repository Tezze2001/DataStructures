#pragma once

#ifndef LINEARNODE_H
#define LINEARNODE_H

#include "../Node.h"

namespace LinkedList {

    template<typename K, typename V>
    class LinearNode : Node<K, V> {
    private:
        LinearNode<K, V>* next;
        LinearNode<K, V>* prev;
    public:
        LinearNode(K, V);
        LinearNode(K, V, LinearNode<K, V>*);
        LinearNode(K, V, LinearNode<K, V>*, LinearNode<K, V>*);
        void setNext(LinearNode<K, V>*);
        LinearNode<K, V>* getNext();
        void setPrev(LinearNode<K, V>*);
        LinearNode<K, V>* getPrev();
        void setData(V);
        V getData();
        K getKey();
    };

    template<typename K, typename V>
    LinearNode<K, V>::LinearNode(K key, V data) : LinearNode<K, V>(key, data, nullptr, nullptr) {
    }

    template<typename K, typename V>
    LinearNode<K, V>::LinearNode(K key, V data, LinearNode<K, V>* next) : LinearNode<K, V>(key, data, next, nullptr) {
    }

    template<typename K, typename V>
    LinearNode<K, V>::LinearNode(K key, V data, LinearNode<K, V>* next, LinearNode<K, V>* prev) : Node<K, V>(key, data) {
        setNext(next);
        setPrev(prev);
    }


    template<typename K, typename V>
    void LinearNode<K, V>::setNext(LinearNode<K, V>* next) {
        this->next = next;
    }

    template<typename K, typename V>
    LinearNode<K, V>* LinearNode<K, V>::getNext() {
        return next;
    }

    template<typename K, typename V>
    void LinearNode<K, V>::setPrev(LinearNode<K, V>* prev) {
        this->prev = prev;
    }

    template<typename K, typename V>
    LinearNode<K, V>* LinearNode<K, V>::getPrev() {
        return prev;
    }

    template<typename K, typename V>
    void LinearNode<K, V>::setData(V data) {
        Node<K, V>::setData(data);
    }

    template<typename K, typename V>
    V LinearNode<K, V>::getData() {
        return Node<K, V>::getData();
    }

    template<typename K, typename V>
    K LinearNode<K, V>::getKey() {
        return Node<K, V>::getKey();
    }

}

#endif