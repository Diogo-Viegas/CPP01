#include <iostream>
#include <fstream>
int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cerr << "4 arguments expected" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string find = argv[2];
	std::string replace = argv[3];
	if(filename.empty() || find.empty())
	{
		std::cerr << "Args can't be empty" << std::endl;
		return (1);
	}
	std::ifstream infile (filename.c_str());

	if(!infile.is_open())
	{
		std::cerr << "Failed to open infile" << std::endl;
		return (1);
	}
	std::ofstream outfile((filename + ".replace").c_str());
	if(!outfile.is_open())
	{
		std::cerr << "Error writing to outfile" << std::endl;
		infile.close();
		return (1);
	}
	std::string line;
	while(std::getline(infile,line))
	{
		std::string res = "";
		size_t pos = 0;
		size_t found = line.find(find,pos);
		while(found != std::string::npos)
		{
			res += line.substr(pos, found - pos);
			res += replace;
			pos = found + find.length();
			found = line.find(find,pos);
		}
		res += line.substr(pos);
		outfile << res << "\n";

	}
	infile.close();
	outfile.close();
	return (0);
}
