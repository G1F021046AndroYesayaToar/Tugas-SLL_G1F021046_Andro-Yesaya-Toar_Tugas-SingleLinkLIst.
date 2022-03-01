#include <iostream>
using namespace std;

struct HP{
	string merek,tipe;
	int harga;
	
	HP *next;
	
	
};

HP *head, *tail, *cur, *newvalue;

void createSingleLinkedList(string m, string t, int h){
	head = new HP();
	head->merek = m;
	head->tipe = t;
	head->harga = h;
	head->next = NULL;
	tail = head;
	
}

void addFirst(string m, string t, int h){
	newvalue = new HP();
	newvalue->merek = m;
	newvalue->tipe = t;
	newvalue->harga = h;
	newvalue->next = head;
	head = newvalue;
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
	
	addFirst("VIVO", "Vivo Y20S", 2100000 );
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
