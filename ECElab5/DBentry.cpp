#include <iostream>
#include "DBentry.h"

using namespace std;


DBentry::DBentry(string name_, unsigned int IP, bool active_){
	name = name_;
	IPaddress = IP;
	active = active_;
}

DBentry::~DBentry(){

}

//-------------------------------------get function----------------------------------------------------------

string DBentry::getName(){
	return name;
}

unsigned int DBentry::getIP(){
	return IPaddress;
}

bool DBentry::getActive(){
	return active;
}

//-------------------------------------set function---------------------------------------------------------
void DBentry::setName(string name_){
	name = name_;
}

void DBentry::setIP(unsigned int newIP){
	IPaddress = newIP;
}

void DBentry::setActive(bool active_){
	active = active_;
}

//---------------------------------------others-------------------------------------------------------------
void DBentry::print(){
	cout << "name is " << name << endl;
	cout << "IP: " << IPaddress << endl;
	cout << "state: " << active << endl;

}