
{   char choice;
    //bien dem cac phan tu trong chuoi con tro
    while(1)
    {
    // Cấp phát bộ nhớ cho các thông tin của độc giả mới
        madocgia[count] = malloc(4 * sizeof(char)); // 3 ký tự mã + 1 ký tự null
        hotendocgia[count] = malloc(MAX_VALUE * sizeof(char));
        cmnd[count] = malloc(MAX_VALUE * sizeof(char));
        ngaythangnamsinh[count] = malloc(MAX_VALUE * sizeof(char));
        gioitinh[count] = malloc(MAX_VALUE * sizeof(char));
        email[count] = malloc(MAX_VALUE * sizeof(char));
        diachi[count] = malloc(MAX_VALUE * sizeof(char));
    //tu tao ma doc gia
    sprintf(madocgia[count], "%03d", count + 1);
    