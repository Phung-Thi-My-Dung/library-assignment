#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VALUE 100

char *madocgia[MAX_VALUE];
char *hotendocgia[MAX_VALUE];
char *cmnd[MAX_VALUE];
char *ngaythangnamsinh[MAX_VALUE];
char *gioitinh[MAX_VALUE];
char *email[MAX_VALUE];
char *diachi[MAX_VALUE];

int count = 0;
// Ham xem danh sach doc gia
void xemdocgiafunction() 
{
    while(1)
    {
        if (count == 0) 
        {
            printf("Khong co doc gia nao hien co.\n");
        } else 
        {
            printf("Danh sach cac doc gia:\n");
            printf("So luong doc gia: %d\n", count);
            for (int i = 0; i < count; i++) 
            {
                printf("Ma doc gia: %s\n", madocgia[i]);
                printf("Ho va ten: %s\n", hotendocgia[i]);
                printf("CMND: %s\n", cmnd[i]);
                printf("Ngay thang nam sinh: %s\n", ngaythangnamsinh[i]);
                printf("Gioi tinh: %s\n", gioitinh[i]);
                printf("Email: %s\n", email[i]);
                printf("Dia chi: %s\n", diachi[i]);
            }
        }
    break;
    }
}
// Ham them doc gia
void themdocgiafunction()
{
    char choice;

    while (1)
    {
        // Cấp phát bộ nhớ cho chuỗi con trỏ
        madocgia[count] = malloc(4 * sizeof(char));
        hotendocgia[count] = malloc(MAX_VALUE * sizeof(char));
        cmnd[count] = malloc(MAX_VALUE * sizeof(char));
        ngaythangnamsinh[count] = malloc(MAX_VALUE * sizeof(char));
        gioitinh[count] = malloc(MAX_VALUE * sizeof(char));
        email[count] = malloc(MAX_VALUE * sizeof(char));
        diachi[count] = malloc(MAX_VALUE * sizeof(char));

        // Tự tạo mã độc giả
        sprintf(madocgia[count], "%03d", count);

        // Nhập thông tin độc giả từ người dùng
        printf("\nMa doc gia: %s\n", madocgia[count]);
        printf("Ho va ten doc gia: ");
        fgets(hotendocgia[count], MAX_VALUE, stdin);
        printf("CMND (10 so): ");
        fgets(cmnd[count], MAX_VALUE, stdin);
        printf("Ngay thang nam sinh: ");
        fgets(ngaythangnamsinh[count], MAX_VALUE, stdin);
        printf("Gioi tinh: ");
        fgets(gioitinh[count], MAX_VALUE, stdin);
        printf("Email: ");
        fgets(email[count], MAX_VALUE, stdin);
        printf("Dia chi: ");
        fgets(diachi[count], MAX_VALUE, stdin);

        // Xóa ký tự newline (\n) cuối chuỗi của fgets
        hotendocgia[count][strcspn(hotendocgia[count], "\n")] = 0;
        cmnd[count][strcspn(cmnd[count], "\n")] = 0;
        ngaythangnamsinh[count][strcspn(ngaythangnamsinh[count], "\n")] = 0;
        gioitinh[count][strcspn(gioitinh[count], "\n")] = 0;
        email[count][strcspn(email[count], "\n")] = 0;
        diachi[count][strcspn(diachi[count], "\n")] = 0;

        // Tăng biến count sau khi thêm người dùng
        count++;

        // Hỏi nhập người dùng tiếp hay thoát
        printf("Ban co muon nhap nguoi dung khac khong? y/n: ");
        scanf(" %c", &choice);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf

        if (choice == 'n' || choice == 'N')
        {
            printf("Them doc gia thanh cong!\n");

            // In độc giả vừa thêm
            for (int i = 0; i < count; i++)
            {
                printf("Danh sach doc gia vua them la:\n");
                printf("Ma doc gia: %s\n", madocgia[i]);
                printf("Ho ten doc gia: %s\n", hotendocgia[i]);
                printf("CMND: %s\n", cmnd[i]);
                printf("Ngay thang nam sinh: %s\n", ngaythangnamsinh[i]);
                printf("Gioi tinh: %s\n", gioitinh[i]);
                printf("Email: %s\n", email[i]);
                printf("Dia chi: %s\n", diachi[i]);
            }
            break;
        }
    }
}
// Prototype của hàm tìm kiếm CMND
int timkiemcmndfunction();
// Ham chinh sua thong tin 1 doc gia
void chinhsuadocgia()
{
    while(1)
    {
        int index = -1;
        int choice;
        char luachon;
        int i;
        index = timkiemcmndfunction();
        if (index != -1)
            {
                while(1)
                    {
                        printf("\nBan muon sua thong tin gi?\n");
                        printf("1. Ho ten\n");
                        printf("2. CMND\n");
                        printf("3. Ngay thang nam sinh\n");
                        printf("4. Gioi tinh\n");
                        printf("5. Email\n");
                        printf("6. Dia chi\n");
                        printf("0. Thoat\n");
                        printf("Nhap so tuong ung voi thong tin muon sua: ");
                        scanf("%d", &choice);
                        getchar();  
                        switch (choice)
                        {
                            case 1: 
                                printf("Nhap ho ten moi: ");
                                fgets(hotendocgia[index], MAX_VALUE, stdin);
                                hotendocgia[index][strcspn(hotendocgia[index], "\n")] = 0;
                                printf("Ho ten da duoc cap nhat.\n");
                                break;
                            case 2:
                                printf("Nhap CMND moi: ");
                                fgets(cmnd[index], MAX_VALUE, stdin);
                                cmnd[index][strcspn(cmnd[index], "\n")] = 0;
                                printf("CMND da duoc cap nhat.\n");
                                break;
                            case 3:
                                printf("Nhap ngay thang nam sinh moi: ");
                                fgets(ngaythangnamsinh[index], MAX_VALUE, stdin);
                                ngaythangnamsinh[index][strcspn(ngaythangnamsinh[index], "\n")] = 0;
                                printf("Ngay thang nam sinh da duoc cap nhat.\n");
                                break;
                            case 4: 
                                printf("Nhap gioi tinh moi: ");
                                fgets(gioitinh[index], MAX_VALUE, stdin);
                                gioitinh[index][strcspn(gioitinh[index], "\n")] = 0;
                                printf("Ho ten da duoc cap nhat.\n");
                                break;
                            case 5: 
                                printf("Nhap email moi: ");
                                fgets(email[index], MAX_VALUE, stdin);
                                email[index][strcspn(email[index], "\n")] = 0;
                                printf("Email da duoc cap nhat.\n");
                                break;
                            case 6:
                                printf("Nhap dia chi moi: ");
                                fgets(diachi[index], MAX_VALUE, stdin);
                                diachi[index][strcspn(diachi[index], "\n")] = 0;
                                printf("Dia chi da duoc cap nhat.\n");
                                break;
                            case 0: 
                                return;
                        }
                    // In thong tin nguoi vua sua
                    printf("\nThong tin doc gia sau khi sua la:\n");
                    printf("Ma doc gia: %s\n", madocgia[index]);
                    printf("Ho ten doc gia: %s\n", hotendocgia[index]);
                    printf("CMND: %s\n", cmnd[index]);
                    printf("Ngay thang nam sinh: %s\n", ngaythangnamsinh[index]);
                    printf("Gioi tinh: %s\n", gioitinh[index]);
                    printf("Email: %s\n", email[index]);
                    printf("Dia chi: %s\n", diachi[index]);
                    }
            }
        if (index == -1)
            printf("Khong tim thay doc gia.");
        // Hỏi nhập người dùng tiếp hay thoát
        printf("Ban co muon nhap nguoi dung khac khong? y/n: ");
        scanf(" %c", &luachon);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf
        if (luachon == 'n' || luachon == 'N')
        {
            break;  
        }
    }
}
// Ham xoa doc gia
void xoadocgiafunction()
{
    while (1)
    {
        int index = -1;
        char choice, luachon;
        int i;
        index = timkiemcmndfunction();
        if (index != -1)
            {
            // Hoi ban co muon xoa doc gia nay khong?
            printf("Ban co muon xoa doc gia nay khong? y/n\n");
            scanf(" %c", &choice);
            getchar();
            if (choice == 'y' || choice == 'Y')
                {
                    for (i = index; i < count - 1; i++)
                    {
                        strcpy (madocgia[i], madocgia[i+1]);
                        strcpy(hotendocgia[i], hotendocgia[i + 1]);
                        strcpy(cmnd[i], cmnd[i + 1]);
                        strcpy(ngaythangnamsinh[i], ngaythangnamsinh[i + 1]);
                        strcpy(gioitinh[i], gioitinh[i + 1]);
                        strcpy(email[i], email[i + 1]);
                        strcpy(diachi[i], diachi[i + 1]);
                    }
                count--;
                printf("Xoa doc gia thanh cong.\n");
                }
            else
            {
                printf("Huy thao tac xoa doc gia.\n");
            }
        }
        else 
        {
            printf("Khong tim thay doc gia.\n");
        }
        // Hỏi nhập người dùng tiếp hay thoát
        printf("Ban co muon xoa nguoi dung khac khong? y/n: ");
        scanf(" %c", &luachon);     
        if (luachon == 'n' || luachon == 'N')
        {
            break;  
        }       
    }
}
// Ham tim kiem doc gia theo CMND
int timkiemcmndfunction()
{   while(1)
    {
        char choice;
        int i;
        int index = -1;
        // Bien luu noi dung CMND tim kiem cua nguoi dung
        char tempcmnd[11];
        printf("Nhap cmnd can tim (10 so): ");
        scanf("%s", tempcmnd);
        for (i=0; i<count; i++)
            {
                if (strcmp(tempcmnd, cmnd[i]) == 0)
                //In doc gia da tim thay
                {   
                    index = i;
                    printf ("%d", index);
                    printf("Ma doc gia: %s\n", madocgia[i]);
                    printf("Ho ten doc gia: %s\n", hotendocgia[i]);
                    printf("CMND: %s\n", cmnd[i]);
                    printf("Ngay thang nam sinh: %s\n", ngaythangnamsinh[i]);
                    printf("Gioi tinh: %s\n", gioitinh[i]);
                    printf("Email: %s\n", email[i]);
                    printf("Dia chi: %s\n", diachi[i]);
                    break;
                }
            }
            if (index == -1)
            {   
                printf("Khong tim thay doc gia.");
                break;
            }
        // Hoi co muon tim kiem tiep khong?
        printf("Ban co muon tim kiem tiep doc gia bang CMND khong? y/n: ");
        scanf(" %c", &choice);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf
        if (choice == 'n' || choice == 'N')
        {
            return index;
        }
        
    }
}
// Ham tim kiem doc gia theo ho ten
void timkiemhotenfunction()
{
    while (1)
    {
    char choice;
    int i;
    //mang luu ho ten nguoi dung nhap vao
    char *temphoten = malloc(MAX_VALUE * sizeof(char));
    //nhap thong tin tu nguoi dung
    printf("Nhap ho ten muon tim: ");
    fgets(temphoten, MAX_VALUE, stdin);
    //xoa ky tu newline cho fgets
    temphoten[strcspn(temphoten, "\n")] = 0;
    for (i=0; i<count; i++)
        {
            if (strcmp(temphoten, hotendocgia[i]) == 0)
                {
                    printf("Ma doc gia: %s\n", madocgia[i]);
                    printf("Ho ten doc gia: %s\n", hotendocgia[i]);
                    printf("CMND: %s\n", cmnd[i]);
                    printf("Ngay thang nam sinh: %s\n", ngaythangnamsinh[i]);
                    printf("Gioi tinh: %s\n", gioitinh[i]);
                    printf("Email: %s\n", email[i]);
                    printf("Dia chi: %s\n", diachi[i]);
                    break;
                }
        }
        if (i==count)
            {
                printf("Khong tim thay doc gia.");
            }
    free(temphoten);
    // Hoi ban co muon tim kiem tiep hay thoat
        printf("Ban co muon tim kiem tiep doc gia bang ho ten khong? y/n: ");
        scanf(" %c", &choice);
        getchar();  // Xóa ký tự newline còn sót lại sau scanf
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
    
    }
}
int main()
{
    int luachon;

    while (1)
    {
        printf("Quan ly doc gia\n");
        printf("1. Xem danh sach doc gia\n");
        printf("2. Them doc gia\n");
        printf("3. Chinh sua thong tin doc gia\n");
        printf("4. Xoa thong tin doc gia\n");
        printf("5. Tim kiem doc gia theo CMND\n");
        printf("6. Tim kiem doc gia theo ho ten\n");
        printf("7. Ve chuong trinh chinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luachon);
        getchar();  // Xóa ký tự newline sau scanf

        switch (luachon)
        {
            case 1:
                xemdocgiafunction();
                break;
            case 2:
                themdocgiafunction();
                break;
            case 3:
                chinhsuadocgia();
                break;
            case 4:
                xoadocgiafunction();
                break;
            case 5:
                timkiemcmndfunction();
                break;
            case 6:
                timkiemhotenfunction();
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
