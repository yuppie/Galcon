#include "Planet.h"

CPlanet::CPlanet()
{
}

unsigned int CPlanet::GetArmy() const
{
   return this->m_army;
}

unsigned int CPlanet::GetPlayer() const
{
   return this->m_player;
}

void CPlanet::SetArmy(const unsigned int i_nArmy)
{
   m_army = i_nArmy;
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
