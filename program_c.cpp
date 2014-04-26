#include <iostream>
#include <string>
#include <fstream>
#include <vector>


using namespace std;

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    c. w odwrotnej kolejnosci
    /// YOUR CODE HERE ///
//bool foo(int i, int j) {return (i<j);)}
//bool foo(int i, int j) {return (i%10)}


vector<int> v;

if (argc > 1)
  {
  	ifstream input;
    input.open(argv[1]);
    while (input.good())
    {	
      int num;
	  input >> num;
	  v.push_back(num);
    }
    input.close();
  }  

for (std::vector<int>::iterator it  = v.begin(); it != v.end(); ++it)
		{
		cout << *it << endl; 
}
//for (i= v.size(); i = 0); i--)
//  	{
//  		cout << v[i];
//  	}
  
  int c;
	cin >> c;

//sort(vec.begin(), vec.end(), foo);



    /// YOUR CODE HERE ///
    return 0;
}

