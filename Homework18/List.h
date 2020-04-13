#pragma once
#include "Node.h"
#include <string>
#include <iostream>
class List {
public:
	List();
	~List();
	void push_front(int n);
	Node* getFirst();
	Node* getLast();
	Node* getNext(Node*);
	Node* getPrev(Node*);
	int getDataAtNode(Node*);
	void insertBefore(int d, int n);
	void deleteNode(int n);
	std::string toString();
	void push_back(int y);
	
	void display();
	int pop_front();
	int pop_back();

private:
	void displayHelper(Node* n);
	
	Node* head;
	Node* tail;
	int size_;
	int deleteitems;

};