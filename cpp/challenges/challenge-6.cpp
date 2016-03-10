#include <iostream>
#include <string>
#include <stdint.h>
#include "../util/MatasanoConverter.h"
#include "../util/MatasanoUtil.h"
#include "../util/StringTesting.h"
#include "../util/FileRead.h"
#include "../util/TestString.h"

#define MAXKEYSIZE 64

void HammingTest() {
	std::string input_1 = "this is a test";
	std::string input_2 = "wokka wokka!!!";
	
	int32_t test_ham = StringHammingDistance(input_1, input_2);
	
	std::cout << "Hamming distance between \"" << input_1 << "\" and \"" << input_2 << "\" = " << (signed) test_ham << std::endl;
}


int main() {
	std::vector<std::string> data_array = ReadFileContents("datafiles/4.txt"); // read in the strings
	std::vector<uint8_t> first_line = ByteVectorFromString(data_array[0], "b64");
	HammingTest();
	
	for (uint8_t i = 0; i <= MAXKEYSIZE; i++) {
		//for each possible key length
	}
	
	return 0;
}