/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
#include <iostream>
using namespace std;

int main(){
    int age;
    int height;
    int property;
    cout << "Enter your age: ";
    cin >> age;
    if ( 20 >= age )
    {
        cout << "Enter your height: ";
        cin >> height;
        if ( 160 > height )
        {
            cout << "Your status = UNFRIEND";
        }else
        {
            if ( 175 > height )
            {
                cout << "Your status = FRIEND";
            }else
            {
                cout << "Enter your property: ";
                cin >> property;
                if ( 69e7 < property )
                {
                    cout << "Your status = MARRIED";
                }else
                {
                    cout << "Your status = ONE-NIGHT-STAND";
                }
            }   
        }
    }else
    {
        if ( 30 >= age )
        {
            cout << "Enter your property: ";
            cin >> property;
            if ( 10e7 < property )
                {
                    cout << "Your status = BEST FRIEND";
                }else
                {
                    cout << "Your status = UNFRIEND";
                }
        }else
        {
            cout << "Your status = UNFRIEND";
        }
    }
    return 0;
}

