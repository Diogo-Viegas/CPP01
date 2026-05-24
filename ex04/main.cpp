#include <iostream>
#include <fstream>
int main(int argc, char **argv)
{


	if(argc != 4)
		std::cout << "4 arguments expected" << std::endl;

	std::string filename = argv[1];
	std::string find = argv[2];
	std::string replace = argv[3];
	std::ifstream infile ("test.txt");
	if(!infile.is_open())
	{
		std::cerr << "Failed to open infile" << std::endl;
		return (1);
	}
	std::ofstream outfile("test.txt.replace");
	if(!outfile.is_open())
	{
		std::cerr << "Error writing to outfile" << std::endl;
		infile.close();
		return (1);
	}
	std::string line;
	while(std::getline(infile,line))
	{
		std::cout << line << std::endl;
	}
}
