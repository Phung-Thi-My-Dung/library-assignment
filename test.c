#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VALUE 100

// Mảng lưu trữ thông tin độc giả
char *madocgia[MAX_VALUE];
char *hotendocgia[MAX_VALUE];
char *cmnd[MAX_VALUE];
char *ngaythangnamsinh[MAX_VALUE];
char *gioitinh[MAX_VALUE];
char *email[MAX_VALUE];
char *diachi[MAX_VALUE];

// Biến đếm số độc giả
int count = 0;

// Hàm thêm độc giả
void themdocgiafunction() {
    char choice;
    while (1) {
        // Cấp phát bộ nhớ cho các thông tin của độc giả mới
        madocgia[count] = malloc(4 * sizeof(char)); // 3 ký tự mã + 1 ký tự null
        hotendocgia[count] = malloc(MAX_VALUE * sizeof(char));
        cmnd[count] = malloc(MAX_VALUE * sizeof(char));
        ngaythangnamsinh[count] = malloc(MAX_VALUE * sizeof(char));
        gioitinh[count] = malloc(MAX_VALUE * sizeof(char));
        email[count] = malloc(MAX_VALUE * sizeof(char));
        diachi[count] = malloc(MAX_VALUE * sizeof(char));

        // Tạo mã độc giả tự động
        sprintf(madocgia[count], "%03d", count + 1);

        // Nhập thông tin độc giả từ người dùng
        printf("\nMa doc gia: %s\n", madocgia[count]);
        printf("Ho va ten doc gia: ");
        fgets(hotendocgia[count], MAX_VALUE, stdin);
        printf("CMND: ");
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

        // Tăng biến đếm
        count++;

        // Hỏi người dùng có muốn nhập tiếp không
        printf("\nBan muon them nguoi dung khac khong? (y/n): ");
        scanf(" %c", &choice); // Thêm dấu cách trước %c để bỏ qua newline
        getchar(); // Xóa ký tự newline còn lại trong stdin sau khi dùng scanf

        if (choice == 'n' || choice == 'N') {
            printf("Them doc gia thanh cong!\n");

            // In lại danh sách các độc giả đã thêm
            printf("\nDanh sach doc gia vua them2:\n");
            for (int i = 0; i < count; i++) {
                printf("\nMa doc gia: %s\n", madocgia[i]);
                printf("Ho ten: %s\n", hotendocgia[i]);
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

int main() {
    int luachon;
    while (1) {
        printf("\nQuan ly doc gia\n");
        printf("1. Xem danh sach doc gia\n");
        printf("2. Them doc gia\n");
        printf("3. Chinh sua thong tin doc gia\n");
        printf("4. Xoa thong tin doc gia\n");
        printf("5. Tim kiem doc gia theo cmnd\n");
        printf("6. Tim kiem doc gia theo ho ten\n");
        printf("7. Ve chuong trinh chinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luachon);
        getchar(); // Xóa ký tự newline trong bộ đệm sau khi nhập số

        // Kiểm tra lựa chọn của người dùng
        switch (luachon) {
            case 1:
                printf("Xem danh sach doc gia.\n");
                break;
            case 2:
                themdocgiafunction();
                break;
            case 3:
                printf("Chinh sua thong tin doc gia.\n");
                break;
            case 4:
                printf("Xoa thong tin doc gia.\n");
                break;
            case 5:
                printf("Tim kiem doc gia theo CMND.\n");
                break;
            case 6:
                printf("Tim kiem doc gia theo họ tên.\n");
                break;
            case 7:
                printf("Ve chuong trinh chinh.\n");
                return 0;
            default:
                printf("Vui long nhap so tu 1 den 7.\n");
                break;
        }
    }
    return 0;
}
