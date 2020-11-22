//
//  main.cpp
//  BCS-370-Module-11
//
//  Created by Nick Jakobczyk on 11/22/20.
//

#include <iostream>
#include <vector>

using namespace std;

int findMaxVector(vector<int> v)
{
    if(v.size()==1)
    {
        return v[0];
    }
    vector<int> tmp = v;
    tmp.erase(tmp.end()-1);
    return max(v[v.size()-1], findMaxVector(tmp));
}

int main() {
   
    vector<int> myVector = {5, 9, -45, 82, 17, 24 ,-2};
    cout << findMaxVector(myVector) << endl;
}
