#include <math.h>

#include "Planet.h"


CPlanet::CPlanet()
{
}

unsigned long CPlanet::GetArmy() const
{
   return floor(m_army);
}

unsigned int CPlanet::GetPlayer() const
{
   return this->m_player->GetId();
}

void CPlanet::SetArmy(const unsigned int i_nArmy)
{
   if ((m_army - i_nArmy) > EPS)
   {
      m_army = i_nArmy;
   }
}

void CPlanet::SetPlayer(const unsigned int i_nPlayer)
{
   m_player = i_nPlayer;
}

void CPlanet::GetPosition(unsigned int& o_nX, unsigned int& o_nY) const
{
   o_nX = m_x;
   o_nY = m_y;
}

bool CPlanet::DataChanged(const unsigned long i_nArmy, const unsigned int i_nPlayer) const
{
   if ((m_army != i_nArmy) || (m_player != i_nPlayer))
   {
      return true;
   }
   return false;
}
