#include<iostream>
#include "CPhoneIter.h" 

void Print(CPhoneList& pl)
{
	Record* pRec;
	CPhoneIter anIter(pl);
	std::cout << "\nList";

	pRec = anIter.GetFirst();
	while (pRec)
	{
		std::cout << "\n" << pRec->name << "\t" << pRec->number;
		pRec = anIter.GetNext();
	}
}

int main()
{
	int i;
	CPhoneList pl;
	Record rec;

	for (i = 0; i < 5; i++)
	{
		std::cout << "\nName:";
		std::cin >> rec.name;
		std::cout << "\nNumber:";
		std::cin >> rec.number;
		pl.Append(rec);
	}
	Print(pl);
	return 0;
}