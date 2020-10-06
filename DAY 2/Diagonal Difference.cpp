#include <iostream>
using namespace std;
int main() 
{
  int N, LeftDiagonalSum = 0, RightDiagonal = 0;
  cin >> N;
  int a[N][N];
  for (int i = 0; i < N; i++) 
  {
    for (int j = 0; j < N; j++) 
    {
      cin >> a[i][j];
      if (i == j) 
   {
        LeftDiagonalSum = LeftDiagonalSum + a[i][j];
      }
    }
  }
  
  for (int i = 0; i < N; i++) 
  {
    for (int j = N - 1 - i; j >= 0;) 
    {
      RightDiagonal = RightDiagonal + a[i][j];
      break;
    }
  }
  cout << abs(LeftDiagonalSum - RightDiagonal) << endl;
  return 0;
}
