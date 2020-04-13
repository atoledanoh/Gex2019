/*
* @file <========================.cpp>
*
* @author  <Alejandro Toledano>
* @version <1.0>
*
* change log
* name      date
*
*
* [file, auther, version, and change log are not necessary with
*    modern source code management system]
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < ====================================================================== >
*
*
* @section LICENSE
*  <any necessary attributions>
*
*  Copyright 2019
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
*/

#include "List.h"
#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
#include <windows.h>
#include<stdlib.h>
#include<iomanip>
#include <vector>
#include <sstream>
# include <algorithm>
#include <list>
#include <stdexcept>

List::List() : size_(0), head(nullptr) {}

List::~List() {
	Node* current = head;
	while (current != nullptr) {
	Node* next = current->next;
	deleteitems++;
	delete current;
	current = next;
	std::cout << " DCTOR\n";
		std::cout << deleteitems;
	}
}
void List::push_front(int n) {
	Node* newNode = new Node(n,nullptr,nullptr);
	if (head == nullptr) {
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	size_++;
}

void List::push_back(int n) {
	Node* newNode = new Node(n ,nullptr,nullptr);
	if (size_ == 0) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
	size_++;
}

void List::displayHelper(Node *n) {
	if (n == nullptr) {
		return;
	}
	std::cout << n->data << "--->";
	displayHelper(n->next);
}
void List::display() {
	displayHelper(head);
}

int List::pop_front() {
	if (size_ == 0) {
		throw std::out_of_range("Tried to pop empty list");
	}

	int tmp = head->data;
	Node* cur = head;
	if (size_ == 1) {
		tail = nullptr;
		head = nullptr;
	}
	else {
		head = head->next;
		head->prev = nullptr;
	}
	
	delete cur;
	size_--;
	return tmp;
}

int List::pop_back() {
	if (head == nullptr) {
		return 0;
	}
	int tmp = head->data;
	Node* delteback = head->next;
	head->next = head;
	delete delteback;
	size_--;
	return tmp;
}

Node* List::getFirst() {
	return head;
}

Node* List::getLast() {
	return tail;
}

Node* List::getNext(Node* cur) {
	if (cur)//same as cur != nullptr;
		return cur->next;
	else
		throw std::invalid_argument("getNext nullptr invalid node");
}

Node* List::getPrev(Node* cur) {
	if (cur)
		return cur->prev;
	else
		throw std::invalid_argument("getPrev nullptr exception");
}

int List::getDataAtNode(Node* cur) {
	if (cur)
		return cur->data;
	else
		throw std::invalid_argument("getDataAt nullptr exception");
}

void List::insertBefore(int d, int n) {
	Node* newNode = new Node();
	newNode->data = d;
	newNode->next = nullptr;
	
	if (n == 1) {
		newNode->next = head;
		head = newNode;
		//tail = newNode;
	}
	Node* newNode2 = head;
	for (int i{ 0 }; i < n - 2; i++) {
		newNode2 = newNode2->next;
	}
	newNode->next = newNode2->next;
	newNode2->next = newNode;
	size_++;
}

void List::deleteNode(int n) {
	Node* newNode = head;
	if (n == 1) {
		head = newNode->next;
		delete newNode;
	}
	
	for (int i{ 0 }; i < n - 2; i++) {
		newNode = newNode->next;
	}
		Node* newNode2 = newNode->next;
		newNode->next = newNode2->next;
		delete newNode2;
		size_--;
}

std::string List::toString() {
	std::stringstream ss;
	Node* current = head;
	while (current != nullptr) {
		ss << current->data << "---->";
		current = current->next;
	}
	return ss.str();
}