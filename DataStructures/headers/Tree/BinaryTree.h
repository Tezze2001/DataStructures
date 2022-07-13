#pragma once
#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "TreeNode.h"
#include <string>

namespace Tree {
	template<typename K, typename V>
	class BinaryTree {
	private:
		TreeNode<K, V>* root;
		unsigned int height(TreeNode<K, V>*, int);
		unsigned int getDepth(TreeNode<K, V>*, K, int);
	public:
		BinaryTree<K, V>();
		BinaryTree<K, V>(TreeNode<K, V>*);
		bool isEmpty();
		unsigned int height();
		unsigned int getDepth(K);
		std::string toStringPreorder();
		std::string toStringInorder();
		std::string toStringPostorder();

		void insert(TreeNode<K, V>*);
		TreeNode<K, V>* search(K);
		void delete_element(K);
		void modify(K, V);

	};

	template<typename K, typename V>
	BinaryTree<K, V>::BinaryTree<K, V>() {
		this->root = nullptr;
	}

	template<typename K, typename V>
	BinaryTree<K, V>::BinaryTree<K, V>(TreeNode<K, V>* root) {
		this->head = head;
	}

	template<typename K, typename V>
	bool BinaryTree<K, V>::isEmpty() {
		return root == nullptr;
	}

	template<typename K, typename V>
	unsigned int height(TreeNode<K, V>* root, int height) {
		if (root == nullptr) {
			return 0;
		}
		unsigned int left = height(root->getLeft(), height + 1);
		unsigned int right = height(root->getRight(), height + 1);
		return (left > right) ? left : right;
	}

	template<typename K, typename V>
	unsigned int BinaryTree<K, V>::height() {
		return height(root, 0);
	}
	
	template<typename K, typename V>
	unsigned int getDepth(TreeNode<K, V>* root, K key, int height) {
		if (root == nullptr) {
			return 0;
		}

	}
}
#endif 