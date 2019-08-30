/*
	COMMANDLINE ARGUMENTS:
	1. example: ./a.out test.txt
	2. Outputs file fro test.txt

	IMPORTANT DATATYPES & FUNCTIONS:
	1. ifstream the_file ( argv[1] )
	2. .is_open()
	3. .get(x)

	Never give up, never surrender.
*/

#include "iostream"
#include "fstream"

using namespace std;

int main( int argc, char *argv[] ){

	if( argc != 2 ){ // 2 arguments are required - the program and the read file.

		cout << "usage: " << argv[0] << " <filename>\n";

	}
	else{

		ifstream the_file ( argv[1] ); // the_file = filename passed by argv[1]

		if( !the_file.is_open()){ 

			cout << "Could not open the file\n";

		}
		else{

			char x;

			while( the_file.get(x) ){
				cout << x;
			}// END WHILELOOP

		}// END INNER ELSE

	}// END ELSE
	return 0;
}// END MAIN