#ifndef CPLANET_H
#define CPLANET_H
#include "Player.h"

class CPlanet
{
public:
   CPlanet();
   ~CPlanet();
   const double EPS = 0.5;

   unsigned long GetArmy () const;
   unsigned int GetPlayer () const;
   void GetPosition(unsigned int&, unsigned int&) const;
   bool DataChanged(const unsigned long, const unsigned int) const;

   void SetArmy (const unsigned long);
   void SetPlayer (const unsigned int);

private:
   unsigned short m_id;
   unsigned short m_x;
   unsigned short m_y;
   unsigned short m_radius;
   double m_army;
   CPlayer* m_player;
};

#endif // CPLANET_H
