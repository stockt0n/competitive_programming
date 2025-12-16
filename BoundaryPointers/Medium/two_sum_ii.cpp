#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   vector<int> twoSum(vector<int> &numbers, int target)
   {

      // get the size of the array
      int size = numbers.size();

      // initalize left and right boundaries
      int left = 0;
      int right = size - 1;

      // make sure the boundaries don't cross each other
      while (left < right)
      {  
         int sum = numbers[left] + numbers[right];

         if (sum == target)
         {
            return {left + 1, right + 1};
         }
         else if (sum < target)
         {
            left++;
         }
         else
         {
            right--;
         }
      }
      return {};
   }
};