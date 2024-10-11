#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quanlydocgia.h"
#include "quanlysach.h"
// 3. array luu phieu muon/ tra sach
#define MAX_VALUE 100
int *phieumuon[MAX_VALUE];
int *ngaymuon[MAX_VALUE];
int *thangmuon[MAX_VALUE];
int *nammuon[MAX_VALUE];
int *ngaytradukien[MAX_VALUE];
int *thangtradukien[MAX_VALUE];
int *namtradukien[MAX_VALUE];
int *ngaytrathucte[MAX_VALUE];
int *thangtrathucte[MAX_VALUE];
int *namtrathucte[MAX_VALUE];
int *soluongduocmuon[MAX_VALUE];
int *tinhtrangsach[MAX_VALUE];
int tinhtrangphieumuon[MAX_VALUE];
int *songayquahan[MAX_VALUE];
char *danhsachisbn[MAX_VALUE];
int tienphat;
int tienden;
int count=0;
int isbncount = 0;
// Ham tim phieu muon
int timphieumuonfunction()
{
    while (1)  
    {
        int index = -1;  //-1 la khong tim thay phieu muon
        char choice; 
        int tempphieumuon;
        printf("Nhap so phieu muon (so nguyen tu 0): ");
        scanf("%d", &tempphieumuon);

        for (int i = 0; i < count; i++)
        {
            if (tempphieumuon == phieumuon[i])  
                printf("Phieu muon: %d\n", phieumuon[i]);
                printf("Ma doc gia: %s\n", madocgia[i]);
                return i;  
        }
        
        printf("Khong tim thay phieu muon.\n");

        // Ask user if they want to search again
        printf("Ban co muon tim phieu muon khac khong? y/n: ");
        scanf(" %c", &choice);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf

        if (choice == 'n' || choice == 'N')  
        {
            break; 
        }
    }
    return -1;
}
// phieu muon moi
void phieumuonmoifunction()
{   // Cap phat bo nho cho cac chuoi con tro
    phieumuon[count] = (int *)malloc(sizeof(int)); 
    tinhtrangphieumuon[count] = (int *)malloc(sizeof(int)); 
    // Tu tao ma phieu muon
        sprintf(phieumuon[count], "%d", count);
    // Tu tao trang thai phieu muon
        tinhtrangphieumuon[count] = 0;
        printf("Ma phieu muon: %d\n", phieumuon[count]);
        printf("Tinh trang phieu muon: waiting (0)\n");
    count++;
}

// Ham lap phieu muon
int lapphieumuon()
{
while(1)
{
    int index = -1;
    int loan_index = timkiemcmndfunction();
    char luachon;
    index = timkiemcmndfunction();
    if (index != -1)
    {

        if (loan_index != -1)
        {
            printf("Da co phieu muon. Khong duoc muon.");
        }
        else
        {
            printf("Khong tim thay phieu muon. Ban co the lap phieu muon moi.");
        }
    }
    printf("Ban co muon lap phieu muon khac khong? y/n: ");
        scanf(" %c", &luachon);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf
        if (luachon == 'n' || luachon == 'N')
        {
            break;  
        }

}
return 0;
}
// In ma doc gia

// Lay thong tin tu nguoi dung
    // Nhap thong tin nguoi dung: ngay thang nam muon 
    // Tinh ra ngay thang nam tra du kien


    // Tim kiem sach theo ISBN, neu co check tinh trang xem co duoc muon khong (soluongthucte)
    //Tu tao so luong sach la 1, luu vao danhsachisbn[isbncount],
    // hoi co tim kiem tiep khong
// Lua chon: tao phieu muon hay huy. Tao thanh cong -> in phieu muon vua tao; Huy -> ban co muon tao phieu muon khac khong
// Update lai soluongthucte 
    // Chua ai muon: so luong thuc te = so quyen sach
    // Co ai muon: so luong thuc te = so quyen sach - so luong duoc muon cua tong cac phieu





