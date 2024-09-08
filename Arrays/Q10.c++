// Question 10
// Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor. 

// The doctor advised Alice to only eat n / 2 of the candies she has (n is always even).
//  Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice. 

// Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.

// Example 1:
// Input: candyType = [1,1,2,2,3,3]
// Output: 3

// Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    cout << "Enter the elements: ";
    vector<int> v(n);
    unordered_set<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ans.insert(v[i]);
    }
   int x=ans.size();
   int y=n/2;
    // Calculate the maximum number of different types of candies she can eat
    cout << "The maximum number of different types of candies she can eat is: " 
         << min(x,y) << endl;

    return 0;
}
