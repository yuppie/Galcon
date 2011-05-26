#ifndef FLEET_H
#define FLEET_H

class CFleet
{
public:
   CFleet();
   ~CFleet();

   void SetPercent(const unsigned short) const;
   void GetPosition (unsigned short&, unsigned short&) const;

private:

   void updatePosition();

   unsigned short m_idFrom;
   unsigned short m_idTo;
   unsigned short m_size;
   unsigned short m_percentPassed;
   unsigned short m_realX;
   unsigned short m_realY;

};

#endif // FLEET_H
