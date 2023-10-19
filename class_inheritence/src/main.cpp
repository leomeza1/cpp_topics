#include "table_tennis_player.h"
#include "rated_player.h"
#include <iostream>


int main(int argc, char **argv)
{
    using std::cout;
    using std::endl;
    
    cout << "*************************************" << endl;
    cout << "class_inheritence" << endl;
    cout << "*************************************" << endl << endl;

    TableTennisPlayer player1("Chuck", "Blizzard", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);

    rplayer1.Name();
    if(rplayer1.HasTable())
        cout <<  ": has a table.\n";
    else
        cout << ": doesn't have a table.\n";

    player1.Name();
    if(player1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": doesn't have a table.\n";

    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;

    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;

    return EXIT_SUCCESS;
}
