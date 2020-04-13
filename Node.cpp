/*
* @file
* @author  <Ibrahim jaber>
* @version 1.0
*
*
*
* @section DESCRIPTION
* < Swap Function for the doubly linked list >
*
*
* @section LICENSE
* <any necessary attributions>
*
* Copyright 2019 <Ibrahim jaber>
* Permission to use, copy, modify, and/or distribute this software for
* any purpose with or without fee is hereby granted, provided that the
* above copyright notice and this permission notice appear in all copies.
*
* THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
* WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
* MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
* ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
* WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
* OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*/
#include "Node.h"
int Node::created = 0;
int Node::destroyed = 0;
Node::Node()
{
	Node::created++;
}

Node::Node(int data, Node* prev, Node* next):data(data),prev(prev),next(next)
{
}

Node::~Node()
{
	Node::destroyed++;
}
