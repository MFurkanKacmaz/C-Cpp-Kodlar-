/*
 * ödev1.cxx
 * 
 * Bu program [3-15] arasındaki tek sayılar boyutunda düz üçgen, ters üçgen ve [5-15] arasındaki tek sayılar boyutunda elmas basar.
 * 
 * Muhammed Furkan KAÇMAZ
 * 14/02/2020
 */


#include <iostream>

using namespace std;

void duzUcgen(){
	int boyut, sayac=0, j=3;
	for(int k=0;k<3;k++){//3 defa geçersiz boyut birimi almak için kuruldu.
		if(sayac == 0){
			cout << "Duz ucgenin boyutu kac birimlik olsun?\n";
			cin >> boyut;
			}

		for(int i=3;i<=15;i+=2){//Kullanıcının geçerli bir boyut birimi seçtiğini kontrol eden döngü
			if(i == boyut)
				sayac++;
			}
		
		if(sayac == 0){//Eğer geçersiz bir boyut girildiyse
			j--;
			cout << "Gecersiz boyut girdiniz!!" << endl << j << " hakkiniz kaldi\n\n" ;
			}
									 
		if(sayac == 1){
			int x, y, yildiz=1, bosluk=(boyut-1)/2;
			
			for(x=0;x<(boyut+1)/2;x++){
				for(y=0;y<bosluk;y++){//Boşlukları basan döngü
					cout << " ";
					}
					
				for(y=0;y<yildiz;y++){//Yıldızları basan döngü
					cout << "*";
					}
				
				cout << endl;
				yildiz += 2;
				bosluk -= 1;
				}
			}
		}	
	}


void tersUcgen(){
	int boyut, sayac=0, j=3, k=0, i=3;
	
	while(k<3){//3 defa geçersiz boyut girmek için döngü oluşturdum.
		if(sayac == 0){//İlk seferde ekrana basar ve her geçersiz boyut girildiğinde de(max 3 defa) ekrana basılır.
			cout << "Ters ucgenin boyutu kac birimlik olsun?\n";
			cin >> boyut;
			}

		while(i<=15){//Boyutun 15 ile 3 arasında tek sayı olması ayarlandı.
			if(i == boyut)//Eğer geçerli bir boyut girildiyse 
				sayac++;//Sayacı 1 artır.
			i += 2;
			}
		
		if(sayac == 0){//Geçersiz bir boyut girildiğinde 
			j--;//Kalan hakları basan değişkeni 1 azalt
			cout << "Gecersiz boyut girdiniz!!" << endl << j << " hakkiniz kaldi\n\n" ;
			}
									 
		if(sayac == 1){//Eğer geçerli bir boyut girildiyse 
			int x=0, y=0,  bosluk=0, z=(boyut+1)/2;
					
			while(z>0){//Üçgenin kaç satır olacağını belirleyen döngü oluşturuldu.
				
				while(bosluk<y){
					cout << " ";
					bosluk++;
					}
				
				while(x<boyut){
					cout << "*";
					x++;
					}
					
				cout << endl;
				x=0;
				bosluk=0;
				y++;
				z--;
				boyut-=2;
				}
			}
		k++;
		}
	}



