#include <stdio.h>
int main (){
	int user_id = 123;
	int user_pwd = 123456;
	int id, pwd;
	
	printf("Enter your ID: ");
	scanf("%d", &id);
	printf("Enter your password: ");
	scanf("%d", &pwd);
	if(id == user_id && pwd == user_pwd) {
	printf("Login successfully!\n");
	printf("Welcome to Fundamentals of Computer Programming course!\n");
	}
	else
	printf("Sorry! Your ID or password is wrong.\n");
	}