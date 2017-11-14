#ifndef DBENTRY_H
#define DBENTRY_H
	
#include <iostream>

using namespace std;

class DBentry{
private:
 	string name;         
 	unsigned int IPaddress;         
 	bool active; 
public:
	//condestruct
	DBentry(string name_, unsigned int IP, bool active_);
	~DBentry();

	//getfunction
	string getName();
	unsigned int getIP();
	bool getActive();

	//setfunction
	void setName(string name_);
	void setIP(unsigned int newIP);
	void setActive(bool active_);

	//others
	void print();
	
};

#endif