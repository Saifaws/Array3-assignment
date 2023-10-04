#include <iostream>
#include <vector>
using namespace std;
int main()
{
   
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
    int j = 0;
    for (int i = 0; i <= n - 1; i++)
    {     
        if ( v[i] != 0 )
                {
                 swap(v[i],v[j]);
                 j++;   
                }    
    }
   cout<<"Output is : "<<endl;
   for(int i = 0; i<=n-1;i++){
    cout<<v[i]<<" ";
   }
 
 return 0;
}