#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;

    // Prompt user to enter an operator
     cout << "Enter operator (+, -, *, /): ";
     cin >> op;

    // Prompt user to enter two operands
     cout << "Enter two numbers: ";
     cin >> a >>b;

    // Perform the corresponding operation and display the result
    if(op=='+')
    {
         cout << a << " + " << b << " = " << a + b <<  endl;

    }
    else if(op=='-')
    {
        cout << a << " - " << b << " = " << a - b <<  endl;
    }
    else if(op=='*')
    {
          cout << a << " * " << b << " = " << a * b <<  endl;

    }
    else if(op=='/')
    {
        if(b==0)
        {
            cout << "Error! Division by zero." <<  endl;
        }
        else
        {
            cout << a << " / " << b << " = " << a / b <<  endl;
        }

    }
    else
    {
          cout << "Error! Invalid operator." <<  endl;
    }

    return 0;
}
