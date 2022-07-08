#pragma once

#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
private:
    T data;
public:
    Node(T);
    T getData();
    void setData(T);
};

template <typename T>
Node<T>::Node(T data) {
    this->data = data;
}

template <typename T>
T Node<T>::getData() {
    return data;
}

template <typename T>
void Node<T>::setData(T data) {
    this->data = data;
}

#endif