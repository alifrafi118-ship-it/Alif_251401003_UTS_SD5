#include <iostream>
using namespace std;

struct node {
    int data;
    node* kiri;
    node* kanan;
};

node* akar = NULL;

node* addNode(node* akar, int value) {
    if (akar == NULL) {
        node* baru = new node;
        baru->data = value;
        baru->kiri = NULL;
        baru->kanan = NULL;
        return baru;
    } 
    
    if (value < akar->data) {
        akar->kiri = addNode(akar->kiri, value);
    } else if (value > akar->data) {
        akar->kanan = addNode(akar->kanan, value);
    }
    return akar;
}

void postOrder(node* akar) {
    if (akar != NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

int main() {
    int input;
    cout << "Masukkan satu angka (0 berhenti)\n";

    while (true) {
        cout << "Masukkan angka: ";
        cin >> input;
        
        if (input == 0) {
            break;
        }

        akar = addNode(akar, input);
    }

    cout << "Hasil traversal: \n";

    if (akar == NULL) {
        cout << "Tree kosong\n";
    } else {
        cout << "Post-Order: ";
        postOrder(akar);
        cout << "\n";

        cout << "Angka Terbesar :";
        cout << "\n";

        cout << "Root: " ;
        node* akar;
        cout << akar->data;
        cout << "\n";


    }

    return 0;
}