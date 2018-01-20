#include <iostream>
#include <cstdio>
using namespace std;

char choic[3];

int main()
{
  double w,t,l,result = 1;
  int cnt = 0;
  for(int i= 0; i < 3; i++)
  {
    double max = 0;
    cin >> w;
    if(w > max)
    {
      max = w;
      choic[i] = 'W';
      cnt++;
    }
    cin >> t;
    if(t > max)
    {
      max = t;
      choic[i] = 'T';
    }
    cin >> l;
    if(l > max)
    {
      max = l;
      choic[i] = 'L';
    }
    result *= max;
  }
  if(cnt % 2)
    result *= 0.65;
  result  = (result - 1) * 2;
  for(int i = 0; i < 3; i++)
    cout << choic[i] << ' ';
  printf("%.2f",result);
  return 0;
}
