#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int inputdata(int *users){
	int temp;
	while(temp==0){
		printf("\nENTER A 4 DIGIT NUMBER =");
		scanf("%d",&*users);
		if(*users<=10000){
			if(*users>999){
				temp++;
			}
		}
	}

}

int main(void){
	int comp_number[4];int users_number[4];
	int random,k,users,temp,counter=0,m,n;
	srand(time(NULL)); 
	random=999+rand()%9000;
	temp=random;
	
	k=random/1000;
	comp_number[0]=k;
	random=random-k*1000;
	k=random/100;
	comp_number[1]=k;
	random=random-k*100;
	k=random/10;
	comp_number[2]=k;
	k=random-k*10;
	comp_number[3]=k;
	random=temp;
	while(counter==0){
		inputdata(&users);
		temp=users;
		k=users/1000;
		users_number[0]=k;
		users=users-k*1000;
		k=users/100;
		users_number[1]=k;
		users=users-k*100;
		k=users/10;
		users_number[2]=k;
		k=users-k*10;
		users_number[3]=k;
		users=temp;
		printf("%d",users);
		printf("\n");
		for(n=0;n<4;n++){
			if(comp_number[n]==users_number[n]){
				printf("+");
			}
			else{
				for(m=0;m<4;m++){
					if(n!=m){
						if(comp_number[n]==users_number[m]){
							printf("-");
						}
					}
				}
			}
		}
	
		if(random==users){
			counter++;
		}
	}
	

	
	return 0;
}
