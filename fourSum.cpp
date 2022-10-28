#include<bits/stdc++.h>
using namespace std;
 
void SORT_4SUM(int nums[], int n, int X)
{
    int l, r;
    
    //Using library function sort
    sort(nums, nums+n);
 
    
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i+1; j < n - 2; j++)
        {
            // Initialize two variables as indexes of the first and last elements in the remaining elements
            l = j + 1;
            r = n-1;
 
            
            while (l < r)
            {
                if( nums[i] + nums[j] + nums[l] + nums[r] == X)
                {
                    cout <<"["<< nums[i]<<", " << nums[j] <<
                        ", " << nums[l] << ", " << nums[r]<<"]"<<endl;
                    l++; r--;
                }
                else if (nums[i] + nums[j] + nums[l] + nums[r] < X)
                    l++;
                else // nums[i] + nums[j] + nums[l] + nums[r] > X
                    r--;
            } 
        } 
    } 
 

int main()
{
    int nums[] = {10, 2, 3, 4, 5, 9, 7, 8} ;
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 23;
    SORT_4SUM(nums, n, target);
    return 0;
}
