#include <iostream>

using namespace std;

class Node {
	friend class DoubleList;
private:
	Node * prev;
	int element;
	Node * next;
public:
	Node(Node * = 0, int = 0, Node * = 0);
};

Node::Node(Node * n1, int e, Node * n2) : prev(n1), element(e), next(n2) {}


class DoubleList {
private:
	Node * list_head;
	Node * list_tail;
public:
	DoubleList();
	void find_head();
	void find_tail();
	void insert_before_head(int);
	void insert_before_tail(int);
	void insert_after_head(int);
	void insert_after_tail(int);
	void replace_head(int);
	void replace_tail(int);
	void erase_head();
	void erase_tail();
	void next();
	void previous();
};

DoubleList::DoubleList() :list_head(0), list_tail(0) {}

void DoubleList::find_head()
{}
void DoubleList::find_tail()
{}
void DoubleList::insert_before_head(int e)
{}
void DoubleList::insert_before_tail(int e)
{}
void DoubleList::insert_after_head(int e)
{}
void DoubleList::insert_after_tail(int e)
{}
void DoubleList::replace_head(int e)
{}
void DoubleList::replace_tail(int e)
{}
void DoubleList::erase_head()
{}
void DoubleList::erase_tail()
{}
void DoubleList::next()
{}
void DoubleList::previous()
{}