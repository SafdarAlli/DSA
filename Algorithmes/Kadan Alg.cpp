#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int maxSubArray(int arr[], int size) {
  int maxNum = INT_MIN;
  int currentSum = 0;
  for (int i = 0; i < size; i++) {
        currentSum += arr[i];
        maxNum = max(currentSum, maxNum);
      if(currentSum < 0)
      {
        currentSum = 0;
      }
  }
  return maxNum;
}
int main() {
  int array[] = {-10, -9, -4, -1, -2};
  int max = maxSubArray(array, 5);
  cout << max;
}


/*
  This algorith is used here for find the maximum of subarray. if we do this with simple we have the time complexity of
  big O of 3. by the use of this algorith we have linear time  complexity.
  Time complexity = (o)n
*/
