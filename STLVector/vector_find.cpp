#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,1,2,3,7};
    // auto it = find(v.begin(),v.end(),3);      // Not under vector, algorithm library wise.
    auto it = find(v.begin(),v.end(),100);    
    if(it==v.end()) cout<< "Not found";
    else cout<<"Found";
    return 0;
}