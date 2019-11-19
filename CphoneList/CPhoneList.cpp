#include<cstring>
#include "CPhoneList.h"
#include "CPhoneIter.h"


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
	int i;

	for (i = 0; i < m_iFirstEmpty; i++)
	{
		if (std::strcmp(searchKey, m_rArray[i].name) == 0)
		{
			return &m_rArray[i];
		}
	}

	return nullptr;
}
