#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if( 'S' == rank )
    cout << "You have received Super Ultra Rare Unit!!!" << "\n" <<"You have received 5 gems." << "\n" << "You have received 1 gems."<< "\n"<<"You have received 2000 coins."<< "\n" <<"You have received very KAK items."<<"\n";
    else if ( 'A' == rank )
    cout << "You have received 5 gems." << "\n" << "You have received 1 gems."<< "\n"<<"You have received 2000 coins."<< "\n" <<"You have received very KAK items."<<"\n";
    else if ( 'B' == rank )
    cout << "You have received 1 gems." << "\n"<<"You have received 2000 coins."<< "\n" <<"You have received very KAK items."<<"\n";
    else if ( 'C' == rank )
    cout << "You have received 2000 coins." << "\n" <<"You have received very KAK items."<<"\n";
    else if ( 'D' == rank )
    cout << "You have received very KAK items.\n";

  return 0;
}
