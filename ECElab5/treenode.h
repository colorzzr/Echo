#ifndef TREENODE_H
#define TREENODE_H

#include "DBentry.h"

using namespace std;

class TreeNode{
private:
	TreeNode* left;
	TreeNode* right;
	TreeNode* parent;
	DBentry* info;
	//guard -> -1  node -> 1
	int guard;
	int totalNode;
public:
	//deconstructor
	TreeNode();
	TreeNode(DBentry* info_);
	~TreeNode();

	//getfucntion
	TreeNode* getLeft();
	TreeNode* getRight();
	TreeNode* getParent();
	DBentry* getInfo();
	int getGuard();

	//setfucntion
	void setLeft(TreeNode* left_);
	void setRight(TreeNode* right_);
	void setParent(TreeNode* parent_);
	//update here
	void setInfo(DBentry* info_);

	//others
	void print();
};

#endif