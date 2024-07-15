#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,2,4,3,5,1,2,4,5,3,2};
    replace(v.begin(), v.end()-1, 2,100);
    // replace(v.begin(), v.end(), 2,100);     // vector er kono function na, algorithm bairer function
    for(int x:v)
    {
        cout <<x<<" "; 
    }
    return 0;
}