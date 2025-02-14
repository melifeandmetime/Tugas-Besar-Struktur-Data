#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;2

void loading(){
    int a,j;
    for(a=1;a<=100;a++){
    cout<<"loading "<<a<<"%";
    cout<<"\n";
        for(j=0;j<a;j++)
        {
            cout<<">";
        }
        system("cls");
    }
}

void loginUser(int i){
    string username;
    int password;
    string user = "kelompok5";
    const int pass = 12345;
    int login = 0;
    i = 1;
    do{
        cout<<"----------------------------------"<<endl;
        cout<<"| Silahkan Login Terlebih Dahulu |"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"Username : ";cin>>username;
        cout<<"Password : ";cin>>password;
        if(username == user && password == pass){
            cout<<"\n------------------------\n\n";
            cout<<"| Anda Berhasil Login    |"<<endl;
            cout<<"--------------------------\n\n";
            i = 4;
            login = 1;
        }else{
            cout<<"\n---------------------\n";
            cout<<"|    Gagal Login      |"<<endl;
            cout<<"----------------------\n\n";
            i = i + 1;
        }
    }while (i <= 3 );
    if(login != 1){
        cout<<" Anda Kami Blokir "<<endl;
    }
    system("pause");
}

//node untuk linked list
struct antrian{
    int nomorAntrian;
    string nama;
    antrian *next;
};
antrian *head;
antrian *newNode;
antrian *temporaryNode;
antrian *currentnode;
antrian *tail;

// prototipe fungsi
void antrianbaru(int);
void enqueue(antrian *);
void dequeue();
void cetakAntrian();
bool isEmpty();
void clear();
/*
 * Main Function
 */
int main(){
    int i;
    head = tail = NULL;
    char pilihan;
    bool ongoing = true;
    int nomorAntrian = 1;

    loading();
    loginUser(i);
    system("cls");

    while(ongoing){
        cout << endl;
        cout << "=================================" << endl;
        cout << " Program Antrian Sembako COVID-19  " << endl;
        cout << "=================================" << endl;
        cout << "|1. Tambah Antrian Baru (enqueue)|" << endl;
        cout << "|2. Panggil Antrian (dequeue)    |" << endl;
        cout << "|3. Tampilkan Antrian            |" << endl;
        cout << "|4. Hapus & reset Antrian        |" << endl;
        cout << "|5. KELUAR                       |" << endl;
        cout << "=================================" << endl;
        cout << "Pilihan [1-5]: ";
        cin >> pilihan;
        switch (pilihan){
            case '1':
                antrianbaru(nomorAntrian);
                nomorAntrian++;
                system("pause");
                system("cls");
                break;
            case '2':
                dequeue();
                system("pause");
                system("cls");
                break;
            case '3':
                cetakAntrian();
                system("pause");
                system("cls");
                break;
            case '4':
                clear();
                nomorAntrian = 1;
                break;
            case '5':
                cout << "Program selesai." << endl;
                ongoing = false;
                break;
            default:
                cout << "Input Salah." << endl;
                break;
        }
    } // akhir looping
     return 0;
} // akhir int main

// fungsi untuk membuat sebuah node baru
void antrianbaru(int nomorAntrian){
    string inputNama;
    cout << "masukkan nama : ";
    cin>>inputNama;
    newNode = new antrian();
    newNode->nomorAntrian = nomorAntrian;
    newNode->nama = inputNama;
    newNode->next = NULL;
    // untuk menambahkan node baru ke bagian akhir linked list
    enqueue(newNode);
}

// kondisi saat antrian kosong
bool isEmpty(){
    if(head == NULL){
        return true;
    } else {
        return false;
    }
}

// untuk menambah data antrian
void enqueue(antrian *newNode){
    if(isEmpty()){
        // jika linked list kosong, node baru akan menjadi node head dan tail
        head = tail = newNode;
    }else{
        // jika tidak, node baru akan menjadi node tail
        tail->next = newNode;
        tail = newNode;
    }
    cout<<"-------------------------------------------------"<<endl;
    cout<<"|            NO. ANTRIAN                        | "<<endl;
    cout<<"|\t       "<<newNode->nomorAntrian<<"        \t\t\t|"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"|             Atas Nama                         | "<<endl;
    cout<<"|\t       "<<newNode->nama<<"                \t\t|"<<endl;
     cout<<"------------------------------------------------"<<endl;
    cout<<"|   Dimohon Untuk Mengantri Terlebih Dahulu   \t| "<<endl;
     cout<<"------------------------------------------------"<<endl;
   // cout << "Nomor antrian 0" << newNode->nomorAntrian;
   // cout << " atas nama " << newNode->nama << " berhasil ditambahkan." << endl;
}

// untuk memanggil antrian
void dequeue(){
    if(isEmpty()){
        cout << "Antrian Kosong." << endl;
    }else{
        currentnode = head;
         cout<<"-------------------------------------------------"<<endl;
        cout<<"|            NO. ANTRIAN                        | "<<endl;
        cout<<"|\t       "<<currentnode->nomorAntrian<<"        \t\t\t|"<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"|             Atas Nama                         | "<<endl;
        cout<<"|\t       "<<currentnode->nama<<"                \t\t|"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"|          Untuk Mengambil Sembako             \t| "<<endl;
        cout<<"------------------------------------------------"<<endl;
        //cout << "Nomor antrian 0" << currentnode->nomorAntrian;
        //cout << " atas nama " << currentnode->nama << " untuk mengambil sembako." << endl;
        head = head->next;
    }
}

// untuk menampilkan antrian
void cetakAntrian(){
    cout << "=================" << endl;
    cout << "     Antrian     " << endl;
    cout << "=================" << endl;
    if(isEmpty()){
        cout << "Antrian Kosong." << endl;
    }else{
        currentnode = head;
        cout << "NO  Nama" << endl;
        while(currentnode != NULL){
            cout << currentnode->nomorAntrian << ".  " << currentnode->nama << endl;
            currentnode = currentnode->next;
        }
        cout << "=================" << endl;
    }
}

// untuk menghapus antrian
void clear(){
    currentnode = head;
    while(currentnode != NULL){
        temporaryNode = currentnode;
        temporaryNode->next = NULL;
        currentnode = currentnode->next;
    }
    head = NULL;
    temporaryNode == NULL;
    cout << "Antrian telah dihapus dan di-reset ke semula." << endl;
}
