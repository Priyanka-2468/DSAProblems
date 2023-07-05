// C++ program to solve chocolate distribution
// problem
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class Solution {
  public:
    // arr[0..n-1] represents sizes of packets
    // m is number of students.
    // Returns minimum difference between maximum
    // and minimum values of distribution.
    int findMinDiff(int ind, vector < int > & arr, int n,  int m) {
      sort(arr.begin(),arr.end());
      int s,e;
      s=0;
      e=m-1;
      int diff=0;
      while(e<=n-1)
      {
        int temp=arr[e]-arr[s];
        diff=min(diff,temp);
        s++;
        e++;
      }
      return diff;

    }
 
};


