#include "sll.h"
int main()
{
	sll s;

	// ������� � ����� ������
	s.AddToTail(10);
	s.AddToTail(20);
	s.AddToTail(30);
	s.AddToTail(40);
	s.Print();
	//
	//// ������� � ������ ������
	//s.AddToHead(50);
	//s.AddToHead(60);
	//s.AddToHead(70);
	//s.AddToHead(80);
	//s.Print();
	//
	//// ���������� ���������, ����� ���������
	//cout << "count: " << s.GetCount() << "\n";
	//cout << "index of 70: " << s.IndexOf(70) << ", index of 90: " << s.IndexOf(90) << "\n";
	//
	//// ������� �� �������
	//s.InsertInto(-1, -1);
	//s.Print();
	//s.InsertInto(2, 2);
	//s.Print();
	//s.InsertInto(22, 22);
	//s.Print();
	//
	//// �������� � ������ ������
	//s.DeleteFromHead();
	//s.DeleteFromHead();
	//s.DeleteFromHead();
	//s.Print();
	//
	//// �������� � ����� ������
	//s.DeleteFromTail();
	//s.DeleteFromTail();
	//s.DeleteFromTail();
	//s.Print();
	//
	//// �������� �� ���������� �������
	//s.DeleteByIndex(0);
	//s.DeleteByIndex(1);
	//s.DeleteByIndex(2);
	//s.Print();

	// ������� ������
	//s.Clear();
	//s.Print();
}