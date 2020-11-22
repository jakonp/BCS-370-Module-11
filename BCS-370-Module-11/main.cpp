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

/*
 Algorithm
 1. The base case is there so that if the vector has a single element that single element is returned.
 2. The function creates an array of the current array without the last element.
 3. The funtion finds the max between the last element of the previous call and the last element of the current call.
 3. The maximum number is returned.
 
 
 Time complexity: O(n)
 Space complecity: O(n)
 */
