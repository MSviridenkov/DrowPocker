#ifndef CLOSED_CARD_H
#define CLOSED_CARD_H
#include "card.h"
#include <string>
#include "open_card.h"
class open_card;
class closed_card: public card
{
public:
    ~closed_card();
    //closed card constractor from int where int / 13 = suit
    //and int % 13 = weight
    closed_card(int);
   closed_card();
protected:

private:
};


#endif // CLOSED_CARD_H
