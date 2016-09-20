#include <iostream>

using namespace std;

class Node {
	friend class DoubleList;
private:
	Node * prev;
	int element;
	Node * next;
public:
	Node(int = 0) :prev(NULL), element(0), next(NULL)
	{}
};

class DoubleList {
private:
	Node * head;
	Node * tail;
public:
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