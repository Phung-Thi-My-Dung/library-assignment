#ifndef QUANLYDOCGIA_H
#define QUANLYDOCGIA_H

// Các thư viện cần thiết
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Định nghĩa giá trị lớn nhất cho các chuỗi
#define MAX_VALUE 100

// Khai báo các mảng con trỏ toàn cục để lưu thông tin độc giả
extern char *madocgia[MAX_VALUE];
extern char *hotendocgia[MAX_VALUE];
extern char *cmnd[MAX_VALUE];
extern char *ngaythangnamsinh[MAX_VALUE];
extern char *gioitinh[MAX_VALUE];
extern char *email[MAX_VALUE];
extern char *diachi[MAX_VALUE];

// Biến đếm số lượng độc giả
extern int count;

// Khai báo prototype của các hàm quản lý độc giả
void xemdocgiafunction();
void themdocgiafunction();
void chinhsuadocgiafunction();
void xoadocgiafunction();
int timkiemcmndfunction();
void timkiemhotenfunction();

// Hàm chính quản lý độc giả (dùng trong main nếu cần)
int quanlydocgia();

#endif // QUANLYDOCGIA_H
