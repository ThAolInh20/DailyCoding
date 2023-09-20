#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
typedef struct {
	int start;
	int end;
}interver;

void nhap(interver &a){
	a.start=rand()%100+1;
	do{
		a.end=rand()%100+1;
	}while(a.end<a.start);
}
void show(interver a){
	cout<<"("<<a.start<<","<<a.end<<")";
}
void init (interver *a, int n){
	for(int i=0;i<n;i++){
		nhap(a[i]);
	}
}
void showlist(interver *a, int n){
	cout<<"(";
	for(int i=0;i<n;i++){
		show(a[i]);
		cout<<", ";
	}
	cout<<")";
}

int main(){
	srand(time(NULL));
	interver *a=new interver[10];
	init(a, 10);
	showlist(a,10);
}
