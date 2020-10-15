#include<stdio.h>
#include <string.h>

int isSubstring(char[],char[]);

int main(){
	char str1[50];
	char str2[50];
	
	scanf("%s",str1);
	fflush(stdin);
	
	scanf("%s",str2);
	fflush(stdin);
	
	printf("%d",isSubstring(str1,str2));
	return 0;
}

int isSubstring(char str_1[], char str_2[]){
	if(strstr(str_2, str_1)==0){
		return 0;
	}else{
		return 1;	
	}
}
