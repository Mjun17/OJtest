#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int x)
{
  if(x == 1) return false;//input 1
  bool flag = true;
  int j = sqrt(x);
  for(int i = 2; i <= j; i++)
  {
    if(x % i == 0)
    {
      flag = false;
      break;
    }
  }
  return flag;
}

int Reverse(int n,int d)
{
  vector<int> v;
  while(n)
  {
    v.push_back(n % d);
    n /= d;
  }
  int result = 0;
  int base = 1;
  for(auto it = v.rbegin(); it != v.rend(); it++)
  {
    result += *it * base;
    base *= d;
  }
  return result;
}

int main()
{
  int n,d;
  bool flag = true;
  while(flag)
  {
    cin >> n ;
    if(n > 0)
    {
      cin >> d;
      if(isPrime(n))
      {
          int reverse = Reverse(n,d);
          if(isPrime(reverse))
            cout << "Yes" << endl;
          else
            cout << "No" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    else
      flag = false;
  }

  return 0;
}
