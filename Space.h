#ifndef SPACE_H
#define SPACE_H

#include <vector>
#include <list>
#include <string>

#include "Planet.h"
#include "Fleet.h"

struct CPlanetStartData
{
   int m_planetId;
   int m_planetR;
   int m_planetX;
   int m_planetY;
   int m_playerId;
   int m_countFleet;
};

struct CPlayerStartData
{
   int m_playerId;
   std::string m_playerName;
};

struct CMessageStartMapGame
{

};



class CSpace
{
public:
   CSpace(int, int, int, int , std::vector<CPlanetStartData>, std::vector<CPlayerStartData>);
   ~CSpace();

   void UpdatePlanets(const std::vector<std::pair<unsigned long, unsigned int> >&);
   void Update(const double i_time);
   void DeleteFleet(unsigned int i_nId);
private:
   std::vector<CPlanet* > m_planets;
   std::list<CFleet* > m_fleets;
   unsigned int m_width;
   unsigned int m_height;
   unsigned int m_speed;
   unsigned int m_growth;
};

#endif // SPACE_H
