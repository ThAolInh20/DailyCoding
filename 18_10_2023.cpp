#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//Given an integer n and a list of integers l, write a function that
// randomly generates a number
// from 0 to n-1 that isn't in l (uniform).
int random(int i, int j){
	srand(time(NULL));
	return (rand()%(j-i+1))+i;
}

bool compare(int a, int *l,int k){
	bool right=false;
	int i=0;
	while(i<k){
		if(a==l[i]) return true;
		i++;	
	}
	return right;
}
int random_vip(int n, int *l, int h){
	int k=n/2;
	do{
		k=random(0,n);
		
	}();
	return k;
}
int main() {
	int n=100;
	int *l=new int[100];
	int nene=random(0,10);
	for(int i=0;i<nene;i++){
		l[i]=random(0,100);
	}
for(int i=0;i<nene;i++){
		cout<<l[i];
	}
	l[4]=10;
	int hha=random(0,100);
	if(compare(hha,l,random(0,100))==true){
		cout<<"co xuat hien!"<<hha;
	}
	else{
		cout<<"deo xh";
	}
}
