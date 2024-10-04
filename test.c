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
                        printf("ISBN\n");
                        printf("Ten sach\n");
                        printf("Tac gia\n");
                        printf("Nha xuat ban\n");
                        printf("Nam xuat ban\n");
                        printf("The loai sach\n");
                        printf("Gia sach\n");
                        printf("So quyen sach\n");
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
                    }
                    // In thong tin nguoi vua sua
                    printf("ISBN: %s\n", isbn[index]);
                    printf("Ten sach: %s\n", tensach[index]);
                    printf("Tac gia: %s\n", tacgia[index]);
                    printf("Nha xuat ban: %s\n", nhaxuatban[index]);
                    printf("Nam xuat ban: %s\n", namxuatban[index]);
                    printf("The loai sach: %s\n", theloaisach[index]);
                    printf("Gia sach: %s\n", giasach[index]);
                    printf("So quyen sach: %s\n", soquyensach[index]);
            }
        if (index == -1)
            printf("Khong tim thay sach.\n");
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



// Ham tim kiem sach theo ISBN
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
    printf("Nhap ho ten muon tim: ");
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
                    break;
                }
        }
        if (i==count)
            {
                printf("Khong tim thay sach\n.");
            }
    free(temptensach);
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