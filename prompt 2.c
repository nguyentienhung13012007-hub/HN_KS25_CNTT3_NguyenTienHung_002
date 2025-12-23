#include <stdio.h>
#include <stdlib.h>

int main() {
    int chon, n = 0, sum = 0, x;
    int a[100]; 
    char yesNo;
    int testKey=0;

    do {
        printf("\n=================================================\n");
        printf("                      MENU                       \n");
        printf("=================================================\n");
        printf("1. Nhap gia tri n phan tu\n");
        printf("2. In gia tri cac phan tu cua mang\n");
        printf("3. Tinh tong, trung binh cong\n");
        printf("4. Sap xep mang \n");
        printf("5. Tim kiem phan tu (binary search)\n");
        printf("6. Xoa phan tu tai vi tri\n");
        printf("7. Chen 1 phan tu\n");
        printf("8.Xoa cac phan tu cung gia tri\n");
        printf("9. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                do {
                    printf("Nhap so phan tu mang (<=100): ");
                    scanf("%d", &n);
                    if (n > 100 || n <= 0)
                        printf("So phan tu khong hop le!\n");
                } while (n > 100 || n <= 0);

                for (int i = 0; i < n; i++) {
                    printf("Phan tu a[%d] = ", i);
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                printf("Gia tri cua mang: ");
                for (int i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            case 3:
                sum = 0;
                for (int i = 0; i < n; i++)
                    sum += a[i];
                printf("Tong cac phan tu: %d\n", sum);
                printf("Trung binh cong: %.2f\n", (float)sum / n);
                break;

            case 4: {
                int temp;
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (a[j] > a[j + 1]) {
                            temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep tang dan: ");
                for (int i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;
            }

         
            case 5: {
            	if(testKey==0){
            		printf("mang chx sap xep.");
				}else{
                if (n == 0) {
                    printf("Mang rong, hay nhap du lieu truoc!\n");
                    break;
                }
                printf("Nhap so can tim: ");
                scanf("%d", &x);

                int low = 0, high = n - 1, mid, found = 0;
                while (low <= high) {
                    mid = (low + high) / 2;
                    if (a[mid] == x) {
                        printf("Tim thay %d tai vi tri %d \n", x, mid);
                        found = 1;
                        break;
                    } else if (a[mid] < x)
                        low = mid + 1;
                    else
                        high = mid - 1;
                }
                if (!found)
                    printf("Khong tim thay %d trong mang.\n", x);
            }
                break;
            }
    

            
            case 6: {
                int pos;
                printf("Nhap vi tri can xoa : ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n)
                    printf("Vi tri khong hop le!\n");
                else {
                    for (int i = pos; i < n - 1; i++)
                        a[i] = a[i + 1];
                    n--;
                    printf("Mang sau khi xoa: ");
                    for (int i = 0; i < n; i++)
                        printf("%d ", a[i]);
                    printf("\n");
                }
                break;
            }

            case 7: {
                int value, pos;
                printf("Nhap gia tri muon chen: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon chen : ");
                scanf("%d", &pos);
                if (pos < 0 || pos > n || n >= 100)
                    printf("Vi tri khong hop le hoac mang da day!\n");
                else {
                    for (int i = n; i > pos; i--)
                        a[i] = a[i - 1];
                    a[pos] = value;
                    n++;
                    printf("Mang sau khi chen: ");
                    for (int i = 0; i < n; i++)
                        printf("%d ", a[i]);
                    printf("\n");
                }
                break;
            }
            case 8: {
                if (n == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                printf("Nhap gia tri muon xoa: ");
                scanf("%d", &x);
                int j = 0; 
                for (int i = 0; i < n; i++) {
                    if (a[i] != x) { 
                        a[j] = a[i];
                        j++;
                    }
                }
                if (j == n)
                    printf("Khong co phan tu nao co gia tri %d trong mang.\n", x);
                else {
                    n = j;
                    printf("Mang sau khi xoa tat ca phan tu co gia tri %d: ", x);
                    for (int i = 0; i < n; i++)
                        printf("%d ", a[i]);
                    printf("\n");
                }
                break;
            }
            	

            case 9:
                printf("Thoat chuong trinh.\n");
                exit(0);

            default:
                printf("Lua chon khong hop le. Moi nhap lai!\n");
        }

    printf("ban co muon tiep tuc khong(y/n)? ");
    scanf(" %c",&yesNo);
    
	} while (yesNo=='y'||yesNo=='Y');

    return 0;
}


