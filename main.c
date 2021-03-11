#include <stdio.h>
#include <string.h>

typedef struct{
	char name[30];
	char tel[50];
}Tel;

enum menu{INSERT=1, SELECT, DELETE, UPDATE, PRINTALL};

Tel arr[10];

int idx=0;

void PrintAll(){
	int i;
	for(i=0; i<idx; i++)
		printf("%s : %s\n", arr[i].name, arr[i].tel);
}

void InsertTel(){
	Tel t;
	printf("name : "); scanf("%s", t.name);
	printf("tel : "); scanf("%s", t.tel);
	arr[idx++] = t;
	printf("insert complete!);
}

void SelectTel(){
	char name[30];
	printf("search name : "); scanf("%s", name);
	int i;
	for(i=0; i<idx; i++){
		if(strcmp(arr[i].name, name)==0)
			printf("%s : %s\n", arr[i].name, arr[i].tel);
	}
}

void DeleteTel(){
	char name[30];
	printf("delete name : "); scanf("%s",name);
	int i;
	for(i=0; i<idx; i++){
		if(strcmp(arr[i].name, name)==0){
			int j;
			for(j=i; j<idx-1; j++)
				arr[j] = arr[j+1];
			idx--;
			printf("delete complete!\n");
			return;
		}
	} 
	printf("nothing to delete\n");
}

void UpdateTel(){
	char name[30];
	printf("update name : "); scanf("%s", name);
	int i;
	for(i=0; i<idx; i++){
		if(strcmp(arr[i].name, name)==0){
			printf("update start!\n");
			char tel[50];
			printf("tel : "); scanf("%s", tel);
			arr[i].tel = tel;
			printf("update complete!\n");
			return;
		}
	}
}

int main(void){
	int menu;
	while(1){
		printf("1.Insert\n"); printf("2.Select\n");
		printf("3.Delete\n"); printf("4.Update\n"); printf("PrintAll\n");
		printf("Select menu no(0:exit) : "); scanf("%d", &menu);
		if(menu == 0) break;
		if(menu == 1) InsertTel();
		else if(menu ==2) SelectTel();
		else if(menu == 3) DeleteTel();
		else if(menu == 4) UpdateTel();
		else if(menu == 5) PrintAll();
		else printf("wrong meno no type!\n");
	}

	return 0;
}
