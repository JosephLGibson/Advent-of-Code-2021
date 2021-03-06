#ifndef READ_INPUT_CPP
#define READ_INPUT_CPP

#include <fstream>
#include <string>
#include <vector>

#include "../general_functions.cpp"

void read_input(const std::string& filename, std::vector<std::vector<char>>& chunks) {
	std::ifstream input(filename);
	std::string in;
	while (std::getline(input, in)) {
		std::vector<char> chunk;
		str_to_vec_char(in, chunk);
		chunks.push_back(chunk);
	}
}

#endif