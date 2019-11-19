#pragma once
#include "Record.h"
class CPhoneList 
{
	friend class CPhoneIter;
public:
	CPhoneList();
	int Append(const Record& rec);
	Record* Search(char* searchKey);
private:
	Record m_rArray[5];
	int m_iFirstEmpty;
};