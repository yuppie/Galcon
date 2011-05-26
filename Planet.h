#ifndef CPLANET_H
#define CPLANET_H

class CPlanet
{
public:
   CPlanet();
   ~CPlanet();

   unsigned int GetArmy () const;
   unsigned int GetPlayer () const;
   void GetPosition(unsigned int&, unsigned int&) const;

   void SetArmy (const unsigned int);
   void SetPlayer (const unsigned int);

private:
   unsigned short m_id;
   unsigned short m_x;
   unsigned short m_y;
   unsigned short m_radius;
   unsigned int m_army;
   unsigned int m_player;
};

#endif // CPLANET_H
