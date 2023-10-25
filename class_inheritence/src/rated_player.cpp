
#include "rated_player.h"
#include <iostream>
#include <cstring>

RatedPlayer::RatedPlayer(unsigned int r, const char * fn, const char * ln, bool ht)
            : TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

// Note that this constructor invokes the TableTennisPlayer's copy-constructor
// which was implicitly defined by the compliler. This is fine because the
// copy-constructor does memberwise copying and the TableTennisPlayer class
// does not do any dynamic memory allocation (yet).
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
            : TableTennisPlayer(tp),
              rating(r)
{
    // This is legal too
    //rating = r;
}

const char * RatedPlayer::PlayerType() const
{
    return "Rated Table Tennis Player";
}
