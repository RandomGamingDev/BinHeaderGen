#include <iostream>
#include <fstream>
#include <vector>

#define return_err(str) {\
	std::cout << str;\
	return 0;\
}
const char* headName = "header.h";

int main(int argc, const char* argv[]) {
	if (argc < 2)
		return_err("You didn't enter a filepath for the file that you want to convert into a header\n");

	std::string fileName = argv[1];
	std::ifstream file(fileName, std::ios::binary);

	if (!file)
		return_err("Unable to access \"" << fileName << "\"\n");

	std::cout << "Loading file into memory...\n";

	// Copy the data into a buffer
	std::vector<char> buffer(std::istreambuf_iterator<char>(file), {});
	buffer.push_back('\0');
	file.close();

	if (buffer.size() == 0)
		return_err("The file's empty\n");
	std::cout << buffer.size() << " bytes of data successfully loaded!\n";

	std::cout << "Loading buffer into header file...\n";

	// Store all of the data into a header with an unsigned char* pointing to the binary data
	std::string headCon = "#ifndef BIN_HEADER\n#define BIN_HEADER\nchar* binary = \"";
	headCon.append(buffer.data());
	headCon.append("\";\n#endif");

	std::ofstream header(headName);
	header << headCon;
	header.close();

	std::cout << "Loaded buffer into header file at " << headName << '\n';

	return 1;
}