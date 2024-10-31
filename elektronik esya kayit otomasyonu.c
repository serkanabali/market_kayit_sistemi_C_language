#include <stdio.h>	//giriþ çýkýþ iþlemleri
#include <locale.h>	//dil kutuphanesi
#include <stdlib.h>	//bellek yonetimi ve sýralama
#include <conio.h>  //getch(); methodu için
struct tv{
	char tv_marka[20];
	char tv_model[20];
	int tv_boyut;
	int tv_fiyat;
}str_tv[10];

struct telefon{
	char telefon_marka[20];
	char telefon_model[20];
	int telefon_yil;
	int telefon_fiyat;
}str_telefon[10];

struct laptop{
	char laptop_marka[20];
	char laptop_model[20];
	int laptop_boyut;
	int laptop_fiyat;
}str_laptop[10];

struct camasir{
	char camasir_marka[20];
	char camasir_model[20];
	int camasir_yil;
	int camasir_hacim;
	int camasir_fiyat;
}str_camasir[10];

struct buzdolabi{
	char buzdolabi_marka[20];
	char buzdolabi_model[20];
	int buzdolabi_yil;
	int buzdolabi_hacim;
	int buzdolabi_fiyat;
}str_buzdolabi[10];

struct klima{
	char klima_marka[20];
	char klima_model[20];
	int klima_sogutma;
	int klima_ses;
	int klima_fiyat;
}str_klima[10];

