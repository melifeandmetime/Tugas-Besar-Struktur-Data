#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int login(int i, char ch){
    cout<<"====================="<<endl;
    cout<<" LOGIN DULU MASSZEH  "<<endl;
    cout<<"====================="<<endl;
    for(int i=1; i<=3; i++){
        string user ="";
        string pass ="";
        cout<<"username : ";cin>>user;
        cout<<"password : ";
            ch =_getch();
            while(ch!=13){
                pass.push_back(ch);
                cout<<'*';
                ch =_getch();
            }
    if(user=="aldi"&&pass=="54321"){
        cout<<"\n\nAnda Berhasil Login\n"<<endl;
        system("pause");
        system("cls");
        return 0;
    }else{
        cout<<"\n\nMaaf kami tidak mengenal username & password anda.\n\n";
        system("pause");
        system("cls");
    }
    }

    while(i<=3);
    cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
    cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
    cout << "Silahkan hubungi kami melalui e-mail support@email.com, Terima Kasih..";
    ;
}

struct dataDiri{
    string nama;
    string ttl;
    string alamat;
};


int main (){

   int i;
   char ch;

   login(i, ch);


   cout<<"ANTRIAN SEMBAKO COVID-19"<<endl;
   dataDiri dadir;
   cout<<"Nama : "; //tidak terdeteksi pas di running
   getline(cin, dadir.nama);
   cout<<"TTL : ";
   getline(cin, dadir.ttl);
   cout<<"Alamat : ";
   getline(cin, dadir.alamat);
   system("cls");
   cout<<"\n\n Nama   : \n\n"<<dadir.nama<<endl;
   cout<<"\n\n TTL    : \n\n"<<dadir.ttl<<endl;
   cout<<"\n\n Alamat : \n\n"<<dadir.alamat<<endl;

    return 0;
}
