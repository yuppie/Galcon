#include "Fleet.h"

CFleet::CFleet()
{
}

void CFleet::GetPosition(unsigned short& o_nX, unsigned short& o_nY) const
{
   o_nX = m_actualX;
   o_nY = m_actualY;
}

void CFleet::SetPercent(const unsigned short i_nPerc)
{
   m_percentPassed = i_nPerc;
   if (m_percentPassed >= 100)
   {
      m_percentPassed = 100;
      m_reached = true;
   }
   updatePosition();
}

void CFleet::IncreaseProcent(double i_incOn)
{
   this->SetPercent(m_percentPassed + i_incOn);
}

void CFleet::updatePosition()
{
   m_actualPosition.x = ((double)m_percentPassed/100) * m_to.x +
            (1 - (double)m_percentPassed/100) * m_from.x;
   m_actualPosition.y = ((double)m_percentPassed/100) * m_to.y +
            (1 - (double)m_percentPassed/100) * m_from.y;
}
