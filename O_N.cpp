#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)   //O(N)
    {
        cout << i<<endl;
    }
    for(int i=0; i<n; i+=2)   //O(N)
    {
        cout << i<<endl;
    }
    return 0;
}