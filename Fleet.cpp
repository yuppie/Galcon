#include "Fleet.h"

CFleet::CFleet()
{
}

void CFleet::GetPosition(unsigned short& o_nX, unsigned short& o_nY) const
{
   o_nX = m_actualPosition.x;
   o_nY = m_actualPosition.y;
}

void CFleet::SetPercent(const unsigned short i_nPerc)
{
   m_percentPassed = i_nPerc;
   updatePosition();
}

void CFleet::updatePosition()
{
   if (m_from.x >= m_to.x)
   {
      m_actualPosition.x = ((double)m_percentPassed/100) * m_to.x +
            (1 - (double)m_percentPassed/100) * m_from.x;
   }
   else
   {
      m_actualPosition.x = ((double)m_percentPassed/100) * m_from.x +
            (1 - (double)m_percentPassed/100) * m_to.x;
   }

   if (m_from.y >= m_to.y)
   {
      m_actualPosition.y = ((double)m_percentPassed/100) * m_to.y +
            (1 - (double)m_percentPassed/100) * m_from.y;
   }
   else
   {
      m_actualPosition.y = ((double)m_percentPassed/100) * m_from.y +
            (1 - (double)m_percentPassed/100) * m_to.y;
   }
}
