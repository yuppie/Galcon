#ifndef CGAME_H
#define CGAME_H

typedef int IMessage;

class CGame
{
   Q_OBJECT

public:
   CGame();
   ~CGame();
   void SlotStartData(IMessage*);
   void SlotStateMap(IMessage*);
   void SlotFinishGame(IMessage*);
};

#endif // CGAME_H
