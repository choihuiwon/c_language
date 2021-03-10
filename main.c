#include <stdio.h>

typedef struct{
	char name[30];
	char tel[50];
}Tel;

enum menu{INSERT=1, SELECT, DELETE, UPDATE};

Tel arr[10];

int main(void){
	int menu;
	while(1){
		printf("1.Insert\n"); printf("2.Select\n");
		printf("3.Delete\n"); printf("4.Update\n");
		printf("Select menu no(0:exit) : "); scanf("%d", &menu);
		if(menu == 0) break;
		if(menu == 1) InsertTel();
		else if(menu ==2) SelectTel();
		else if(menu == 3) DeleteTel();
		else if(menu == 4) UpdateTel();
		else printf("wrong meno no type!\n");
	}

	return 0;
}
