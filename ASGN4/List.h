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

#pragma once
#include <string>
#include <iostream>
#include "Node.h"

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
	void swap(Node* n, Node* k);
	void insertBefore(int d, int n);
	void deleteNode(int n);
	std::string toString();
	void push_back(int y);
	void reverse();
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

