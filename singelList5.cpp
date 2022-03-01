#include <iostream>
using namespace std;

struct HP{
	string merek, tipe;
	int harga;
	
	HP *next;
	
};

HP *head, *tail, *cur, *newValue;


void createSingleLinkedList(string m, string t, int h){
	head = new HP();
	head->merek = m;
	head->tipe = t;
	head->harga = h;
	head->next = NULL;
	tail = head;
	
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

void printSingleLinkedList(){
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
	
	addFirst("REALME", "REALME Narzo 50A", 2299000 );
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("SAMSUNG", "SAMSUNG A12", 2199000, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
