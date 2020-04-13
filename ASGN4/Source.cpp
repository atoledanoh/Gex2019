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

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Node.h"
#include "List.h"

int main() {
	List l;
	for (int i = 0; i < 8; i++) {
		l.push_front(i);
	}
	Node* n = l.getFirst();
	n = l.getNext(n);
	Node* k = l.getFirst();
	k = l.getNext(k);
	k=l.getNext(n);
	l.display();

	//swap
	l.swap(n,k);
	l.display();
}