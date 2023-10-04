#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cout << "Enter Target : " << endl;
    cin >> x;
    vector<int> v;
    int n;
    cout << "Enter size : " << endl;
    cin >> n;
    cout << "Enter element : " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            for (int k = j + 1; k <= n - 1; k++)
            {
                if (v[i] + v[j] + v[k] == x)
                {
                    count++;
                }
            }
        }
    }
 
    cout<<count;
 
 return 0;
}
//2 3 4