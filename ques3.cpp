// //Find the   dupliccate number in array :
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 2 1 2 2 5 1 8 8      output : 2 1 2 8
    int n;
    cin >> n;
    cout << "Enter element :";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> duplicates;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicates.push_back(arr[i]);
                break; // Break to avoid adding the same duplicate multiple times
            }
        }
    }

    if (duplicates.size() == 0) 
    {
        cout << "No duplicate ";
    }
    else
    {
        cout << "Duplicates found: ";
        for (int i = 0; i < duplicates.size(); i++)
        {
            cout << duplicates[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
