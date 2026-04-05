#include "mydlist.hpp"
#include <iostream>

using namespace std;


int main()
{
	MyDoublyLinkedList<int>* mdlist = new MyDoublyLinkedList<int>();

	cout << "empty? " << mdlist->isEmpty() << endl;

	int* i = new int(10);

	mdlist->addToHead(i);

	cout << "top? " << *(mdlist->getHeadNode()->get()) << endl;

	mdlist->removeFromTail();

	cout << "size? " << mdlist->getSize() << endl;

	delete mdlist;

	return 0;
}
