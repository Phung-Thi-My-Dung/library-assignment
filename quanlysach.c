#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 2. array luu sach
#define MAX_VALUE 100
char *isbn[MAX_VALUE];
char *tensach[MAX_VALUE];
char *tacgia[MAX_VALUE];
char *nhaxuatban[MAX_VALUE];
char *namxuatban[MAX_VALUE];
char *theloaisach[MAX_VALUE];
char *giasach[MAX_VALUE];
char *soquyensach[MAX_VALUE];
char *soluongthucte[MAX_VALUE];
int count = 0;
// Ham xem danh sach sach trong thu vien
void xemsachfunction() 
{
    while(1)
    {
        if (count == 0) 
        {
            printf("Khong co sach nao hien co.\n");
        } else 
        {
            printf("Danh sach cac sach:\n");
            printf("So luong sach vua them: %d\n", count);
            for (int i = 0; i < count; i++) 
            {
                printf("Danh sach sach vua them la:\n");
                printf("ISBN: %s\n", isbn[i]);
                printf("Ten sach: %s\n", tensach[i]);
                printf("Tac gia: %s\n", tacgia[i]);
                printf("Nha xuat ban: %s\n", nhaxuatban[i]);
                printf("Nam xuat ban: %s\n", namxuatban[i]);
                printf("The loai sach: %s\n", theloaisach[i]);
                printf("Gia sach: %s\n", giasach[i]);
                printf("So quyen sach: %s\n", soquyensach[i]);
                printf("So luong thuc te sach: %s\n", soluongthucte[i]);
            }
        }
    break;
    }
}
// Ham them sach
void themsachfunction()
{
    char choice;

    while (1)
    {
        // Cấp phát bộ nhớ cho chuỗi con trỏ
        isbn[count] = malloc(MAX_VALUE * sizeof(char));
        tensach[count] = malloc(MAX_VALUE * sizeof(char));
        tacgia[count] = malloc(MAX_VALUE * sizeof(char));
        nhaxuatban[count] = malloc(MAX_VALUE * sizeof(char));
        namxuatban[count] = malloc(MAX_VALUE * sizeof(char));
        theloaisach[count] = malloc(MAX_VALUE * sizeof(char));
        giasach[count] = malloc(MAX_VALUE * sizeof(char));
        soquyensach[count] = malloc(MAX_VALUE * sizeof(char));
        soluongthucte[count] = malloc(MAX_VALUE * sizeof(char));

        // Nhập thông tin độc giả từ người dùng
        printf("ISBN sach (10 so): ");
        fgets(isbn[count], MAX_VALUE, stdin);
        printf("Ten sach: ");
        fgets(tensach[count], MAX_VALUE, stdin);
        printf("Tac gia: ");
        fgets(tacgia[count], MAX_VALUE, stdin);
        printf("Nha xuat ban: ");
        fgets(nhaxuatban[count], MAX_VALUE, stdin);
        printf("Nam xuat ban: ");
        fgets(namxuatban[count], MAX_VALUE, stdin);
        printf("The loai sach: ");
        fgets(theloaisach[count], MAX_VALUE, stdin);
        printf("Gia sach: ");
        fgets(giasach[count], MAX_VALUE, stdin);
        printf("So quyen sach: ");
        fgets(soquyensach[count], MAX_VALUE, stdin);
        printf("So luong sach thuc te: ");
        fgets(soluongthucte[count], MAX_VALUE, stdin);

        // Xóa ký tự newline (\n) cuối chuỗi của fgets
        isbn[count][strcspn(isbn[count], "\n")] = 0;
        tensach[count][strcspn(tensach[count], "\n")] = 0;
        tacgia[count][strcspn(tacgia[count], "\n")] = 0;
        nhaxuatban[count][strcspn(nhaxuatban[count], "\n")] = 0;
        namxuatban[count][strcspn(namxuatban[count], "\n")] = 0;
        theloaisach[count][strcspn(theloaisach[count], "\n")] = 0;
        giasach[count][strcspn(giasach[count], "\n")] = 0;
        soquyensach[count][strcspn(soquyensach[count], "\n")] = 0;
        soluongthucte[count][strcspn(soluongthucte[count], "\n")] = 0;

        // Tăng biến count sau khi thêm sach
        count++;

        // Hỏi nhập người dùng tiếp hay thoát
        printf("Ban co muon nhap sach khac khong? y/n: ");
        scanf(" %c", &choice);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf

        if (choice == 'n' || choice == 'N')
        {
            printf("Them sach thanh cong!\n");

            // In độc giả vừa thêm
            for (int i = 0; i < count; i++)
            {
                printf("Danh sach sach vua them la:\n");
                printf("ISBN: %s\n", isbn[i]);
                printf("Ten sach: %s\n", tensach[i]);
                printf("Tac gia: %s\n", tacgia[i]);
                printf("Nha xuat ban: %s\n", nhaxuatban[i]);
                printf("Nam xuat ban: %s\n", namxuatban[i]);
                printf("The loai sach: %s\n", theloaisach[i]);
                printf("Gia sach: %s\n", giasach[i]);
                printf("So quyen sach: %s\n", soquyensach[i]);
                printf("So luong sach thuc te: %s\n", soluongthucte[i]);
            }
            break;
        }
    }
}
//prototype timkiem isbn
int timkiemisbnfunction();

