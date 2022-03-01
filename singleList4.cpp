#include <iostream>
using namespace std;

struct HP{
	string merek, tipe;
	int harga;
	
	HP *next;
	
};

HP *head, *tail, *cur, *newValue, *del;


void createSingleLinkedList(string m, string t, int h){
	head = new HP();
	head->merek = m;
	head->tipe = t;
	head->harga = h;
	head->next = NULL;
	tail = head;
	
}

void addLast(string m, string t, int h){
	newValue = new HP();
	newValue->merek = m;
	newValue->tipe = t;
	newValue->harga = h;
	newValue->next = NULL;
	tail->next = newValue;
	tail=newValue;
}

void removeLast(){
	del = tail;
	cur = head;
	while(cur->next != tail){
		cur = cur->next;
	}
	tail= cur;
	tail->next =NULL;
	delete del;
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
	
	addLast("VIVO", "Vivo Y20S", 2100000  );
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	removeLast();
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
