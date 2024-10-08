// <aside>
// 💡 **Question 5**

// The **product sum** of two equal-length arrays a and b is equal to the sum of a[i] * b[i] for all 0 <= i < a.length (**0-indexed**).

// - For example, if a = [1,2,3,4] and b = [5,2,3,1], the **product sum** would be 1*5 + 2*2 + 3*3 + 4*1 = 22.

// Given two arrays nums1 and nums2 of length n, return *the **minimum product sum** if you are allowed to **rearrange** the **order** of the elements in* nums1.

// **Example 1:**

// **Input:** nums1 = [5,3,4,2], nums2 = [4,2,2,5]

// **Output:** 40

// **Explanation:**

// We can rearrange nums1 to become [3,5,4,2]. The product sum of [3,5,4,2] and [4,2,2,5] is 3*4 + 5*2 + 4*2 + 2*5 = 40.

// </aside>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter no of elements in array 1"<<endl;
    int n;
    cin>>n;
    cout<<"enter elements of array 1"<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"the number of element in array 2 is same as array 1"<<endl;
    vector<int>v1(n);;
    cout<<"enter your elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    sort(v.begin(),v.end());
    sort(v1.begin(), v1.end(), greater<int>());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(v[i]*v1[i]);
    }
    cout<<sum;

}
