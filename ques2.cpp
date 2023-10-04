//Find the Factorial of large number : 
#include <iostream>
#include <vector>
using namespace std;
// int go(vector<int>& v,int val,int size){
//     int carry = 0;
//     for(int i = 0; i<size; i++){
//         int product =( v[i] * val) + carry; //ist time product = 2;
//         v[i] = product%10; // 
//         carry = product / 10;
//     }
//     while(carry){
//         v[size] = carry%10;
//         carry /= 10;
//         size++;
//     }
//     return size;
// }
// int main()
// {
//     int x;
//     cout << "Enter Target : " << endl;
//     cin >> x;
//     vector<int> v(500,0);
//     v[0] =1;
//     int size = 1;
//     for(int i =2; i<=x;i++){
//         size = go(v,i,size);
//     }
//     for(int i = size -1;i>= 0;i--){
//         cout<<v[i];
//     }
   void go(vector<int>& v,int val,int& size){
    int carry = 0;
    for(int i =0;i<size;i++){
        int factorial = (v[i] * val) + carry;
        v[i] = factorial%10; //  2 v[0] = 0; v[1] =2 v[2] =1;
        carry = factorial/10; // 2 2nd time 1
    }
    while(carry ){
        v[size] = carry%10;
        carry /= 10;
        size++;
    }
   }
   int main (){
   int x;
   cout<<"Enter number to calculate factorial : ";
   cin>>x;
   vector<int> v(500,0);
   v[0] = 1;
   int size =1;
 for(int i =2;i<=x;i++){
    go(v,i,size);
 }
for(int i =size-1;i>=0;i--){
    cout<<v[i];
}







 return 0;
}