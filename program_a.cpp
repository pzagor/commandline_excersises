#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    // a. wypisze wszystkie otrzymane argumenty w ososbnych liniach
    /// YOUR CODE HERE ///

	for (int i = 0; i < argc; i++)
		cout << argv[i] << endl;
	int c;
	cin >> c;

    /// YOUR CODE HERE ///
    return 0;
}

