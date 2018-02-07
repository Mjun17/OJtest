#include <iostream>
#include <cstdio>
using namespace std;

float result[1001];

int main()
{
  int turns = 2;
  while(turns--)
  {
    int k;
    cin >> k;
    while(k--)
    {
      int index;
      float value;
      cin >> index >> value;
      result[index] += value;
    }
  }

  int cnt = 0;
  for(int i = 0; i <= 1001; i++)
    if(result[i] != 0.0)
      cnt++;
  cout << cnt;
  for(int i = 1001; i>=0 && cnt; i--)
    if(result[i] != 0.0)
    {
      printf(" %d %.1f",i,result[i]);
      cnt--;
    }
  return 0;
}
