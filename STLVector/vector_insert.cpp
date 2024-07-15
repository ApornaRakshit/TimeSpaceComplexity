#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v= {1,2,3,4,5};
    vector<int> v1={100,200,300};
    v.insert(v.begin()+2,v1.begin(),v1.end());
    for(int x:v)
    {
        cout << x << " ";
    }
    return 0;
}