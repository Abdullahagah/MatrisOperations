#include <stdio.h>
#include "my_array_library.h"


void print_All_Array (int arr[100][100],int row,int column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",arr[i][j]);		
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");

}

void input_Array(int arr[100][100],int row,int column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d. satirin %d. sutunu icin eleaman giriniz: ",i,j);	
			scanf("%d",&arr[i][j]);
		}
	}
	print_All_Array(arr,row,column);
}



void print_nth_mth(int arr[100][100],int row,int column){
	int N,M;
	printf("Aradiginiz elemanin koordinatlarini giriniz.\n");
	printf("x: ");	scanf("%d",&N);
	printf("y: ");	scanf("%d",&M);
	
	if((row < N ) || (column < M)){
	
		printf("Matris aradiginiz boyutlarda degil, dolayisiyla boyle bir deger yok");
	}
	else{
		printf("Aradiginiz elaman => %d dir.",arr[N][M]);
	}
	printf("\n");
	printf("\n");

}

void print_Index_Of_Element(int arr[100][100],int row,int column){
	int key,kontrol = 0;int indexN = 0,indexM=0,i,j;
	
	printf("Koordinatlari bulunacak elemani giriniz: ");
	scanf("%d",&key);
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if (arr[i][j] == key){
				indexN = i; indexM = j; kontrol++;
			}
		}
	}
	if (kontrol == 1){
		printf("Aradiginiz elaman %d. satir %d. sutundadir",indexN,indexM);
	}
	else
		printf("Aradiginiz eleman bulunamadi");
		
	printf("\n");
	printf("\n");
}

void finder_Number_Of_Nonrepeat_Values(int arr[100][100],int row,int column){
	int i,j,k,l; int numberNonRepeat, kontrol=0;
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			for(k=0;k<row;k++){
				for(l=0;l<column;l++){
					if(arr[k][l] == arr[i][j]){
						kontrol++;
					}
				}
			}
			if(kontrol == 1){
				numberNonRepeat++;
				kontrol = 0;
			}
		}
	}
	printf("Tekrar etmeyen sayilarin adedi %d",numberNonRepeat);
	printf("\n");
	printf("\n");
}

void finder_Min_Element(int arr[100][100],int row,int column){
	int i,j; int min=arr[0][0];
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if (arr[i][j]<min){
				min = arr[i][j];
			}
		}
	}
	printf("Dizinin en kucuk elemani %d dir.",min);

	printf("\n");
	printf("\n");	
}

void finder_Max_Element_Rows_Columns(int arr[100][100],int row,int column){
	int i,j,l,k,m; int maxRow=-999999; int maxColumn = -999999;
	l = 1;
	for(i=0;i<row;i++){
		for(j=0;j<row-1;j++){
			if(arr[i][j+1] > maxRow){
				maxRow = arr[i][j+1];
			}
	//******************************************************************************************************************************
	
			printf("%d --- ",arr[j+1][i]);
			printf("%d --->  ",arr[j][i]);
			printf("%d\n",maxColumn);
			if(arr[j+1][i] > maxColumn){
				maxColumn = arr[j+1][i];
			}
			printf("%d --- ",arr[j+1][i]);
			printf("%d --->  ",arr[j][i]);
			printf("%d\n",maxColumn);
		}

		
		printf("%d. satirin en buyuk elemani %d dir\n",i+1,maxRow);

		printf("%d. sutunun en buyuk eleamani %d dir\n",l,maxColumn);
		l++;
		printf("\n");

		maxRow = arr[i+1][0];
		maxColumn = arr[0][j+1];
	}
	printf("\n");
	printf("\n");
}

void sorter_Rows_Decending_By_BubbleSort(int arr[100][100],int row,int column){
	int i,j,l,temp;
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			for(l=0;l<column;l++){
				if(arr[i][j] > arr[i][l]){
					temp = arr[i][l];
					arr[i][l] = arr[i][j];
					arr[i][j] = temp;
				}
			}
		}
	}
	printf("Her satir kendi icinde buyukten kucuge siralandi:\n");
	print_All_Array(arr,row,column);
}
	
void finder_Transpose_Of_Array(int arr[100][100],int row,int column){
	int i,j; int arr2[100][100];
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			arr2[j][i] = arr[i][j];
		}
	}
	printf("Yukarida girilen arrayin devrigi asagidadir.\n");
	print_All_Array(arr2,row,column);
}

void finder_Product_Of_Two_Arrays(int arr[100][100],int row,int column,int arr2[100][100],int row2,int column2){
	int i,j; int arrFinal[100][100] = {{11,22},{33,44}};
	
	
	//******************************************************************************************************************************

	
	print_All_Array(arrFinal,row,column);

	
}

void controller_Whether_Identity_Matrix_Not(int arr[100][100],int row,int column){
	int i,j; int counterDiag = 0; int counterOutDiag = 0;

	if (row == column){
	
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				if ((i == j)){
					if ((arr[i][j] == 1) && (arr[j][i] == 1))
						counterDiag++;								
				}
				else if (arr[i][j] == 0){
					counterOutDiag++;
				}
				else{
					continue;
				}
			}
		}
		if((counterDiag == row) && (counterOutDiag == row*column-row)){
			printf("Bu matris Birim Matristir.\n");
		}
		else{
			printf("Bu matris Birim Matris Degildir.\n");
		}
	}
	else{
		printf("Sadece kare matrisler için birim matris vardir.\n");
	}
	printf("\n");
	printf("\n");
}

void controller_Whether_Symmetric_Matrix_Not(int arr[100][100],int row,int column){
	int i,j; int counter = 0;
	
	if (row == column){
	
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				if (i  == j){				
				continue;
				}
				else if (arr[i][j] == arr[j][i]){
					counter++;
				}
				else{
					continue;
				}
			}
		}
		if(counter == (row*column - row)){
			printf("Girilen Matris Simetriktir.");
		}	
		
		else if(counter != (row*column - row)){
			printf("Girilen Matris Simetrik degildir.");
		}	

	}
	else{
	
		printf("Sadece kare matrislerin simetrigi vardir.");
	}
	printf("\n");
	printf("\n");
		
}
