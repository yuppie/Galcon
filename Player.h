#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class CPlayer
{
public:
   CPlayer(unsigned int i_id, std::string i_name): m_id(i_id), m_name(i_name){}
   ~CPlayer();

   unsigned int GetId() const;

private:
   unsigned int m_id;
   std::string m_name;
};

#endif // PLAYER_H
