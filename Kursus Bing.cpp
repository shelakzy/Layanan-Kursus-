#include<iostream>
using namespace std;

//fungsi
int total(int t, int biayadaftar){
	int hasil = t+biayadaftar;
return hasil;
}
int main(){
	int gelombang, uangpendaftaran, lamakursus, biayakursus, jumlah,n, biayadaftar,tidakterdeteksi, t=0; 
	string nama;
	int diskon[3][1]={50, 25, 15};
	
cout<<"--------------------Lembaga Kursus Bahasa Inggris------------------------"<<endl;
cout<<"                         ENGLISH INSTITUTE                               "<<endl;
cout<<"                                                                         "<<endl;

cout<<"        ==========================================================       "<<endl;
cout<<"        |Daftar Paket Kursus Bahasa Inggris   |Biaya Kursus/bulan|       "<<endl;
cout<<"        ==========================================================       "<<endl;
cout<<"        |1. English Conversation              |      1500000     |       "<<endl;
cout<<"        |2. Grammar Focus                     |      1000000     |       "<<endl;
cout<<"        |3. TOEFL                             |      2200000     |       "<<endl;
cout<<"        |4. IELTS                             |      2500000     |       "<<endl;
cout<<"        |_____________________________________|__________________|       "<<endl;
cout<<"        |                Biaya Pendaftaran = 100000              |       "<<endl;
cout<<"        |________________________________________________________|       "<<endl;

    cout<<"                                                         "<<endl;
    cout<<"Masukkan Nama                            = "; getline(cin,nama);
    cout<<"gelombang[1/2/3]                         = "; cin>>gelombang;
	cout<<"biaya pendaftaran                        = "; cin>>uangpendaftaran;
    cout<<"Jumlah Paket yang Diambil[1/2/3/4]       = "; cin>>jumlah;
    cout<<"_______________________________________"<<endl;
    
    //looping
    int jenis[jumlah];
    for(n=1;n<=jumlah;n++){
	cout<<"Jenis Paket yang Diambil ke-"<<n+0<<" = "; cin>>jenis[n];
	cout<<"--------------------------------------|"<<endl;
	cout<<"biaya kursus                          |=  "; cin>>biayakursus;
	cout<<"lama kursus                           |=  "; cin>>lamakursus;
	cout<<"______________________________________|   "<<endl;
	t=t+(biayakursus*lamakursus);
	cout<<"Total = Rp."<<t<<endl;
	cout<<"_______________________________________"<<endl;
}
    cout<<"__________________________________________________________________________"<<endl;
    
    //array & looping
    cout<<"                                                                          "<<endl;
    cout<<"DISKON YANG DITAWARKAN JIKA MENDAFTAR SESUAI GELOMBANG PENDAFTARAN"<<endl;
	for (int j=0; j<1; j++){
		for (int k=0; k<3; k++){
		cout<<"diskon gelombang ke-"<<k+1<<" = "<<diskon[k][j]<<"% "<<endl;
		}
	}
	cout<<"                                                                  "<<endl;
    //percabangan
		if(gelombang==1){
		biayadaftar = (uangpendaftaran-(uangpendaftaran*50/100));
	}else if(gelombang==2){
		biayadaftar = (uangpendaftaran-(uangpendaftaran*25/100));
	}else if(gelombang==3){
		biayadaftar = (uangpendaftaran-(uangpendaftaran*15/100));
	}else {
		biayadaftar = tidakterdeteksi;
	}
	cout<<"Biaya yang dibayarkan untuk mendaftar setelah diskon = Rp."<< biayadaftar <<endl;
	
	cout<<"__________________________________________________________________________"<<endl;
 
    cout<<"                                                                           "<<endl;
    cout<<"             Data Pendaftar Kursus ENGLISH INSTITUTE                     "<<endl;
    cout<<"             =======================================                     "<<endl;
    cout<<"                                                                         "<<endl;
    cout<<"Nama                                = "<<nama<<endl;
    for(n=1;n<=jumlah;n++){
    cout<<"Jenis Paket ke-"<<n+0<<"                    = " <<" "<<jenis[n]<<endl;
	}
    cout<<"Total Biaya kursus                  = Rp."<<t<<endl;
    //fungsi
	cout<<"Total Biaya Kursus dan Pendaftaran  = Rp."<<total(t, biayadaftar)<<endl;
	
}

