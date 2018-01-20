#include <iostream>
using namespace std;

int current_floor = 0;
int next_floor = 0;
int second = 0;
int up_or_down = 0;

int main()
{
  int n;
  cin >> n;
  second += n*5;
  while(n--)
  {
    cin >> next_floor;
    up_or_down = next_floor - current_floor;
    if(up_or_down > 0)
      second += up_or_down*6;
    else
      second += -up_or_down*4;
    current_floor = next_floor;
  }
  cout << second;
  return 0;
}
