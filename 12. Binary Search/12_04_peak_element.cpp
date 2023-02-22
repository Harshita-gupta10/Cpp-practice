#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (nums[mid] < nums[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return nums[s];
}

int main()
{
    vector<int> vect;
  
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(1);
    // vect.push_back(5);
    // vect.push_back(6);
    // vect.push_back(4);
  
    cout<<"peak element is : "<< findPeakElement(vect)<< endl;
    return 0;
}
