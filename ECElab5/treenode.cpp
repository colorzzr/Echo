#include <iostream>
#include "treenode.h"

using namespace std;

static int totalNode = 0;

//for guard
TreeNode::TreeNode(){
	left = NULL;
	right = NULL;
	parent = NULL;
	info = NULL;
	guard = -1;
	totalNode ++;
}

TreeNode::TreeNode(DBentry* info_){
	left = NULL;
	right = NULL;
	parent = NULL;
	guard = 1;
	info = info_;
	totalNode ++;
}

TreeNode::~TreeNode(){
	delete info;
}

//----------------------------------------get function-----------------------------------------------
TreeNode* TreeNode::getLeft(){
	return left;
}

TreeNode* TreeNode::getRight(){
	return right;
}

TreeNode* TreeNode::getParent(){
	return parent;
}

DBentry* TreeNode::getInfo(){
	return info;
}

int TreeNode::getGuard(){
	return guard;
}

//---------------------------------------------set function--------------------------------------------
void TreeNode::setLeft(TreeNode* left_){
	left = left_;
}

void TreeNode::setRight(TreeNode* right_){
	right = right_;
}

void TreeNode::setParent(TreeNode* parent_){
	parent = parent_;
}

//---------------------------------------------------others--------------------------------------------

void TreeNode::print(){
	//cout << "totalNode: " << totalNode << endl;
	//info->print();
}