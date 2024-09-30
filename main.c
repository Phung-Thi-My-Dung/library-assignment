#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
// Tao cac array de luu du lieu




//CHUONG TRINH CHINH 
int main ()
{
    int luachon;
    while(1)
    {   
        printf("Chuong trinh quan ly thu vien dai hoc khoa hoc tu nhien\n");
        printf("1. Quan ly doc gia\n");
        printf("2. Quan ly sach\n");
        printf("3. Lap phieu muon sach\n");
        printf("4. Lap phieu tra sach\n");
        printf("5. Thong ke\n");
        printf("6. Thoat chuong trinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luachon);
        switch (luachon)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                exit(1);
                break;
            default: 
                printf("Vui long nhap lai.\n");

        }
    }
    return 0;
}
    