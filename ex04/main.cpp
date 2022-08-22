#include <iostream>
#include <fstream>
#include <string>

void replaceInputBuffer(std::string& inputBuffer, const std::string& s1, const std::string& s2)
{
	size_t s1Size = s1.size();
	size_t pos_find = inputBuffer.find(s1);

	while (pos_find != std::string::npos)
	{
		inputBuffer.erase(pos_find, s1Size);
		inputBuffer.insert(pos_find, s2);
		pos_find = inputBuffer.find(s1);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error argc" << std::endl;
		return (1);
	}

	std::ifstream inStream;
	std::ofstream outStream;
	std::string inputBuffer;
	const std::string fileInput = argv[1];
	const std::string fileOutput = fileInput + ".replace";
	const std::string s1 = argv[2];
	const std::string s2 = argv[3];

	inStream.open(fileInput.c_str(), std::ofstream::in);
	if (!inStream.is_open())
	{
		std::cerr << "Error open fileInput" << std::endl;
		return (1);
	}

	outStream.open(fileOutput.c_str(), std::ofstream::trunc | std::ofstream::out);
	if (!outStream.is_open())
	{
		std::cerr << "Error open fileOutput" << std::endl;
		inStream.close();
		return (1);
	}

	while(std::getline(inStream, inputBuffer))
	{
		replaceInputBuffer(inputBuffer, s1, s2);
		std::cout << inputBuffer << std::endl;
		outStream << inputBuffer + "\n";
	}

	inStream.close();
	outStream.close();

	return 0;
}
