#include <iostream>
using namespace std;

class Lift
{
private:
    int currentFloor;
    int maxFloor;

public:
    // Constructor
    Lift()
    {
        currentFloor = 1;
        maxFloor = 12; // Maximum floors in the building
    }

    // Display current floor
    void showFloor()
    {
        cout << "\nCurrent Floor : " << currentFloor << endl;
    }

    // Call the lift
    void callLift(int requestFloor)
    {
        if (requestFloor < 1 || requestFloor > maxFloor)
        {
            cout << "\nInvalid Floor! Please enter a floor between 1 and "
                 << maxFloor << ".\n";
            return;
        }

        if (requestFloor == currentFloor)
        {
            cout << "\nLift is already at Floor " << currentFloor << endl;
            cout << "Door Opening...\n";
            cout << "Please enter the lift.\n";
            cout << "Door Closing...\n";
            return;
        }

        if (requestFloor > currentFloor)
        {
            cout << "\nLift Moving UP...\n";

            while (currentFloor < requestFloor)
            {
                currentFloor++;
                cout << "Floor : " << currentFloor << endl;
            }
        }
        else
        {
            cout << "\nLift Moving DOWN...\n";

            while (currentFloor > requestFloor)
            {
                currentFloor--;
                cout << "Floor : " << currentFloor << endl;
            }
        }

        cout << "\nLift Arrived at Floor " << currentFloor << endl;
        cout << "Door Opening...\n";
        cout << "Please enter the lift.\n";
        cout << "Door Closing...\n";
    }
};

int main()
{
    Lift L;
    int floor;
    char again;

    cout << "=====================================\n";
    cout << "      WELCOME TO THE LIFT SYSTEM\n";
    cout << "=====================================\n";

    do
    {
        L.showFloor();

        cout << "\nEnter Destination Floor (1-12): ";
        cin >> floor;

        L.callLift(floor);

        cout << "\nDo you want to go to another floor? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\n=====================================\n";
    cout << " Thank You for Using the Lift System!\n";
    cout << "        Visit Again.\n";
    cout << "=====================================\n";

    return 0;
}