#include "CPhoneIter.h"

CPhoneIter::CPhoneIter(CPhoneList & m) : m_cpList(&m)
{
	m_iCurrIndex=0;
}

Record * CPhoneIter::GetFirst()
{
	return &m_cpList->m_rArray[0];
}

Record * CPhoneIter::GetPrev()
{
	int lastIndex = m_cpList->m_iFirstEmpty;
	if (--lastIndex < 0)
	{
		lastIndex = 0;
	}

	return &m_cpList->m_rArray[lastIndex];
}

Record * CPhoneIter::GetNext()
{
	if (++m_iCurrIndex >= 5)
	{
		return nullptr;
	}

	return &m_cpList->m_rArray[m_iCurrIndex];
}

Record * CPhoneIter::GetLast()
{
	int lastempty = m_cpList->m_iFirstEmpty;
	if (--lastempty <= 0)
	{
		lastempty = 0;
	}
	return &m_cpList->m_rArray[lastempty];
}
