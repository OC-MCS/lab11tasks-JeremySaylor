#include <iostream>
#include "NumberList.h"
#include "NumberList.cpp"

using namespace std;

int main()
{
	NumberList Jeremy;
	Jeremy.insertNode(10);
	Jeremy.appendNode(40);
	Jeremy.insertNode(30);
	Jeremy.insertNode(25);
	Jeremy.deleteNode(30);
	Jeremy.displayList();



	return 0;
}