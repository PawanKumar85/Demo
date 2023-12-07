#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

    
int random_number()
{
    return (rand() % 4) + 1;
}

int main()
{
    int computer;
    int apples = 21;
    int users;

    cout << "\n\t Welcome to Apple Game\n" ;
    cout << "Total apple : " << apples;

    while(apples >= 1)
    {
        cout << "\nEnter :";
        cin >> users;

        if(users >= 5)
            cout << "please pick in the range of (1 to 4)";
        else if(users <= 0)
            cout << "please pick in the range of (1 to 4)";
        else{
            apples = apples - users;
            cout << apples << endl;
        }

        computer = random_number();
        cout << "\n Computer : " << computer << endl;
        apples = apples - computer;
        cout << apples << endl;
    }


    return 0;
}
