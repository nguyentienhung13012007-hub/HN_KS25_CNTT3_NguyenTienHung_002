#include <stdio.h>

/**
 * Hàm chính th?c hi?n thu?t toán Bubble Sort ð? s?p x?p m?ng.
 *
 * Chýõng tr?nh s? d?ng thu?t toán Bubble Sort ð? s?p x?p m?ng
 * theo th? t? tãng d?n. Thu?t toán so sánh t?ng c?p ph?n t? li?n k?,
 * n?u ph?n t? trý?c l?n hõn ph?n t? sau th? ð?i ch? chúng.
 *
 * Args:
 *     Không có tham s?
 *
 * Returns:
 *     int: Giá tr? 0 n?u chýõng tr?nh ch?y thành công
 */
int main(){
	
	int arr[]={5,1,4,2,8};
	int n= sizeof(arr)/sizeof(arr[0]);
	int k,temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	    }
}
		
		printf("mang dc sep theo noi bot: ");
	    for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}

	return 0;
}

