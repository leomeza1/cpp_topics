
#ifndef RATED_PLAYER_H
#define RATED_PLAYER_H

#include "table_tennis_player.h"

// A dimple derived class used to demonstrate basic inheritence concepts
class RatedPlayer : public TableTennisPlayer
// Public derivation:
//   Public members of the base class become public members of
//   the derived class. The private members of the base class
//   become part of the derived class, but they can be accessed
//   only through public and protected methods of the base class,
//   including constructor methods.
{
    private:

        unsigned int rating;

    public:

        RatedPlayer(unsigned int r = 0,
                    const char * fn = "none",
                    const char * ln = "none",
                    bool ht = false);

        RatedPlayer(unsigned int r, const TableTennisPlayer & tp);

        const char * PlayerType() const;

        unsigned int Rating()
        {
            return rating;
        }

        void ResetRating(unsigned int r)
        {
            rating = r;
        }
};

#endif // RATED_PLAYER_H