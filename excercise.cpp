#include <iostream>

using namespace std;

int main()
{
    int kilometresRun [10];
    int maxKilometres;
    int maxPerson;
    int minKilometres;
    int minPerson;
    float avg = 0.0;
    int total = 0;

    cout << "How many kilometres did each person run? \n";

    //Loop through the kilometres run
    for (int a=0; a<10; a++)
    {
        cout << "Person" << a+1 << ": ";
        cin >> kilometresRun[a];
    } 
    maxKilometres = kilometresRun[0];

    for (int b=0; b<10; b++)
    {
        if (maxKilometres<kilometresRun[b])
        {
            maxKilometres= kilometresRun[b];
            maxPerson = b+1;
        }
        if (minKilometres>kilometresRun[b])
        {
            minKilometres = kilometresRun [b];
            minPerson = b+1;
        }
    }

    cout << "Person number " << maxPerson << " ran the most: " << maxKilometres << endl;
    cout << "Person number " << minPerson << " ran the least: " << minKilometres << endl;

    for (int a=0; a<10; a++)
    {
        total += kilometresRun[a];
        cout << kilometresRun[a] << ", ";
    }
    avg = float(total) / 10.0;
    
    return 0;
}