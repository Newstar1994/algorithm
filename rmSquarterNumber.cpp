#include <stdio.h>
#include <math.h>
#include <iostream>
/*
for i to n, remove the complete squarter number and sort the left number using
index for 1 to n - m; where m is the numbers of complete squarter number before;
loop the above opeater and find the laste one left number.
*/
using namespace std;
int find_x(int n)
{
  int pre = 1;
  while (true) {
    int tmp = sqrt((double)(pre));
    int next = pre + tmp;
    if (next == (tmp+1) * (tmp+1))
      next++;
    if (next> n)
      return pre;
    else
      pre = next;
  }
}

int main()
{
  int n;
  while (true)
  {
    cout << "Input n: ";
    cin >> n;
    int ans = find_x(n);
    cout << "Ouptut: " << ans << endl;
    cout << "--------------------" << endl;

  }
  return 0;
}
