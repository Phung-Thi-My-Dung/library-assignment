#ifndef QUANLYSACH_H
#define QUANLYSACH_H

// Khai báo các hằng số
#define MAX_VALUE 100

// Khai báo các mảng lưu thông tin sách
extern char *isbn[MAX_VALUE];
extern char *tensach[MAX_VALUE];
extern char *tacgia[MAX_VALUE];
extern char *nhaxuatban[MAX_VALUE];
extern char *namxuatban[MAX_VALUE];
extern char *theloaisach[MAX_VALUE];
extern char *giasach[MAX_VALUE];
extern char *soquyensach[MAX_VALUE];
extern char *soluongthucte[MAX_VALUE];
extern int countSach;

// Khai báo các hàm sử dụng trong chương trình quản lý sách
void xemsachfunction();               // Hàm xem danh sách sách
void themsachfunction();              // Hàm thêm sách
int timkiemisbnfunction();            // Hàm tìm kiếm sách theo ISBN
void chinhsuasachfunction();          // Hàm chỉnh sửa thông tin sách
void xoasachfunction();               // Hàm xóa sách
void timkiemsachtheotensach();        // Hàm tìm kiếm sách theo tên sách

// Hàm quản lý sách chính
int quanlysach();

#endif // QUANLYSACH_H
