/*
	FILE IO:
	1. ofstream creates file
	2. ifstream opens file
*/

#include "iostream"
#include "fstream"

using namespace std;

int main(){

	char str[25];
	ofstream a_file("outfile.txt"); // create file

	a_file << "OUTFILE.TXT" << endl << "This is the outfile." << endl;
	a_file.close();

	ifstream b_file("outfile.txt"); // open file
	
	while( b_file ){ // loops until b_file has no more lines
		b_file >> str;
		cout << str << endl;
	}


	return 0;
}