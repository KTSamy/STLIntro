#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

int main()
{
	std::map <std::string,int> MyMap;

	MyMap["Jon"]=120212442;
	MyMap["Office"]=123331452;
	MyMap["Land Line"]=243464343;

	std::cout <<MyMap["Jon"]<<'\n';
	std::cout <<MyMap["Land Line"]<<'\n';
	std::cout <<MyMap["Office"]<<'\n';
	MyMap["Jon"]=442;
	std::cout<<MyMap.size()<<'\n';
	std::cout<<MyMap["fred"]<<'\n';
	std::cout <<MyMap["Jon"]<<'\n';
	std::cout<<MyMap.size()<<'\n';

	return EXIT_SUCCESS;
}