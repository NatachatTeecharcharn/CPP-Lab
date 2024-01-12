/*
ID: 66011078
Name: Natachat Teecharcharn
Lab No: 5
Question No: 2
Date: 12th January 2024
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<int> numList;
    int num;
    int choice;

    while (true)
    {
        cout << "Enter number (ends with negative number): ";
        cin >> num;
        if (num < 0)
            break;
        numList.push_back(num);
    }

    if (numList.size() == 0)
        cout << "You did not enter any number" << endl;
    else
    {
        while (true)
        {
            cout << "1.Max\n2.Min\n3.Sum\n0.Exit" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 1)
            {
                int max = *max_element(numList.begin(), numList.end());
                cout << "The maximum number in the list is " << max << endl;
            }
            else if (choice == 2)
            {
                int min = *min_element(numList.begin(), numList.end());
                cout << "The minimum number in the list is " << min << endl;
            }
            else if (choice == 3)
            {
                int sum = accumulate(numList.begin(), numList.end(), 0);
                cout << "The summation of numbers in the list is " << sum << endl;
            }
            else
                break;
        }
    }

    cout << "Goodbye";
    return 0;
}
