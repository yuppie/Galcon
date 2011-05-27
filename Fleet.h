#ifndef FLEET_H
#define FLEET_H

#include "Planet.h"
#include "Player.h"

class CFleet
{
public:
   CFleet();
   ~CFleet();

   void SetPercent(const unsigned short);
   void GetPosition (unsigned short&, unsigned short&) const;

private:
   struct Point
   {
      unsigned int x;
      unsigned int y;
   };

   void updatePosition();

   unsigned short m_id;
   CPlayer* m_player;
   unsigned short m_number;
   unsigned short m_percentPassed;
   Point m_from;
   Point m_to;
   Point m_actualPosition;
};

#endif // FLEET_H
