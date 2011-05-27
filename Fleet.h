#ifndef FLEET_H
#define FLEET_H

#include "Planet.h"
#include "Player.h"

class CFleet
{
public:
   CFleet();
   ~CFleet();

   void SetPercent(double); //For synhronization with server

   void IncreaseProcent(double); //For simulation

   void GetPosition (unsigned short&, unsigned short&) const;  //Output into GUI

private:
   struct Point
   {
      unsigned int x;
      unsigned int y;
   };

   void updatePosition();

   Point m_from;
   Point m_to;
   CPlayer* m_player;
   bool m_reached;
   unsigned short m_id;
   unsigned short m_number;

   double m_percentPassed;
   double m_actualX;
   double m_actualY;
};

#endif // FLEET_H
