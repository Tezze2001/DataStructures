#pragma once

#ifndef TreeNode_H
#define TreeNode_H

#include "../Node.h"

namespace Tree {

    template<typename K, typename V>
    class TreeNode : Node<K, V> {
    private:
        TreeNode<K, V>* left;
        TreeNode<K, V>* right;
    public:
        TreeNode(K, V);
        TreeNode(K, V, TreeNode<K, V>*);
        TreeNode(K, V, TreeNode<K, V>*, TreeNode<K, V>*);
        void setLeft(TreeNode<K, V>*);
        TreeNode<K, V>* getLeft();
        void setRight(TreeNode<K, V>*);
        TreeNode<K, V>* getRight();
        void setData(V);
        V getData();
        K getKey();
    };

    template<typename K, typename V>
    TreeNode<K, V>::TreeNode(K key, V data) : TreeNode<K, V>(key, data, nullptr, nullptr) {
    }

    template<typename K, typename V>
    TreeNode<K, V>::TreeNode(K key, V data, TreeNode<K, V>* left, TreeNode<K, V>* right) : Node<K, V>(key, data) {
        setLeft(Left);
        setright(right);
    }


    template<typename K, typename V>
    void TreeNode<K, V>::setLeft(TreeNode<K, V>* left) {
        this->left = left;
    }

    template<typename K, typename V>
    TreeNode<K, V>* TreeNode<K, V>::getLeft() {
        return left;
    }

    template<typename K, typename V>
    void TreeNode<K, V>::setRight(TreeNode<K, V>* right) {
        this->right = right;
    }

    template<typename K, typename V>
    TreeNode<K, V>* TreeNode<K, V>::getRight() {
        return right;
    }

    template<typename K, typename V>
    void TreeNode<K, V>::setData(V data) {
        Node<K, V>::setData(data);
    }

    template<typename K, typename V>
    V TreeNode<K, V>::getData() {
        return Node<K, V>::getData();
    }

    template<typename K, typename V>
    K TreeNode<K, V>::getKey() {
        return Node<K, V>::getKey();
    }

}

#endif