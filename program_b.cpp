#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    b. w tej samej kolejnosci
    /// YOUR CODE HERE ///

string nazwa_pliku = argv[1];


string line;
  ifstream infile (nazwa_pliku.c_str());
  if (infile.is_open())
  {
    while ( getline (infile,line) )
    {
      cout << line << '\n';
    }
    infile.close();
  } else {
    cout << "Unable to open infile"; 
  } 
  int c;
	cin >> c;


    /// YOUR CODE HERE ///
    return 0;
}

