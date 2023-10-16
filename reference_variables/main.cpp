#include <iostream>

void swap(int &a, int &b);

int main(int argc, char **argv) {

    using namespace std;
    
    cout << "*************************************" << endl;
    cout << "reference_variables" << endl;
    cout << "*************************************" << endl << endl;

    int var = 100;
    int & var_ref = var;

    // This is illegal. The reference must be initialied when declared.
    // int & illegal_ref;
    // illegal_ref = var;
    
    cout << "var_ref is a reference variable. It refers to the var variable." << endl;
    cout << "Note that a reference variable must be initialized when it is declared" << endl;
    cout << "and it cannot be changed to reference a different variable later." << endl << endl;

    cout << "var     = " << var << endl;
    cout << "var_ref = " << var_ref << endl << endl;

    cout << "Incrementing var_ref by 1 using var_ref++" << endl << endl;
    var_ref++;

    cout << "Notice that var was incremented as a result of the var_ref++ operation." << endl;
    cout << "var     = " << var << endl;
    cout << "var_ref = " << var_ref << endl << endl;

    cout << "Notice that the addresses of var and var_ref are the same." << endl;
    cout << "address of var     = " << &var << endl;
    cout << "address of var_ref = " << &var_ref << endl << endl;

    cout << "The reference cannot be re-assigned to reference another variable." << endl;
    cout << "Let's see what happens when we try to do that..." << endl << endl;

    int another_var = 200;
    var_ref = another_var;

    cout << "Notice that var and var_ref were set to 200 as a result of the" << endl;
    cout << "the assignment operation 'var_ref = another_var'" << endl;
    cout << "another_var = " << another_var << endl;
    cout << "var         = " << var << endl;
    cout << "var_ref     = " << var_ref << endl << endl;

    cout << "Notice that the addresses of var and var_ref are still the same," << endl;
    cout << "but the address of another_var is different." << endl;
    cout << "address of another_var = " << &another_var << endl;
    cout << "address of var         = " << &var << endl;
    cout << "address of var_ref     = " << &var_ref << endl << endl;

    cout << "Let's see what happens when we assign a reference variable to a" << endl;
    cout << "variable pointed to by a pointer..." << endl << endl;

    cout << "Here's a pointer, var_ptr, which points to a variable named var." << endl << endl;
    int *var_ptr = &var;

    cout << "Here's a reference variable, ref_ptr, which referes to *var_ptr." << endl;
    cout << "So, essentially ref_ptr refers to the variable named var." << endl << endl;
    int &ref_ptr = *var_ptr;

    cout << "Now, we change var_ptr to point to some other variable named another_var." << endl << endl;
    var_ptr = &another_var;
    another_var = 300;

    cout << "Finally, notice that *var_ptr and another_var were the only values that" << endl;
    cout << "changed to 300 when we assigned 300 to the variable named another_var." << endl << endl;
    cout << "*var_ptr    = " << *var_ptr << endl;
    cout << "another_var = " << another_var << endl;
    cout << "ref_ptr     = " << ref_ptr << endl;
    cout << "var         = " << var << endl;
    cout << "var_ref     = " << var_ref << endl << endl;

    cout << "Conlusion: the reference variable, ref_ptr, was initialized to refer to the" << endl;
    cout << "variable named var and continued to refer to that same variable even after" << endl;
    cout << "we changed the pointer we used when initializing the reference variable." << endl << endl;

    int i = 0;
    int j = 1;

    cout << "Here, we create two integer vaiables, i=0 and j=1." << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl << endl;

    cout << "Now, we call the swap function with the two integer variables." << endl << endl;
    swap(i, j);

    cout << "The swap function created references to the input variableds i and j," << endl;
    cout << "and used the references to swap the values of i and j." << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl << endl;

    return EXIT_SUCCESS;
}

void swap(int &a, int &b)
{
    int temp = a;

    a = b;
    b = temp;
}
