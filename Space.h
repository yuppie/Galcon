#ifndef SPACE_H
#define SPACE_H

#include <vector>
#include <list>

#include "Planet.h"
#include "Fleet.h"

class CSpace
{
public:
   CSpace();
   ~CSpace();
   void UpdatePlanets(const std::vector<std::pair<unsigned long, unsigned int> >&);
   void DeleteFleet(unsigned int i_nId);
private:
   std::vector<CPlanet* > m_planets;
   std::list<CFleet* > m_fleets;
   unsigned int m_width;
   unsigned int m_height;
};

#endif // SPACE_H
