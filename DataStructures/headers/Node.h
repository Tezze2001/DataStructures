#pragma once

#ifndef NODE_H
#define NODE_H

template <typename K, typename V>
class Node {
private:
    V data;
    K key;
    void setKey(K);
public:
    Node(K, V);
    V getData();
    void setData(V);
    K getKey();
};

template <typename K, typename V>
Node<K, V>::Node(K key, V data) {
    setData(data);
    setKey(key);
}

template <typename K, typename V>
V Node<K, V>::getData() {
    return data;
}

template <typename K, typename V>
void Node<K, V>::setData(V data) {
    this->data = data;
}

template <typename K, typename V>
K Node<K, V>::getKey() {
    return key;
}

template <typename K, typename V>
void Node<K, V>::setKey(K key) {
    this->key = key;
}

#endif