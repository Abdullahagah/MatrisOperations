#include <stdio.h>
#include "my_array_library.h"

int main(int argc, char *argv[]) {
	int row, column;
	int array[100][100] = {{10,5,13},{16,17,8},{5,9,6}}; row = 3; column = 3;
	int testArray[100][100] = {{1,2,3},{2,4,-5},{3,-5,6,7}}; // product icin
	int operation=1; int newMatrisRequest=0;
	
	printf("Kendi Matrisinizle islem yapacaksaniz 1 giriniz, sabit bir matrisle islem yapmak icin 0 giriniz:");
	scanf("%d",&newMatrisRequest);
	if (newMatrisRequest == 1){
	
		printf("Matrisin satir boyutunu giriniz: ");scanf("%d",&row);		
		printf("Matrisin sutun boyutunu giriniz:");scanf("%d",&column);
		input_Array(array,row,column);
	}
	
	while(operation){

		printf("************************************************************************\n");
		printf("	0- Cikmak icin\n");
		printf("	1- Matrisi Bastirmak icin\n");
		printf("	2- Koordinatlari girerek matris elemanini bulmak icin\n");
		printf("	3- Girilen matris elemanin koordinatlarini almak icin\n");
		printf("	4- Matriste sadece 1 adet bulunan elemanlarin sayisini almak icin icin\n");
		printf("	5- Matrisin en kucuk elemanini almak icin\n");
		printf("	6- Her bir matrisin sutunun ve satirinin en buyuk elemanini almak icin\n");
		printf("	7- Bubble Sort Algoritmasina göre matrisi yenilemek icin\n");
		printf("	8- Matrisin Transpose unu almak icin\n");
		printf("	9- Iki matrisi carpmak icin\n");
		printf("	10- Matrisin birim matris olup olmadigini kontrol etmek icin\n");
		printf("	11- Matrisin simetrik matris olup olmadigini kontrol etmek icin\n");

		printf("\n");	

		printf("\n");
		printf("Lutfen Yapmak Istediginiz Islemin Numarasini Giriniz: ");
		scanf("%d",&operation);	
		system("CLS");

		printf("\n");

		
		switch(operation){
	
		case(0):
		printf("\nProgram Sonlandirildi!\n");
		break;	
		case(1):
			print_All_Array(array,row,column);
			break; 
		case(2):	
			print_nth_mth(array,row,column);
		case(3):
			print_Index_Of_Element(array,row,column);
			break;
		case(4):
			finder_Number_Of_Nonrepeat_Values(array,row,column);
			break;
		case(5):
			finder_Min_Element(array,row,column);
			break;
		case(6):
			//finder_Max_Element_Rows_Columns(array,row,column);							// bitmedi
			break;
		case(7):
			sorter_Rows_Decending_By_BubbleSort(array,row,column);
			break;
		case(8):
			finder_Transpose_Of_Array(array,row,column); 
			break;
		case(9):
			//finder_Product_Of_Two_Arrays(array,row,column,testArray,row2,column2);		// bitmedi
			break;
		case(10):
			controller_Whether_Identity_Matrix_Not(array,row,column);
			break;
		case(11):			
			controller_Whether_Symmetric_Matrix_Not(array,row,column);
			break;
		default:
			printf("Hatali Islem Kodu, Tekrar deneyin!!\n");
			printf("\n");
		}
		}
	
	printf("\n");
	system("pause");
	return 0;

}
