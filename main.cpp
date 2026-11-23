#include <SQLiteCpp/SQLiteCpp.h>
#include <iostream>

int main()
{
	std::cout<<"SQLiteCpp version"<<SQLITECPP_VERSION<<std::endl;
	std::cout<<"SQLite version"<<SQLite::getLibVersion()<<std::endl;

}
