/*
ID: 66011078
Name: Natachat Teecharcharn
Lab No: 5
Question No: 3
Date: 12th January 2024
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<vector<int>> myMatrix{
        {50, 45, 8, 15, 3},
        {40, 32, 5, 9, 10},
        {30, 36, 78, 10, 99}
    };
    int choice;

    while (true)
    {
        cout << "1.Max\n2.Min\n3.Sum\n0.Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            for (int i = 0; i < myMatrix.size(); i++)
            {
                int max = *max_element(myMatrix[i].begin(), myMatrix[i].end());
                cout << "The maximum number in the list is " << max << endl;
            }
        }
        else if (choice == 2)
        {
            for (int i = 0; i < myMatrix.size(); i++)
            {
                int min = *min_element(myMatrix[i].begin(), myMatrix[i].end());
                cout << "The minimum number in the list is " << min << endl;
            }
        }
        else if (choice == 3)
        {
            for (int i = 0; i < myMatrix.size(); i++)
            {
                int sum = accumulate(myMatrix[i].begin(), myMatrix[i].end(), 0);
                cout << "The summation number in the list is " << sum << endl;
            }
        }
        else
            break;
    }

    cout << "Goodbye";
    return 0;
}
