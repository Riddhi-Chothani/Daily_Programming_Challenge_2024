#include<iostream>
using namespace std;

int find(vector < int > & arr) 
{
  int n = arr.size();
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n - 1; i++) 
  {
    if (arr[i] == arr[i + 1])
    {
      return arr[i];
    }
  }
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,2};
  cout << "The duplicate element is " << find(arr) << endl;
}
