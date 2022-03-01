#include <iostream>
using namespace std;

struct HP{
	string merek,tipe;
	int harga;
	
	HP *next;
	
	
};

HP *head, *tail, *cur, *newValue,*del, *after;


void createSingleLinkedList(string m, string t, int h){
	head = new HP();
	head->merek = m;
	head->tipe = t;
	head->harga = h;
	head->next = NULL;
	tail = head;
	
}

int countSingleLinkedList(){
	cur = head;
	int NO = 0;
	while(cur != NULL){
		NO++;
		cur = cur->next;
	}
	return NO;
}

void addFirst(string m, string t, int h){
	newValue = new HP();
	newValue->merek = m;
	newValue->tipe = t;
	newValue->harga = h;
	newValue->next = head;
	head = newValue;
}

void addMiddle(string m, string t, int h, int posisi){
	newValue = new HP();
	newValue->merek = m;
	newValue->tipe = t;
	newValue->harga = h;
	
	cur = head;
	int NO = 1;
	while(NO < posisi - 1 ){
		cur = cur->next;
		NO++;
	}
	
	newValue->next = cur->next;
	cur->next = newValue;
}

void removeMiddle(int posisi){
	if ( posisi < 1 || posisi > countSingleLinkedList() ){
		cout << "Posisi Diluar jangkauan " << endl;
	}else if( posisi == 1 || posisi == countSingleLinkedList() ){
		cout << "Posisi bukan posisi tengah " << endl;
	} else {
	int NO = 1;
	cur = head;
	while (NO <= posisi){
		if (NO == posisi -1){
			after = cur;
		}
		if (NO == posisi){
			del = cur;
		}
		cur = cur->next;
		NO++;
	}
	after->next = cur;
	delete del;
	}
}

void printSingleLinkedList(){
	cout << "Nomor data berjumlah : " << countSingleLinkedList() << endl;
	cur = head;
	while(cur != NULL){
		cout << "Merek Smart Phone 	: "<< cur->merek <<endl;
		cout << "Tipe Smart Phone 	: "<< cur->tipe <<endl;
		cout << "Harga Smart Phone 	: "<< cur->harga <<endl;
		
		cur = cur->next;
	}
}

int main(){
	
	createSingleLinkedList("XIAOMI", "Redmi Note 9", 2499000);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addFirst("REALME", "REALME Narzo 50A", 2299000);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("SAMSUNG", "SAMSUNG A12", 2199000, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("OPPO", "OPPO A5", 2300000, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	removeMiddle(2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
