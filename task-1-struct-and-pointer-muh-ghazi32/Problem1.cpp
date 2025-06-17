#include<iostream>
using namespace std;
struct msh
{
    char nama[20], nim[10], jurusan[2];
    int sks, program;
};
struct msh bayar[2];
int main()
{
    int bts,var,tetap;
    for(int i =0; i<2; i++)
    {
        cout<<"\n\n--------------------------------\n";
        cout<<"Nama Mahasiswa     = ";cin>>bayar[i].nama;
        cout<<"NIM                = ";cin>>bayar[i].nim;
        cout<<"Jurusan [TI, PTK]  = ";cin>>bayar[i].jurusan;
        input:
            cout<<"Program [1=D3, 2=S1] = ";
            cin>>bayar[i].program;
            if (bayar[i].program<1 || bayar[i].program>2)
            {
                cout<<"Program tidak sesuai\n";
                goto input;
            } cout<<" Jumlah sks          = ";cin>>bayar[i].sks;

            if(bayar[i].program==1)
            {
                tetap=500000;
                var=bayar[i].sks*25000;
            }
            else if(bayar[i].program==2)
            {
                tetap=750000;
                var=bayar[i].sks*50000;
            }cout<<endl;
            
        cout<<"\n\n--------------------------------\n";
        cout<<"Output ";
        cout<<"\n--------------------------------\n";
        cout<<"\nNama Mahasiswa     = "<<bayar[i].nama;
        cout<<"\nNIM                = "<<bayar[i].nim;
        cout<<"\nJurusan [TI, PTK]  = "<<bayar[i].jurusan;
        cout<<"\nProgram            = "<<bayar[i].program;
        cout<<"\nJumlah SKS         = "<<bayar[i].sks;
        cout<<"\nSPP tetap          = "<<tetap;
        cout<<"\nSPP Variabel       = "<<var;
        cout<<endl<<endl;
    }
}