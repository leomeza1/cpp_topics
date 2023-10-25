
#ifndef TABLE_TENNIS_PLAYER_H
#define TABLE_TENNIS_PLAYER_H

// A simple base class used to demonstrate basic inheritence concepts
class TableTennisPlayer
{
    private:

        enum { LIM = 20 };

        char firstname[LIM];
        char lastname[LIM];
        bool hasTable;

    public:

        TableTennisPlayer(const char * fn = "none", const char * ln = "none", bool ht = false);

        const char * Name() const;

        const char * PlayerType() const;

        bool HasTable() const
        {
            return hasTable;
        };

        void ResetTable(bool v)
        {
            hasTable = v;
        };
};

#endif // TABLE_TENNIS_PLAYER_H
