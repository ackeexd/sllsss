#include <iostream>
using namespace std; 
#pragma once
class sll
{
public:
		struct Node
		{
			int data = 0;
			Node* next = nullptr;
		};
private:
		Node* head = nullptr;
		Node* tail = nullptr;
		int count = 0;

public:
	~sll();
	void AddToHead(int data);
	void AddToTail(int data);
	void InsertInto(int data, int position);
	void DeleteFromHead();
	void DeleteFromTail();
	void DeleteByIndex(int position);
	void Clear();
	void Print() const;
	int GetCount() const;
	int IndexOf(int data) const;
};

