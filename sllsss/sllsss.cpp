#include "sll.h"
int main()
{
	sll s;

	// вставка в конец списка
	s.AddToTail(10);
	s.AddToTail(20);
	s.AddToTail(30);
	s.AddToTail(40);
	s.Print();
	//
	//// вставка в начало списка
	//s.AddToHead(50);
	//s.AddToHead(60);
	//s.AddToHead(70);
	//s.AddToHead(80);
	//s.Print();
	//
	//// количество элементов, поиск элементов
	//cout << "count: " << s.GetCount() << "\n";
	//cout << "index of 70: " << s.IndexOf(70) << ", index of 90: " << s.IndexOf(90) << "\n";
	//
	//// вставка по позиции
	//s.InsertInto(-1, -1);
	//s.Print();
	//s.InsertInto(2, 2);
	//s.Print();
	//s.InsertInto(22, 22);
	//s.Print();
	//
	//// удаление с начала списка
	//s.DeleteFromHead();
	//s.DeleteFromHead();
	//s.DeleteFromHead();
	//s.Print();
	//
	//// удаление с конца списка
	//s.DeleteFromTail();
	//s.DeleteFromTail();
	//s.DeleteFromTail();
	//s.Print();
	//
	//// удаление по указанному индексу
	//s.DeleteByIndex(0);
	//s.DeleteByIndex(1);
	//s.DeleteByIndex(2);
	//s.Print();

	// очистка списка
	//s.Clear();
	//s.Print();
}