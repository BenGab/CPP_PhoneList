#include "CPhoneList.h"

CPhoneList::CPhoneList()
{
	m_iFirstEmpty = 0;
}

int CPhoneList::Append(const Record & rec)
{
	if (m_iFirstEmpty >= 5)
	{
		return 0;
	}

	m_rArray[m_iFirstEmpty] = rec;
	return m_iFirstEmpty++;
}

Record * CPhoneList::Search(char * searchKey)
{
	return nullptr;
}
