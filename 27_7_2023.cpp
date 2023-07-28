#include<iostream>
using namespace std;
struct Node{
	int value;
	Node*left;
	Node*right;
	Node(int data){
		value=data;
		left=nullptr;
		right=nullptr;
	}
};
Node* arrayToPTS(vector<int> nums, int start, int end){
	if(start>end){
		return nullptr;
	}
	int mid=(start+end)/2;
	Node* root=new Node(nums[mid]);
	root->left=arrayToPTS(nums, start, mid-1);
	root->right=arrayToPTS(nums, mid+1, end);
	return root;
}
void 
int dem(
