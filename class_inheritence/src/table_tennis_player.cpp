#include "table_tennis_player.h"
#include <iostream>
#include <cstring>

TableTennisPlayer::TableTennisPlayer(const char * fn, const char * ln, bool ht)
{
    std::strncpy(firstname, fn, LIM - 1);
    firstname[LIM - 1] = '\0';
    std::strncpy(lastname, ln, LIM - 1);
    lastname[LIM - 1] = '\0';
    hasTable = ht;
}

const char * TableTennisPlayer::Name() const
{
    return lastname;
}

const char * TableTennisPlayer::PlayerType() const
{
    return "Table Tennis Player";
}
