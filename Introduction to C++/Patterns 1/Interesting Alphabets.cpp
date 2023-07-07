#include <iostream>
using namespace std;

int main()
{

  /*  Read input as specified in the question.
   * Print output as specified in the question.
   */

  int N;
  cin >> N;

  char ch = 'A' + N;
  for (int i = 1; i <= N; i++)
  {
    char ch1 = ch - i;
    for (int j = 1; j <= i; j++)
    {

      cout << ch1;
      ch1 = ch1 + 1;
    }
    cout << endl;
  }
}
