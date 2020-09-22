#include <iostream>

using namespace std;

int main()
{
  char symbol;
  int repeats;
  
  while( repeats > 0 )
  {
    cout<<"Symbol:\n";
    cin>>symbol;
    cout<<"Repeats:\n";
    cin>>repeats;
  }
  
  for(int counter1 = 0; counter1 < repeats; counter1++ )
  {
    for(int counter2 = 0; counter2 < repeats; counter2++ )
    {
      cout<<symbol;
    }
    cout<<endl; 
  }
  
  return 0;
}
