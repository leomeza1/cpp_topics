#include <iostream>

int main(int argc, char **argv) {

    using namespace std;

    int var = 100;
    int & var_ref = var;  // 'var_ref' is a reference variable (refers to the 'var' variable)

    cout << "var     = " << var << endl;
    cout << "var_ref = " << var_ref << endl;

    cout << "Incrementing var_ref by 1 using var_ref++" << endl;
    var_ref++;

    cout << "Notice that var was incremented as a result of the var_ref++ operation." << endl;
    cout << "var     = " << var << endl;
    cout << "var_ref = " << var_ref << endl;

    cout << "Notice that the addresses of var and var_ref are the same." << endl;
    cout << "address of var     = " << &var << endl;
    cout << "address of var_ref = " << &var_ref << endl;

    return EXIT_SUCCESS;
}