// Ham chinh sua thong tin 1 quyen sach
void chinhsuasachfunction() 
{
    while(1)
    {
        int index = -1;
        int choice;
        char luachon;
        int i;
        index = timkiemisbnfunction();
        if (index != -1)
            {
                while(1)
                    {
                        printf("\nBan muon sua thong tin gi?\n");
                        printf("1. ISBN\n");
                        printf("2. Ten sach\n");
                        printf("3. Tac gia\n");
                        printf("4. Nha xuat ban\n");
                        printf("5. Nam xuat ban\n");
                        printf("6. The loai sach\n");
                        printf("7. Gia sach\n");
                        printf("8. So quyen sach\n");
                        printf("0. Thoat\n");
                        printf("Nhap so tuong ung voi thong tin muon sua: ");
                        scanf("%d", &choice);
                        getchar();  
                        switch(choice)
                        {
                            case 1: 
                                printf("Nhap ISBN moi: ");
                                fgets(isbn[index], MAX_VALUE, stdin);
                                isbn[index][strcspn(isbn[index], "\n")] = 0;
                                printf("ISBN da duoc cap nhat.\n");
                                break;
                            case 2:
                                printf("Nhap ten sach moi: ");
                                fgets(tensach[index], MAX_VALUE, stdin);
                                tensach[index][strcspn(tensach[index], "\n")] = 0;
                                printf("Ten sach da duoc cap nhat.\n");
                                break;
                            case 3:
                                printf("Nhap tac gia moi: ");
                                fgets(tacgia[index], MAX_VALUE, stdin);
                                tacgia[index][strcspn(tacgia[index], "\n")] = 0;
                                printf("Tac gia moi da duoc cap nhat.\n");
                                break;
                            case 4: 
                                printf("Nhap nha xuat ban moi: ");
                                fgets(nhaxuatban[index], MAX_VALUE, stdin);
                                nhaxuatban[index][strcspn(nhaxuatban[index], "\n")] = 0;
                                printf("Nha xuat ban moi da duoc cap nhat.\n");
                                break;
                            case 5: 
                                printf("Nhap nam xuat ban moi: ");
                                fgets(namxuatban[index], MAX_VALUE, stdin);
                                namxuatban[index][strcspn(namxuatban[index], "\n")] = 0;
                                printf("Nam xuat ban moi da duoc cap nhat.\n");
                                break;
                            case 6:
                                printf("Nhap the loai moi: ");
                                fgets(theloaisach[index], MAX_VALUE, stdin);
                                theloaisach[index][strcspn(theloaisach[index], "\n")] = 0;
                                printf("The loai moi da duoc cap nhat.\n");
                                break;
                            case 7:
                                printf("Nhap gia sach moi: ");
                                fgets(giasach[index], MAX_VALUE, stdin);
                                giasach[index][strcspn(giasach[index], "\n")] = 0;
                                printf("Gia sach moi da duoc cap nhat.\n");
                                break;
                            case 8: 
                                printf("So quyen sach moi: ");
                                fgets(soquyensach[index], MAX_VALUE, stdin);
                                soquyensach[index][strcspn(soquyensach[index], "\n")] = 0;
                                printf("So quyen sach moi da duoc cap nhat.\n");
                                break;
                            case 0: 
                                return;
                        }
                    // In thong tin nguoi vua sua
                    printf("Thong tin sach sau khi sua la: ");
                    printf("ISBN: %s\n", isbn[index]);
                    printf("Ten sach: %s\n", tensach[index]);
                    printf("Tac gia: %s\n", tacgia[index]);
                    printf("Nha xuat ban: %s\n", nhaxuatban[index]);
                    printf("Nam xuat ban: %s\n", namxuatban[index]);
                    printf("The loai sach: %s\n", theloaisach[index]);
                    printf("Gia sach: %s\n", giasach[index]);
                    printf("So quyen sach: %s\n", soquyensach[index]);
                    }
            }
        if (index == -1)
            printf("Khong tim thay sach.\n");
        // Hỏi nhập người dùng tiếp hay thoát
        printf("Ban co muon sua thong tin sach khac khong? y/n: ");
        scanf(" %c", &luachon);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf
        if (luachon == 'n' || luachon == 'N')
        {
            break;  
        }
    }
}
// Ham xoa sach
void xoasachfunction()
{
    while (1)
    {
        int index = -1;
        char choice, luachon;
        int i;
        index = timkiemisbnfunction();
        if (index != -1)
            {
            // Hoi ban co muon xoa sach nay khong?
            printf("Ban co muon xoa sach nay khong? y/n\n");
            scanf(" %c", &choice);
            getchar();
            if (choice == 'y' || choice == 'Y')
                {
                    for (i = index; i < count - 1; i++)
                    {
                        strcpy (isbn[i], isbn[i+1]);
                        strcpy(tensach[i], tensach[i + 1]);
                        strcpy(tacgia[i], tacgia[i + 1]);
                        strcpy(nhaxuatban[i], nhaxuatban[i + 1]);
                        strcpy(namxuatban[i], namxuatban[i + 1]);
                        strcpy(theloaisach[i], theloaisach[i + 1]);
                        strcpy(giasach[i], giasach[i + 1]);
                        strcpy(soquyensach[i], soquyensach[i + 1]);
                        strcpy(soluongthucte[i], soluongthucte[i + 1]);
                    }
                count--;
                printf("Xoa sach thanh cong.\n");
                }
            else
            {
                printf("Huy thao tac xoa sach.\n");
            }
        }
        else 
        {
            printf("Khong tim thay sach.\n");
        }
        // Hỏi nhập người dùng tiếp hay thoát
        printf("Ban co muon xoa sach khac khong? y/n: ");
        scanf(" %c", &luachon);     
        if (luachon == 'n' || luachon == 'N')
        {
            break;  
        }       
    }
}
//ham tim kiem theo isbn
int timkiemisbnfunction()
{   
    while(1)
    {
        char choice;
        int i;
        int index = -1;
        // Bien luu noi dung ISBN tim kiem cua nguoi dung
        char tempisbn[11];
        printf("Nhap isbn can tim (10 so): ");
        scanf("%s", tempisbn);
        for (i=0; i<count; i++)
            {
                if (strcmp(tempisbn, isbn[i]) == 0)
                //In sach da tim thay
                {   
                    index = i;
                    printf("ISBN: %s\n", isbn[i]);
                    printf("Ten sach: %s\n", tensach[i]);
                    printf("Tac gia: %s\n", tacgia[i]);
                    printf("Nha xuat ban: %s\n", nhaxuatban[i]);
                    printf("Nam xuat ban: %s\n", namxuatban[i]);
                    printf("The loai sach: %s\n", theloaisach[i]);
                    printf("Gia sach: %s\n", giasach[i]);
                    printf("So quyen sach: %s\n", soquyensach[i]);
                    printf("So luong sach thuc te: %s\n", soluongthucte[i]);
                    break;
                }
            }
            if (index == -1)
            {   
                printf("Khong tim thay sach.\n");
            }
        // Hoi co muon tim kiem tiep khong?
        printf("Ban co muon tim kiem tiep sach bang ISBN khong? y/n: ");
        scanf(" %c", &choice);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf
        if (choice == 'n' || choice == 'N')
        {
            return index;
        }
        
    }
}
// Ham tim kiem sach theo ten sach
void timkiemsachtheotensach()
{
    while (1)
    {
    char choice;
    int i;
    //mang luu ten sach nguoi dung nhap vao
    char *temptensach = malloc(MAX_VALUE * sizeof(char));
    //nhap thong tin tu nguoi dung
    printf("Nhap ten sach muon tim: ");
    fgets(temptensach, MAX_VALUE, stdin);
    //xoa ky tu newline cho fgets
    temptensach[strcspn(temptensach, "\n")] = 0;
    for (i=0; i<count; i++)
        {
            if (strcmp(temptensach, tensach[i]) == 0)
                {
                    printf("ISBN: %s\n", isbn[i]);
                    printf("Ten sach: %s\n", tensach[i]);
                    printf("Tac gia: %s\n", tacgia[i]);
                    printf("Nha xuat ban: %s\n", nhaxuatban[i]);
                    printf("Nam xuat ban: %s\n", namxuatban[i]);
                    printf("The loai sach: %s\n", theloaisach[i]);
                    printf("Gia sach: %s\n", giasach[i]);
                    printf("So quyen sach: %s\n", soquyensach[i]);
                    printf("So luong sach thuc te: %s\n", soluongthucte[i]);
                    break;
                }
        }
        if (i==count)
            {
                printf("Khong tim thay sach\n.");
            }
    free(temptensach);
    // Hoi ban co muon tim kiem tiep hay thoat
        printf("Ban co muon tim kiem sach bang ten khong? y/n: ");
        scanf(" %c", &choice);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
    
    }
}

int quanlysach()
{
    int luachon;

    while (1)
    {
        printf("Quan ly sach\n");
        printf("1. Xem danh sach sach trong thu vien\n");
        printf("2. Them sach\n");
        printf("3. Chinh sua thong tin 1 quyen sach\n");
        printf("4. Xoa thong tin sach\n");
        printf("5. Tim kiem sach theo ISBN\n");
        printf("6. Tim kiem sach theo ten sach\n");
        printf("7. Ve chuong trinh chinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luachon);
        getchar();  // Xóa ký tự newline sau scanf

        switch (luachon)
        {
            case 1:
                xemsachfunction();
                break;
            case 2:
                themsachfunction();
                break;
            case 3:
                chinhsuasachfunction();
                break;
            case 4:
                xoasachfunction();
                break;
            case 5:
                timkiemisbnfunction();
                break;
            case 6:
                timkiemsachtheotensach();
                break;
            case 7:
                printf("Ve chuong trinh chinh.\n");
                exit(0);
            default:
                printf("Vui long nhap so tu 1 den 7.\n");
                break;
        }
    }
    return 0;
}