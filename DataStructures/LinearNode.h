#pragma once

#ifndef LINEARNODE_H
#define LINEARNODE_H

#include "Node.h"

template<typename T>
class LinearNode : Node<T> {
private:
    LinearNode<T>* next;
public:
    LinearNode(T);
    LinearNode(T, LinearNode<T>*);
    void setNext(LinearNode<T>*);
    LinearNode<T>* getNext();
    void setData(T);
    T getData();
};

template<typename T>
LinearNode<T>::LinearNode(T data) : Node<T>(data) {
    this->next = nullptr;
}

template<typename T>
LinearNode<T>::LinearNode(T data, LinearNode<T>* next) : Node<T>(data) {
    this->next = next;
}

template<typename T>
void LinearNode<T>::setNext(LinearNode<T>* next) {
    this->next = next;
}

template<typename T>
LinearNode<T>* LinearNode<T>::getNext() {
    return next;
}

template<typename T>
void LinearNode<T>::setData(T data) {
    Node<T>::setData(data);
}
template<typename T>
T LinearNode<T>::getData() {
    return Node<T>::getData();
}

#endif