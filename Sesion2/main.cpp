#include <iostream>

using std::cout;
using std::endl;
/*
using namespace std;
*/

int a;
float b;

int main()
{
  cout << "Hola Mundo" << endl;

  if (a > b)
  {
    cout << "a mayor que b" << endl;
  }
  else
  {
    cout << "B mayor que a" << endl;
  }
  
  //for i in range(5,16,2)
  for(int i = 5 ; i < 16 ; i += 2)
  {
    cout << i << endl;
  }

  int i = 0;
  while(1)
  {
    a++;
    cout << i<< endl;
    i++;
    if(i==15)
    {
      break;
    }
    
  }

  return 0;
}