struct kamera{
	char kamera_marka[20];
	char kamera_model[20];
	int kamera_hafiza;
	int kamera_mp;
	int kamera_fiyat;
}str_kamera[10];

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int dongu_sayaci = 0; //Ana menuye donulecegi zaman 1 artirilir
	//Stok sayaclari her parca girildiginde artar
	
	int tv_stoksayaci = 0;
	int telefon_stoksayaci = 0;
	int klima_stoksayaci = 0;
	int laptop_stoksayaci = 0;
	int camasir_stoksayaci = 0;
	int buzdolabi_stoksayaci = 0;
	int kamera_stoksayaci = 0;
	
	//Dongu Baslangic
	do{
		
	int anamenu_girdi;
	printf("\n\n \t\t\t\t\tELEKTRONÝK EÞYA KAYIT SÝSTEMÝ\n\n");
	printf(" \t\t\t\t\t[ 1 ] YENÝ URUN KAYDI \n\n");
	printf(" \t\t\t\t\t[ 2 ] KAYITLI ÜRÜNLERÝ LÝSTELE \n\n");
	//printf(" [ 3 ] KAYITLI URUNLERI SÝL \n\n");
	printf(" \t\t\t\t\t[ 3 ] PROGRAMDAN ÇIKIÞ YAP \n\n");
	printf("\n \t\t\t\t\tRakam Giriniz : ");scanf("%d",&anamenu_girdi);
	printf("\n");
	
	if(anamenu_girdi == 1){
		int urun_girdi;
		
		system("cls"); //Konsol ekranini temizler
		printf("\n\n\n \t\t\t\t\tÜRÜN SEÇÝN \n\n");
		printf(" \t\t\t\t\t[ 1 ] TELEVÝZYON \n\n");
		printf(" \t\t\t\t\t[ 2 ] TELEFON \n\n");
		printf(" \t\t\t\t\t[ 3 ] LAPTOP \n\n");
		printf(" \t\t\t\t\t[ 4 ] ÇAMAÞIR MAKÝNESÝ \n\n");
		printf(" \t\t\t\t\t[ 5 ] BUZDOLABI \n\n");
		printf(" \t\t\t\t\t[ 6 ] KLÝMA \n\n");
		printf(" \t\t\t\t\t[ 7 ] KAMERA \n\n");
		printf("\n \t\t\t\t\tRakam Giriniz : "); scanf("%d",&urun_girdi);
		system("cls");
		
		//URUNLERI KAYDETME********************************************************************
		if(urun_girdi == 1){
			tv_stoksayaci++;
			
			printf("\n\n\n \t\t\t\t\tTV MARKASI : ");
			scanf("%s",&str_tv[tv_stoksayaci].tv_marka);
			printf("\n \t\t\t\t\tTV MODELÝ : ");
			scanf("%s",&str_tv[tv_stoksayaci].tv_model);
			printf("\n \t\t\t\t\tTV BOYUTU (INCH) : ");
			scanf("%d",&str_tv[tv_stoksayaci].tv_boyut);
			printf("\n \t\t\t\t\tTV FÝYATI : ");
			scanf("%d",&str_tv[tv_stoksayaci].tv_fiyat);
			
			FILE *dosya;
						
			dosya = fopen("televizyon.txt","a");
			fprintf(dosya,"%s\t%s\t%d\t%d\n",	str_tv[tv_stoksayaci].tv_marka,
												str_tv[tv_stoksayaci].tv_model,
												str_tv[tv_stoksayaci].tv_boyut,
												str_tv[tv_stoksayaci].tv_fiyat);
			fclose(dosya);
		}
		
		else if(urun_girdi == 2){
			telefon_stoksayaci++;
			
			printf("\n\n\n \t\t\t\t\tTELEFON MARKASI : ");
			scanf("%s",&str_telefon[telefon_stoksayaci].telefon_marka);
			printf("\n \t\t\t\t\tTELEFON MODELÝ : ");
			scanf("%s",&str_telefon[telefon_stoksayaci].telefon_model);
			printf("\n \t\t\t\t\tTELEFON ÜRETÝM YILI : ");
			scanf("%d",&str_telefon[telefon_stoksayaci].telefon_yil);
			printf("\n \t\t\t\t\tTELEFON FÝYATI : ");
			scanf("%d",&str_telefon[telefon_stoksayaci].telefon_fiyat);
			
			FILE *dosya;
			
			dosya = fopen("telefon.txt","a");
			fprintf(dosya,"%s\t%s\t%d\t%d\n",	str_telefon[telefon_stoksayaci].telefon_marka,
												str_telefon[telefon_stoksayaci].telefon_model,
												str_telefon[telefon_stoksayaci].telefon_yil,
												str_telefon[telefon_stoksayaci].telefon_fiyat);
			fclose(dosya);
		}
		else if(urun_girdi == 3){
			laptop_stoksayaci++;
			
			printf("\n\n\n \t\t\t\t\tLAPTOP MARKASI : ");
			scanf("%s",&str_laptop[laptop_stoksayaci].laptop_marka);
			printf("\n \t\t\t\t\tLAPTOP MODELÝ : ");
			scanf("%s",&str_laptop[laptop_stoksayaci].laptop_model);
			printf("\n \t\t\t\t\tLAPTOP BOYUTU(INCH) : ");
			scanf("%d",&str_laptop[laptop_stoksayaci].laptop_boyut);
			printf("\n \t\t\t\t\tLAPTOP FÝYATI : ");
			scanf("%d",&str_laptop[laptop_stoksayaci].laptop_fiyat);
			
			FILE *dosya;
			
			dosya = fopen("laptop.txt","a");
			fprintf(dosya,"%s\t%s\t%d\t%d\n",	str_laptop[laptop_stoksayaci].laptop_marka,
												str_laptop[laptop_stoksayaci].laptop_model,
												str_laptop[laptop_stoksayaci].laptop_boyut,
												str_laptop[laptop_stoksayaci].laptop_fiyat);
			fclose(dosya);
		}
		
		else if(urun_girdi == 4){
			camasir_stoksayaci++;
			
			printf("\n\n\n \t\t\t\t\tÇAMAÞIR MAKÝNESÝ MARKASI : ");
			scanf("%s",&str_camasir[camasir_stoksayaci].camasir_marka);
			printf("\n \t\t\t\t\tÇAMAÞIR MAKÝNESÝ MODELÝ : ");
			scanf("%s",&str_camasir[camasir_stoksayaci].camasir_model);
			printf("\n \t\t\t\t\tÇAMAÞIR MAKÝNESÝ ÜRETÝM YILI : ");
			scanf("%d",&str_camasir[camasir_stoksayaci].camasir_yil);
			printf("\n \t\t\t\t\tÇAMAÞIR MAKÝNESÝ HACMÝ(LT) : ");
			scanf("%d",&str_camasir[camasir_stoksayaci].camasir_hacim);
			printf("\n \t\t\t\t\tÇAMAÞIR MAKÝNESÝ FÝYATI : ");
			scanf("%d",&str_camasir[camasir_stoksayaci].camasir_fiyat);
			
			FILE *dosya;
			
			dosya = fopen("camasir.txt","a");
			fprintf(dosya,"%s\t%s\t%d\t%d\t%d\n",	str_camasir[camasir_stoksayaci].camasir_marka,
													str_camasir[camasir_stoksayaci].camasir_model,
													str_camasir[camasir_stoksayaci].camasir_yil,
													str_camasir[camasir_stoksayaci].camasir_hacim,
													str_camasir[camasir_stoksayaci].camasir_fiyat);
			fclose(dosya);
		}
		
		else if(urun_girdi == 5){
			buzdolabi_stoksayaci++;
			
			printf("\n\n\n \t\t\t\t\tBUZDOLABI MARKASI : ");
			scanf("%s",&str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_marka);
			printf("\n \t\t\t\t\tBUZDOLABI MODELÝ : ");
			scanf("%s",&str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_model);
			printf("\n \t\t\t\t\tBUZDOLABI ÜRETÝM YILI : ");
			scanf("%d",&str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_yil);
			printf("\n \t\t\t\t\tBUZDOLABI HACMÝ(LT) : ");
			scanf("%d",&str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_hacim);
			printf("\n \t\t\t\t\tBUZDOLABI FÝYATI : ");
			scanf("%d",&str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_fiyat);
			
			FILE *dosya;
			
			dosya = fopen("buzdolabi.txt","a");
			fprintf(dosya,"%s\t%s\t%d\t%d\t%d\n",	str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_marka,
													str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_model,
													str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_yil,
													str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_hacim,
													str_buzdolabi[buzdolabi_stoksayaci].buzdolabi_fiyat);
			fclose(dosya);
		}
		
		else if(urun_girdi == 6){
			klima_stoksayaci++;
			
			printf("\n\n\n \t\t\t\t\tKLÝMA MARKASI : ");
			scanf("%s",&str_klima[klima_stoksayaci].klima_marka);
			printf("\n \t\t\t\t\tKLÝMA MODELÝ : ");
			scanf("%s",&str_klima[klima_stoksayaci].klima_model);
			printf("\n \t\t\t\t\tKLÝMA SOÐUTMA KAPASÝTESÝ(BTU) : ");
			scanf("%d",&str_klima[klima_stoksayaci].klima_sogutma);
			printf("\n \t\t\t\t\tKLÝMA SES DÜZEYÝ(DB) : ");
			scanf("%d",&str_klima[klima_stoksayaci].klima_ses);
			printf("\n \t\t\t\t\tKLÝMA FÝYATI : ");
			scanf("%d",&str_klima[klima_stoksayaci].klima_fiyat);
			
			FILE *dosya;
			
			dosya = fopen("klima.txt","a");
			fprintf(dosya,"%s\t%s\t%d\t%d\t%d\n",	str_klima[klima_stoksayaci].klima_marka,
													str_klima[klima_stoksayaci].klima_model,
													str_klima[klima_stoksayaci].klima_sogutma,
													str_klima[klima_stoksayaci].klima_ses,
													str_klima[klima_stoksayaci].klima_fiyat);
			fclose(dosya);
		}
		
		else if(urun_girdi == 7){
			kamera_stoksayaci++;
			
			printf("\n\n\n \t\t\t\t\tKAMERA MARKASI : ");
			scanf("%s",&str_kamera[kamera_stoksayaci].kamera_marka);
			printf("\n \t\t\t\t\tKAMERA MODELÝ : ");
			scanf("%s",&str_kamera[kamera_stoksayaci].kamera_model);
			printf("\n \t\t\t\t\tKAMERA KAPASÝTESÝ(GB) : ");
			scanf("%d",&str_kamera[kamera_stoksayaci].kamera_hafiza);
			printf("\n \t\t\t\t\tKAMERA ÇÖZÜNÜRLÜÐÜ(MP) : ");
			scanf("%d",&str_kamera[kamera_stoksayaci].kamera_mp);
			printf("\n \t\t\t\t\tKAMERA FÝYATI : ");
			scanf("%d",&str_kamera[kamera_stoksayaci].kamera_fiyat);
			
			FILE *dosya;
			
			dosya = fopen("kamera.txt","a");
			fprintf(dosya,"%s\t%s\t%d\t%d\t%d\n",	str_kamera[kamera_stoksayaci].kamera_marka,
													str_kamera[kamera_stoksayaci].kamera_model,
													str_kamera[kamera_stoksayaci].kamera_hafiza,
													str_kamera[kamera_stoksayaci].kamera_mp,
													str_kamera[kamera_stoksayaci].kamera_fiyat);
			fclose(dosya);
		}
		
		else
		{
			system("cls");
			printf("\t\t\t\t\tHatalý Giriþ Yaptýnýz.");
			getch();
		}
	}
	
	//URUNLERI LISTELEME****************************************************************************
	else if(anamenu_girdi == 2){
		int esya_listele_girdi;
		system("cls");
		printf("\n\t\t\t\t\t[ 1 ] TELEVÝZYONLARI LÝSTELE\n\n");		//(STOK : %d) \n",tv_stoksayaci);
		printf("\t\t\t\t\t[ 2 ] TELEFONLARI LÝSTELE\n\n");			//(STOK : %d) \n",tv_stoksayaci);
		printf("\t\t\t\t\t[ 3 ] LAPTOPLARI LÝSTELE\n\n");			//(STOK : %d) \n",tv_stoksayaci);
		printf("\t\t\t\t\t[ 4 ] ÇAMAÞIR MAKÝNELERÝNÝ LÝSTELE\n\n");	//(STOK : %d) \n",tv_stoksayaci);
		printf("\t\t\t\t\t[ 5 ] BUZDOLAPLARINI LÝSTELE\n\n");		//(STOK : %d) \n",tv_stoksayaci);
		printf("\t\t\t\t\t[ 6 ] KLÝMLARI LÝSTELE\n\n");				//(STOK : %d) \n",tv_stoksayaci);
		printf("\t\t\t\t\t[ 7 ] KAMERALARI LÝSTELE\n\n");			//(STOK : %d) \n",tv_stoksayaci);
		scanf("%d",&esya_listele_girdi);
		
		if (esya_listele_girdi == 1) {
		    FILE *dosya = fopen("televizyon.txt", "r");
		
		    if (dosya == NULL) {
		        printf("\t\t\t\t\tDosya açýlamadý veya yok!\n");
		        //return;
		    }
		
		    char veri[100];
		    int satir = 1;
		    int kayitVar = 0;  // Kayýt varlýðýný kontrol etmek için bir bayrak
		
		    printf("\t\t\t\t\t------ Kayýtlar ------\n");
		    printf("\t\t\t\t\tMarka\tModel\tInch\tFiyat\n\n");
		
		    while (fgets(veri, sizeof(veri), dosya) != NULL) {
		        printf("\t\t\t\t\t%d. %s", satir, veri);
		        satir++;
		        kayitVar = 1;  // En az bir kayýt olduðunda bayraðý 1 olarak iþaretle
		    }
		
		    if (kayitVar == 0) {
		        printf("\t\t\t\t\tKayýt yok\n");
		    }
		
		    printf("\n\t\t\t\t\t----------------------\n");
		
		    fclose(dosya);
		
		    printf("\n\t\t\t\t\tGeçmek için herhangi bir tuþa basýn");
		    getch();  // Enter'a basýlana kadar bekle
		}

		
		
		else if(esya_listele_girdi == 2){
			
			 FILE *dosya = fopen("telefon.txt", "r");
		
		    if (dosya == NULL) {
		        printf("\t\t\t\t\tDosya açýlamadý veya yok!\n");
		        //return;
		    }
		
		    char veri[100];
		    int satir = 1;
		    int kayitVar = 0;  
		
		    printf("\t\t\t\t\t------ Kayýtlar ------\n");
		    printf("\t\t\t\t\tMarka Model Yýl Fiyat\n\n");
		
		    while (fgets(veri, sizeof(veri), dosya) != NULL) {
		        printf("\t\t\t\t\t%d. %s", satir, veri);
		        satir++;
		        kayitVar = 1; 
		    }
		
		    if (kayitVar == 0) {
		        printf("\t\t\t\t\tKayýt yok\n");
		    }
		
		    printf("\n\t\t\t\t\t----------------------\n");
		
		    fclose(dosya);
		
		    printf("\n\t\t\t\t\tGeçmek için herhangi bir tuþa basýn");
		    getch();  
		}
		
		
		else if(esya_listele_girdi == 3){
			
			 FILE *dosya = fopen("laptop.txt", "r");
		
		    if (dosya == NULL) {
		        printf("\t\t\t\t\tDosya açýlamadý veya yok!\n");
		        //return;
		    }
		
		    char veri[100];
		    int satir = 1;
		    int kayitVar = 0; 
		
		    printf("\t\t\t\t\t------ Kayýtlar ------\n");
		    printf("\t\t\t\t\tMarka Model Inch Fiyat\n\n");
		
		    while (fgets(veri, sizeof(veri), dosya) != NULL) {
		        printf("\t\t\t\t\t%d. %s", satir, veri);
		        satir++;
		        kayitVar = 1;  
		    }
		
		    if (kayitVar == 0) {
		        printf("\t\t\t\t\tKayýt yok\n");
		    }
		
		    printf("\n\t\t\t\t\t----------------------\n");
		
		    fclose(dosya);
		
		    printf("\n\t\t\t\t\tGeçmek için herhangi bir tuþa basýn");
		    getch(); 
		}
		
		else if(esya_listele_girdi == 4){
			
			 FILE *dosya = fopen("camasir.txt", "r");
		
		    if (dosya == NULL) {
		        printf("\t\t\t\t\tDosya açýlamadý veya yok!\n");
		        //return;
		    }
		
		    char veri[100];
		    int satir = 1;
		    int kayitVar = 0;  
		
		    printf("\t\t\t\t\t------ Kayýtlar ------\n");
		    printf("\t\t\t\t\tMarka Model Yýl Hacim(Lt) Fiyat\n\n");
		
		    while (fgets(veri, sizeof(veri), dosya) != NULL) {
		        printf("\t\t\t\t\t%d. %s", satir, veri);
		        satir++;
		        kayitVar = 1;  
		    }
		
		    if (kayitVar == 0) {
		        printf("\t\t\t\t\tKayýt yok\n");
		    }
		
		    printf("\n\t\t\t\t\t----------------------\n");
		
		    fclose(dosya);
		
		    printf("\n\t\t\t\t\tGeçmek için herhangi bir tuþa basýn");
		    getch();  
		}
		
		else if(esya_listele_girdi == 5){
			
			 FILE *dosya = fopen("buzdolabi.txt", "r");
		
		    if (dosya == NULL) {
		        printf("\t\t\t\t\tDosya açýlamadý veya yok!\n");
		        //return;
		    }
		
		    char veri[100];
		    int satir = 1;
		    int kayitVar = 0; 
		
		    printf("\t\t\t\t\t------ Kayýtlar ------\n");
		    printf("\t\t\t\t\tMarka Model Yýl Hacim(Lt) Fiyat\n\n");
		
		    while (fgets(veri, sizeof(veri), dosya) != NULL) {
		        printf("\t\t\t\t\t%d. %s", satir, veri);
		        satir++;
		        kayitVar = 1; 
		    }
		
		    if (kayitVar == 0) {
		        printf("\t\t\t\t\tKayýt yok\n");
		    }
		
		    printf("\n\t\t\t\t\t----------------------\n");
		
		    fclose(dosya);
		
		    printf("\n\t\t\t\t\tGeçmek için herhangi bir tuþa basýn");
		    getch(); 
		}
		
		else if(esya_listele_girdi == 6){
			
			 FILE *dosya = fopen("klima.txt", "r");
		
		    if (dosya == NULL) {
		        printf("\t\t\t\t\tDosya açýlamadý veya yok!\n");
		        //return;
		    }
		
		    char veri[100];
		    int satir = 1;
		    int kayitVar = 0;  
		
		    printf("\t\t\t\t\t------ Kayýtlar ------\n");
		    printf("\t\t\t\t\tMarka Model Sogutma Kapasitesi(BTU) Ses Düzeyi(DB) Fiyat\n\n");
		
		    while (fgets(veri, sizeof(veri), dosya) != NULL) {
		        printf("\t\t\t\t\t%d. %s", satir, veri);
		        satir++;
		        kayitVar = 1;  
		    }
		
		    if (kayitVar == 0) {
		        printf("\t\t\t\t\tKayýt yok\n");
		    }
		
		    printf("\n\t\t\t\t\t----------------------\n");
		
		    fclose(dosya);
		
		    printf("\n\t\t\t\t\tGeçmek için herhangi bir tuþa basýn");
		    getch();  
		}
		
		else if(esya_listele_girdi == 7){
			
			 FILE *dosya = fopen("kamera.txt", "r");
		
		    if (dosya == NULL) {
		        printf("\t\t\t\t\tDosya açýlamadý veya yok!\n");
		        //return;
		    }
		
		    char veri[100];
		    int satir = 1;
		    int kayitVar = 0;  
		
		    printf("\t\t\t\t\t------ Kayýtlar ------\n");
		    printf("\t\t\t\t\tMarka Model Kapasite(GB) Çözünürlük(MP) Fiyat\n\n");
		
		    while (fgets(veri, sizeof(veri), dosya) != NULL) {
		        printf("\t\t\t\t\t%d. %s", satir, veri);
		        satir++;
		        kayitVar = 1;  
		    }
		
		    if (kayitVar == 0) {
		        printf("\t\t\t\t\tKayýt yok\n");
		    }
		
		    printf("\n\t\t\t\t\t----------------------\n");
		
		    fclose(dosya);
		
		    printf("\n\t\t\t\t\tGeçmek için herhangi bir tuþa basýn");
		    getch();  
		}
		
		else{
			printf("\t\t\t\t\tHatalý Giriþ");
			getch();
		}
	
	}
	
	//else if(anamenu_girdi == 3){}
		
	
	//CIKIS YAPMA****************************************************************************
	else if(anamenu_girdi == 3){
		printf("\n \t\t\t\t\tÇIKIÞ YAPILIYOR . . .");
		exit(0);
	}
	
	else{
		printf("\n \t\t\t\t\tHatalý Giriþ Yaptýnýz, Tekrar Deneyiniz \n");
		getch();
	}
	
	dongu_sayaci++;
	system("cls");
	
	}while(dongu_sayaci<30); //Anamenu Dongu Bitis
	
	return 0;
}
