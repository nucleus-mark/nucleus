#include<stdio.h>
int main(){
	int count, m,n;
	printf("Enter how many person are involve: ");
	scanf("%d", &count);
	printf("Enter number of passes : ");
	scanf("%d", &m);
	n = m;
		
	int data[100];
	int temp = 1, k =0;
	for(int i = 0;i < count;i++){
		data[i] = temp;
		temp ++;
	}
	if(m == 0){
		data[0] = data[count-1];
	}
	else{
	printf("\nPerson Eliminated :");	
	while(count != 1){
		if(k == m){
			if(data[k] == data[count-1]){
				printf("\nWinners position : %d", data[k]);
				break;
			}
			printf("%d ",data[k]);
			data[k] = 0;
			m = m + n +1;
		}
		else{
		if(data[k] == 0){
			printf("winners position : %d", data[k]);
			break;
		}
		else{
			
			data[count] = data[k];
			count++;
		}
		}
		k++;
		}
	}
}