void elmas(){
	
	int boyut;
	
	cout << "Elmasin boyutu kac birimlik olsun?\n";
	cin >> boyut;
	
	if(boyut!=5&&boyut!=7&&boyut!=9&&boyut!=11&&boyut!=13&&boyut!=15){
		
		cout << "Gecersiz boyut girdiniz!!\n2 hakkiniz kaldi\n\n";
		
		}
		
	if(boyut==5)
		cout << "  *\n ***\n*****\n*****\n ***\n  *";
		
	if(boyut==7)
		cout << "   *\n  ***\n *****\n*******\n*******\n *****\n  ***\n   *";
	
	if(boyut==9)
		cout << "    *\n   ***\n  *****\n *******\n*********\n*********\n *******\n  *****\n   ***\n    *";
	
	if(boyut==11)
		cout << "     *\n    ***\n   *****\n  *******\n *********\n***********\n***********\n *********\n  *******\n   *****\n    ***\n     *";
	
	if(boyut==13)
		cout << "      *\n     ***\n    *****\n   *******\n  *********\n ***********\n*************\n*************\n ***********\n  *********\n   *******\n    *****\n     ***\n      *";
	
	if(boyut==15)
		cout << "       *\n      ***\n     *****\n    *******\n   *********\n  ***********\n *************\n***************\n***************\n *************\n  ***********\n   *********\n    *******\n     *****\n      ***\n       *";
	
	
	cout << "Elmasin boyutu kac birimlik olsun?\n";
	cin >> boyut;
	
	if(boyut!=5&&boyut!=7&&boyut!=9&&boyut!=11&&boyut!=13&&boyut!=15){
		
		cout << "Gecersiz boyut girdiniz!!\n1 hakkiniz kaldi\n\n";
		
		}
		
	if(boyut==5)
		cout << "  *\n ***\n*****\n*****\n ***\n  *";
		
	if(boyut==7)
		cout << "   *\n  ***\n *****\n*******\n*******\n *****\n  ***\n   *";
	
	if(boyut==9)
		cout << "    *\n   ***\n  *****\n *******\n*********\n*********\n *******\n  *****\n   ***\n    *";
	
	if(boyut==11)
		cout << "     *\n    ***\n   *****\n  *******\n *********\n***********\n***********\n *********\n  *******\n   *****\n    ***\n     *";
	
	if(boyut==13)
		cout << "      *\n     ***\n    *****\n   *******\n  *********\n ***********\n*************\n*************\n ***********\n  *********\n   *******\n    *****\n     ***\n      *";
	
	if(boyut==15)
		cout << "       *\n      ***\n     *****\n    *******\n   *********\n  ***********\n *************\n***************\n***************\n *************\n  ***********\n   *********\n    *******\n     *****\n      ***\n       *";
	
	
	cout << "Elmasin boyutu kac birimlik olsun?\n";
	cin >> boyut;
	
	if(boyut!=5&&boyut!=7&&boyut!=9&&boyut!=11&&boyut!=13&&boyut!=15){
		
		cout << "Gecersiz boyut girdiniz!!\n0 hakkiniz kaldi\n\n";
		
		}
		
	if(boyut==5)
		cout << "  *\n ***\n*****\n*****\n ***\n  *";
		
	if(boyut==7)
		cout << "   *\n  ***\n *****\n*******\n*******\n *****\n  ***\n   *";
	
	if(boyut==9)
		cout << "    *\n   ***\n  *****\n *******\n*********\n*********\n *******\n  *****\n   ***\n    *";
	
	if(boyut==11)
		cout << "     *\n    ***\n   *****\n  *******\n *********\n***********\n***********\n *********\n  *******\n   *****\n    ***\n     *";
	
	if(boyut==13)
		cout << "      *\n     ***\n    *****\n   *******\n  *********\n ***********\n*************\n*************\n ***********\n  *********\n   *******\n    *****\n     ***\n      *";
	
	if(boyut==15)
		cout << "       *\n      ***\n     *****\n    *******\n   *********\n  ***********\n *************\n***************\n***************\n *************\n  ***********\n   *********\n    *******\n     *****\n      ***\n       *";
	
	}


int main()
{
	int sec;
	
	cout << "1 : Duz Ucgen\n2 : Ters Ucgen\n3 : Elmas\n0 : Cikis\n\n" ;
	cout << "Seciminiz nedir?\n" ;
	cin >> sec;
	
	if(sec == 1)//Seçim 1 se 
		duzUcgen();//Fonksiyonunu çağır
		
	if(sec == 2)
		tersUcgen();
	
	if(sec == 3)
		elmas();
	
	
	return 0;
}

