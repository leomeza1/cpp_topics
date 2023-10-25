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

    /*
     * Instantiate an object of the base class (TableTennisPlayer)
     */
    TableTennisPlayer tennis_player("Chuck", "Blizzard", false);
    cout << "Name: " << tennis_player.Name() << " is a " << tennis_player.PlayerType() << endl;
    cout << "Has Table: " << std::boolalpha << tennis_player.HasTable() << endl << endl;

    /*
     * Instantiate an object of the derived class (RatedPlayer)
     */
    RatedPlayer rated_player(1140, "Mallory", "Duck", true);
    cout << "Name: " << rated_player.Name() << " is a " << rated_player.PlayerType() << endl;
    cout << "Rating: " << rated_player.Rating() << endl;
    cout << "Has Table: " << std::boolalpha << rated_player.HasTable() << endl << endl;

    /*
     * Instantiate an object of the derived class (RatedPlayer) using the copy constructor
     */
    RatedPlayer another_rated_player(1212, tennis_player);
    cout << "Name: " << another_rated_player.Name() << " is a " << another_rated_player.PlayerType() << endl;
    cout << "Rating: " << another_rated_player.Rating() << endl;
    cout << "Has Table: " << std::boolalpha << another_rated_player.HasTable() << endl << endl;

    return EXIT_SUCCESS;
}
