#include <iostream>
#include <sstream>

#include "DBentry.h"
#include "treenode.h"


using namespace std;

//printi tree recursively
void printBT(TreeNode* head){
	if(head == NULL) return;
	printBT(head->getLeft());
	head->print();
	printBT(head->getRight());
}


int main(int argc, char const *argv[]){
	TreeNode* list = NULL;
	//list->setLeft(new TreeNode);
	//list->getLeft()->setParent(list);

	while(cin.eof() != true){
		//get user input
		string line;
		getline(cin, line);
		stringstream input(line);

		//for command
		string cmd;
		input >> cmd;

		if(cin.eof() == true) break;
		else if(cmd == "insert"){
			//info for node
			string name;
			unsigned int IPaddress, active;         
 			string activee;

 			//load input
 			input >> name >> IPaddress >> activee;
 			//active -> 1 inactive -> 0
 			if(activee == "active") active = 1;
 			else active = 0;

 			//creat a new node
 			DBentry* newInfo = new DBentry(name, IPaddress, active);
 			//newInfo->print();
			//cout << "insert" << endl;
 			//nothing in node
 			TreeNode* temp = list;
 			if(list == NULL) list = new TreeNode(newInfo);
 			else{
 				while(1){
 					if(newInfo->getName() > temp->getInfo()->getName()){
 						TreeNode* newNode = new TreeNode(newInfo);
 						if(temp->getRight() == NULL) {
 							temp->setLeft(newNode);
 							temp->getLeft()->setParent(temp);
 						}
 						else temp = temp->getLeft();
 					}
 				}
 			}
 			
 			
 			printBT(list);
		}

		else{
			cout << "invalid command" << endl;
		}

	}
	return 0;
}