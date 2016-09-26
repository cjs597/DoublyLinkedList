#include <iostream>
#include "List.h"
using namespace std;

DoubleList lst1;

Node::Node(int e) : prev(NULL),element(e),next(NULL) {}

DoubleList::DoubleList() :list_head(0), list_tail(0) {}

void DoubleList::find_head() // 출력
{
	cout << list_head->element << endl;
}
void DoubleList::find_tail() // 출력
{
	cout << list_tail->element << endl;
}
void DoubleList::insert_before_head(int e)
{
	if (empty()) {
		cout << "head is null" << endl;
		exit(1);
	}
	Node * tmp = new Node(e);
	tmp->next = list_head;
	list_head->prev = tmp;
	list_head = tmp;

}
void DoubleList::insert_before_tail(int e)
{
	if (empty()) {
		cout << "tail is null" << endl;
		exit(1);
	}
	Node * tmp = new Node(e);
	if (list_tail->prev == NULL) {
		tmp->next = list_tail;
		list_tail->prev = tmp;
		list_head = tmp;
	}
	else {
		tmp->prev = list_tail->prev;
		tmp->next = list_tail;
		list_tail->prev = tmp;
		tmp->prev->next = list_tail;
	}
}
void DoubleList::insert_after_head(int e)
{
	if (empty()) {
		cout << "head is null" << endl;
		exit(1);
	}
	if (list_head->next == NULL) {
		Node * tmp = new Node(e);
		list_head->next = tmp;
		tmp->prev = list_head;
		list_tail = tmp;
	}
	else {
		Node * tmp = new Node(e);
		tmp->next = list_head->next;
		tmp->prev = tmp->next->prev;
		list_head->next = tmp;
		tmp->next->prev = tmp;
	}
	
}
void DoubleList::insert_after_tail(int e)
{
	if (empty()) {
		cout << "tail is null" << endl;
		exit(1);
	}
	Node * tmp = new Node(e);
	list_tail->next = tmp;
	tmp->prev = list_tail;
	list_tail = tmp;
}
void DoubleList::replace_head(int e)
{
	if (empty()) {
		cout << "head is null" << endl;
		exit(1);
	}
	list_head->element = e;
}
void DoubleList::replace_tail(int e)
{
	if (empty()) {
		cout << "tail is null" << endl;
		exit(1);
	}
	list_tail->element = e;
}
void DoubleList::erase_head()
{
	if (empty()) {
		cout << "head is null" << endl;
		exit(1);
	}
	if (list_head->next == NULL) {
		list_head = NULL;
		list_tail = NULL;
	}
	else {
		Node * tmp = list_head;
		list_head = list_head->next;
		delete tmp;
	}
		
}
void DoubleList::erase_tail()
{
	if (empty()) {
		cout << "tail is null" << endl;
		exit(1);
	}
	if (list_tail->prev == NULL) {
		list_head = NULL;
		list_tail = NULL;
	}
	else {
		Node * tmp = list_tail;
		list_tail = list_tail->prev;
		delete tmp;
	}
}
void DoubleList::next() // 출력
{
	cout << list_head->next->element << endl;
}
void DoubleList::previous() // 출력
{
	cout << list_tail->prev->element << endl;
}

bool DoubleList::empty()
{
	if (list_head == 0)
		return 1;
	else
		return 0;
}


void input()
{
	int num = -1;
	while (num != 0)
	{
		cin >> num;

		switch (num)
		{
			int e;
		case 1:
			lst1.find_head();
			break;
		case 2:
			lst1.find_tail();
			break;
		case 3:
			cin >> e;
			lst1.insert_before_head(e);
			break;
		case 4:
			cin >> e;
			lst1.insert_before_tail(e);
			break;
		case 5:
			cin >> e;
			lst1.insert_after_head(e);
			break;
		case 6:
			cin >> e;
			lst1.insert_after_tail(e);
			break;
		case 7:
			cin >> e;
			lst1.replace_head(e);
			break;
		case 8:
			cin >> e;
			lst1.replace_tail(e);
			break;
		case 9:
			lst1.erase_head();
			break;
		case 10:
			lst1.erase_tail();
			break;
		case 11:
			lst1.next();
			break;
		case 12:
			lst1.previous();
			break;
		}
	}
}

void DoubleList::init(int e) {
	Node * tmp = new Node(e);
	list_head = tmp;
	list_tail = tmp;
}



int main()
{
	int first;
	cin >> first;
	lst1.init(first);
	input();
	return 0;
}