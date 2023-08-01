#include<iostream>
#include<vector>
//tìm sum max cua cac so ko lien nhau
using namespace std;
//timf max cuar vector
int max_1(int n,int *array){
	int max=array[0];
	for(int i=0;i<n;i++){
		if(max<array[i]){
			max=array[i];
		}
	}
	return max;
}
//tim vi tri max
int local_max(int n,int * array){
	int max=max_1(n, array);
	int j=0;
	while(array[j]!=max){
		j++;
	}
	return j;
}

void delete_1(int &n,int *&array, int vt){
	if (vt == n - 1) {
        n--;
        return;
    }
 	for(int i=vt;i<n-1;i++){
		array[i]=array[i+1];
	}
	n--;	
}
void delete_vung(int &n,int *&array, int vt){
	if(vt==0){
		delete_1(n,array, vt);
		delete_1(n,array, vt);
	}
 	else if(vt==n-1){
		delete_1(n,array, vt);
		delete_1(n,array, vt-1);
	}
	else{
		delete_1(n , array, vt);
		delete_1(n , array, vt-1);
		delete_1(n , array, vt-1);
	}
}
void copy_1(int n, int *array, int *&newarray){
	for(int i=0;i<n;i++){
		newarray[i]=array[i];
	}
}
int find1(int n, int *array){	
	int tong=0;
	while(n!=0){
		tong+=max_1(n,array);
		delete_vung(n,array,local_max(n,array));
	}
	return tong;
}
int main(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	int* array=new int[n];
	cout<<"nhap mang: "<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	
	cout<<"tong cac so lon ko lien nhau la: "<<find1(n,array);
}
