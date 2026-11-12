#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    int value;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void insertLast(int n, string name) {
    Node *newNode = new Node;
    newNode->name = name;
    newNode->value = n;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = head;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void barangMahal() {
    cout << "Barang Mewah\n";
}

void deleteFirst() {
    if (head == NULL) {
        cout << "gagal" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    if (head == NULL) tail = NULL;
    delete temp;
}



void menu() {
    cout << "\n Menu Linked List\n";
    cout << "1. Insert Last\n";
    cout << "2. Delete First\n";
    cout << "3. Delete Last\n";
    cout << "4. Tampilkan barang mewah\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}

