#include <iostream>
#include <string>
using namespace std;

string nums[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

int main()
{
  string n;
  cin >> n;
  int sum = 0;
  int len = n.length();
  for (int i = 0; i < len; i++)
    sum += n[i] - '0';
  string s = to_string(sum);
  cout << nums[s[0]-'0'];
  len = s.length();
  for (int i = 1; i < len; i++)
    cout << " " << nums[s[i]-'0'];
  return 0;
}
