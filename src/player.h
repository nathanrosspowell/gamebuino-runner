#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "position.h"

class Player
{
public:
    Position pos;
    Rect head;
    Rect body;
    Rect legs;

    Player() 
        : pos ( 10, 10 )
        , head( 2, 0, 2, 2 )
        , body(0, 2, 6, 8 )
        , legs( 2, 10, 2, 8 )
    {
    }
};
#endif // _PLAYER_H_