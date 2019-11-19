#pragma once
#include "CPhoneList.h"
class CPhoneIter
{
public:
	CPhoneIter(CPhoneList& m);
	Record* GetFirst();
	Record* GetPrev();
	Record* GetNext();
	Record* GetLast();

private:
	CPhoneList* const m_cpList;
	int m_iCurrIndex;
};