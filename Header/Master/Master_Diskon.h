void desain_tabel_diskon();
void formDiskon();
void insertDiskon();
void showDiskon();
void deleteDiskon();
void update_option_diskon();
void buttonUpdateDiskonTransition(int optional);
void update_function_diskon();
void update_nama_diskon();
void update_besar_diskon();
void update_tanggalMulai_diskon();
void update_tanggalBerakhir_diskon();

void desain_tabel_diskon(){
    //-----Mewarnai fillbox-----
    setColorBlock(0, 6);
    for (int panjang = 37; panjang <= 119; panjang++){
        for (int lebar = 10; lebar <= 14; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Frame tabel-----
    //Frame kiri atas
    gotoPrintASCII(37, 10, 201);

    //Frame atas pertama
    for (int i = 38;i <= 50;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas pertama
    gotoPrintASCII(51, 10, 203);

    //Frame atas kedua
    for (int i = 52;i <= 70;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas kedua
    gotoPrintASCII(71, 10, 203);

    // Frame atas ketiga
    for (int i = 72;i <= 84;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas ketiga
    gotoPrintASCII(85, 10, 203);

    // Frame atas keempat
    for (int i = 86;i <= 100;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas keempat
    gotoPrintASCII(101, 10, 203);

    // Frame atas kelima
    for (int i = 102;i <= 118;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame kanan atas
    gotoPrintASCII(119, 10, 187);

    //Frame kiri
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(37, i, 186);
    }

    //Frame kanan
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(119, i, 186);
    }

    // Frame vertikal 1
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(51, i, 186);
    }

    // Frame vertikal 2
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(71, i, 186);
    }

    // Frame vertikal 3
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(85, i, 186);
    }

    // Frame vertikal 4
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(101, i, 186);
    }

    //Frame kiri bawah
    gotoPrintASCII(37, 14, 204);

    //Frame kanan bawah
    gotoPrintASCII(119, 14, 185);

    //Frame bawah pertama
    for (int i = 38;i <= 50;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah pertama
    gotoPrintASCII(51, 14, 206);

    //Frame bawah kedua
    for (int i = 52;i <= 70;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah kedua
    gotoPrintASCII(71, 14, 206);

    //Frame bawah ketiga
    for (int i = 72;i <= 84;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah ketiga
    gotoPrintASCII(85, 14, 206);

    //Frame bawah keempat
    for (int i = 86;i <= 100;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah keempat
    gotoPrintASCII(101, 14, 206);

    //Frame bawah kelima
    for (int i = 102;i <= 118;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //-----Atribut Tabel-----
    gotoPrintText(43, 11, "I D");
    gotoPrintText(39, 13, "D I S K O N");
    gotoPrintText(58, 11, "N A M A");
    gotoPrintText(56, 13, "D I S K O N");
    gotoPrintText(74, 11, "B E S A R");
    gotoPrintText(73, 13, "D I S K O N");
    gotoPrintText(87, 11, "T A N G G A L");
    gotoPrintText(87, 13, "B E R L A K U");
    gotoPrintText(104, 11, "T A N G G A L");
    gotoPrintText(103, 13, "B E R A K H I R");
}

void formDiskon(){
    setColorBlock(0, 6);

    //-----Mewarnai fillbox-----
    for (int panjang = 79; panjang <= 125; panjang++){
        for (int lebar = 10; lebar <= 43; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //Frame pojok kiri atas
    gotoPrintASCII(78, 10, 203);

    //Frame atas
    for (int i = 79;i <= 125;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame pojok kanan atas
    gotoPrintASCII(126, 10, 187);

    //Frame kiri bagian atas
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(78, i, 186);
    }

    //Frame kanan bagian atas
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(126, i, 186);
    }

    //Frame pojok kiri tengah
    gotoPrintASCII(78, 14, 206);

    //Frame tengah
    for (int i = 79;i <= 125;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Frame pojok kiri tengah
    gotoPrintASCII(126, 14, 185);

    //Frame kiri bagian bawah
    for (int i = 15;i <= 43;i++){
        gotoPrintASCII(78, i, 186);
    }

    //Frame kanan bagian bawah
    for (int i = 15;i <= 43;i++){
        gotoPrintASCII(126, i, 186);
    }

    //Frame pojok kiri bawah
    gotoPrintASCII(78, 44, 200);

    //Frame pojok kanan bawah
    gotoPrintASCII(126, 44, 188);

    //Frame bawah
    for (int i = 79;i <= 125;i++){
        gotoPrintASCII(i, 44, 205);
    }

    gotoPrintText(97, 11, "T A M B A H");
    gotoPrintText(97, 13, "D I S K O N");
    gotoPrintText(81, 19, "I D  D I S K O N       : DSK-");
    gotoPrintText(81, 21, "N A M A  D I S K O N   : ");
    gotoPrintText(81, 23, "B E S A R  D I S K O N :    %");
    gotoPrintText(81, 25, "T G L  B E R L A K U   :   /  /");
    gotoPrintText(81, 27, "T G L  B E R A K H I R :   /  /");
}

void insertDiskon()
{
    int response;
    do
    {
        //Konfiramsi apakah ingin menambah data lagi (Pembuka)
        gotoPrintText(82, 40, "-Input [x] pada Nama Diskon untuk batal-");
        d.id_diskon = 1;
        arsDiskon = fopen("../Data/Diskon.dat", "a+b");

        if (arsDiskon != NULL) {
            while (fread(&d, sizeof(d), 1, arsDiskon)) {
                d.id_diskon += 1;
            }
        }

        //-----Fungsi input ID diskon-----
        gotoxy(110, 19);
        printf("%03d", d.id_diskon);

        //-----Fungsi input nama diskon-----
        gotoxy(106, 21);
        fflush(stdin);
        limitStrChar(d.nama_diskon, 18);
        if(strcmpi("x", d.nama_diskon)==0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_diskon();
        }

        //-----Fungsi input besar diskon-----
        besarDiskon :
        gotoxy(106, 23);
        limitFloatChar(&d.besar_diskon, 3);

        //-----Validasi input besar diskon-----
        if(d.besar_diskon > 100 || d.besar_diskon < 1){
            setClearArea(106, 23, 3, 1);
            MessageBox(NULL, "Rentang Diskon 1% - 100%", "Diskon tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            goto besarDiskon;
        }

        //-----Fungsi input tanggal mulai-----
        int error = 0;
        //Validasi input tanggal
        hariMulai:
        do{
            gotoxy(106, 25);
            limitDateChar(&d.tanggal_mulai.hari, 2);
            if(d.tanggal_mulai.hari == 0 || d.tanggal_mulai.hari > 31){
                setClearArea(106, 25, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan tanggal anda", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                error = 1;
            }
            else
            {
                error = 0;
            }
        }while(error == 1);

        //Validasi input bulan
        do{
            gotoxy(109, 25);
            limitDateChar(&d.tanggal_mulai.bulan, 2);
            if(d.tanggal_mulai.bulan == 0 || d.tanggal_mulai.bulan > 12){
                setClearArea(109, 25, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                error = 1;
            }
            else if(d.tanggal_mulai.hari > 29  && d.tanggal_mulai.bulan == 2){
                setClearArea(106, 25, 2, 1);
                setClearArea(109, 25, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariMulai;
            }
            else{
                error = 0;
            }
        }while (error == 1);


        //Validasi input tahun
        do{
            time_t now;
            time(&now);

            struct tm *local = localtime(&now);

            gotoxy(112, 25);
            limitDateChar(&d.tanggal_mulai.tahun, 4);
            //-----validasi tidak boleh kurang dari tanggal, bulan dan tahun saat ini-----
            if(d.tanggal_mulai.tahun < local->tm_year + 1900 || (d.tanggal_mulai.tahun == local->tm_year + 1900 && d.tanggal_mulai.bulan < local->tm_mon + 1) || (d.tanggal_mulai.tahun == local->tm_year + 1900 && d.tanggal_mulai.bulan == local->tm_mon + 1 && d.tanggal_mulai.hari < local->tm_mday)) {
                setClearArea(112, 25, 4, 1);
                setClearArea(109, 25, 2, 1);
                setClearArea(106, 25, 2, 1);
                MessageBox(NULL, "Waktu berlaku tidak boleh kurang dari tanggal saat ini", "Waktu berlaku tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariMulai;
            }

            //-----Validasi tahun kabisat-----
            else if (d.tanggal_mulai.hari > 28 && kabisat(d.tanggal_mulai.tahun) == false){
                setClearArea(112, 25, 4, 1);
                setClearArea(109, 25, 2, 1);
                setClearArea(106, 25, 2, 1);
                MessageBox(NULL, "Bukan Tahun Kabisat, silahkan masukkan ulang tanggal", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariMulai;
            }
            else{
                error = 0;
            }
        }while (error == 1);

        //-----Fungsi input tanggal berakhir-----
        error = 0;
        //Validasi input tanggal
        hariBerakhir:
        do{
            gotoxy(106, 27);
            limitDateChar(&d.tanggal_akhir.hari, 2);
            if(d.tanggal_akhir.hari == 0 || d.tanggal_akhir.hari > 31){
                setClearArea(106, 27, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan tanggal anda", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                error = 1;
            }
            else
            {
                error = 0;
            }
        }while(error == 1);

        //Validasi input bulan
        do{
            gotoxy(109, 27);
            limitDateChar(&d.tanggal_akhir.bulan, 2);
            if(d.tanggal_akhir.bulan == 0 || d.tanggal_akhir.bulan > 12){
                setClearArea(109, 27, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                error = 1;
            }
            else if(d.tanggal_akhir.bulan > 29  && d.tanggal_akhir.bulan == 2){
                setClearArea(106, 27, 2, 1);
                setClearArea(109, 27, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariBerakhir;;
            }
            else{
                error = 0;
            }
        }while (error == 1);


        //Validasi input tahun
        do{
            time_t now;
            time(&now);

            struct tm *local = localtime(&now);

            gotoxy(112, 27);
            limitDateChar(&d.tanggal_akhir.tahun, 4);
            //-----validasi tidak boleh kurang dari tanggal, bulan dan tahun saat ini-----
            if(d.tanggal_akhir.tahun < local->tm_year + 1900 || (d.tanggal_akhir.tahun == local->tm_year + 1900 && d.tanggal_akhir.bulan < local->tm_mon + 1) || (d.tanggal_akhir.tahun == local->tm_year + 1900 && d.tanggal_akhir.bulan == local->tm_mon + 1 && d.tanggal_akhir.hari < local->tm_mday)) {
                setClearArea(112, 27, 4, 1);
                setClearArea(109, 27, 2, 1);
                setClearArea(106, 27, 2, 1);
                MessageBox(NULL, "Waktu berakhir tidak boleh kurang dari tanggal saat ini", "Waktu berakhir tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariBerakhir;
            }

            //-----validasi tidak boleh kurang dari waktu mulai-----
            else if(d.tanggal_akhir.tahun < d.tanggal_mulai.tahun || (d.tanggal_akhir.tahun == d.tanggal_mulai.tahun && d.tanggal_akhir.bulan < d.tanggal_mulai.bulan) || (d.tanggal_akhir.tahun == d.tanggal_mulai.tahun && d.tanggal_akhir.bulan == d.tanggal_mulai.bulan && d.tanggal_akhir.hari < d.tanggal_mulai.hari)){
                setClearArea(112, 27, 4, 1);
                setClearArea(109, 27, 2, 1);
                setClearArea(106, 27, 2, 1);
                MessageBox(NULL, "Waktu berakhir tidak boleh kurang dari waktu berlaku", "Waktu berakhir tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariBerakhir;
            }

            //-----Validasi tahun kabisat-----
            else if (d.tanggal_akhir.hari > 28 && kabisat(d.tanggal_akhir.tahun) == false){
                setClearArea(112, 27, 4, 1);
                setClearArea(109, 27, 2, 1);
                setClearArea(106, 27, 2, 1);
                MessageBox(NULL, "Bukan Tahun Kabisat, silahkan masukkan ulang tanggal", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariBerakhir;
            }

            else{
                error = 0;
            }
        }while (error == 1);

        fwrite(&d, sizeof(d), 1, arsDiskon);
        fclose(arsDiskon);

        response = MessageBox(NULL, "Apakah Anda ingin menambahkan diskon lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        setClearArea(110, 19, 3, 1);
        setClearArea(106, 21, 18, 1);
        setClearArea(106, 23, 3, 1);
        setClearArea(106, 25, 2, 1);
        setClearArea(109, 25, 2, 1);
        setClearArea(112, 25, 4, 1);
        setClearArea(112, 27, 4, 1);
        setClearArea(109, 27, 2, 1);
        setClearArea(106, 27, 2, 1);
    }while (response == IDYES);//Konfirmasi apakah ingin menambah data lagi (Penutup)
}

void showDiskon(){
    int i = 0;
    arsDiskon = fopen("../Data/Diskon.dat","rb");
    while(fread(&d, sizeof(d), 1, arsDiskon)){
        if(i % 25 == 0 && i != 0){
            getch();
            //-----Menghapus data sebelumnya-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 167; panjang++){
                for (int lebar = 15; lebar <= 45; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            i = 0;
        }

        setColorBlock(0, 6);
        //-----Mewarnai fillbox-----
        for (int panjang = 37; panjang <= 119; panjang++){
            for (int lebar = 15+i; lebar <= 15+i+1; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        //------Buat tabel-----

        //Buat frame vertikal tabel
        for(int j = 14; j <= 15+i; j++){
            gotoPrintASCII(37, j, 186);
            gotoPrintASCII(51, j, 186);
            gotoPrintASCII(71, j, 186);
            gotoPrintASCII(85, j, 186);
            gotoPrintASCII(101, j, 186);
            gotoPrintASCII(119, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(37, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(51, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kedua
        gotoPrintASCII(71, 15+i+1, 202);

        //Buat frame pembatas bawah atribut ketiga
        gotoPrintASCII(85, 15+i+1, 202);

        //Buat frame pembatas bawah atribut keempat
        gotoPrintASCII(101, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(119, 15+i+1, 188);

        //Buat frame bawah pertama
        for (int j = 38;j <= 50;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 52;j <= 70;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketiga
        for (int j = 72;j <= 84;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah keempat
        for (int j = 86;j <= 100;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kelima
        for (int j = 102;j <= 118;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //-----Memperlihatkan data yang telah diinput-----
        gotoxy(41, 15+i);
        printf("DSK-%03d", d.id_diskon);

        gotoxy(53, 15+i);
        printf("%s", d.nama_diskon);

        gotoxy(77, 15+i);
        printf("%.f%%", d.besar_diskon);

        gotoxy(89, 15+i);
        printf("%02d/%02d/%04d",d.tanggal_mulai.hari, d.tanggal_mulai.bulan, d.tanggal_mulai.tahun);

        gotoxy(105, 15+i);
        printf("%02d/%02d/%04d",d.tanggal_akhir.hari, d.tanggal_akhir.bulan, d.tanggal_akhir.tahun);

        i++;
    }
    fclose(arsDiskon);
}

void update_option_diskon(){
    //-----Memberikan warna fill box kuning-----
    setColorBlock(0, 6);
    for (int panjang = 86; panjang <= 123; panjang++){
        for (int lebar = 15; lebar <= 38; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }
    //Frame Opsi
    setColorBlock(0, 7);

    //Frame pojok kiri atas
    gotoPrintASCII(85, 14, 201);

    //Frame atas
    for(int i = 86; i<= 123; i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Frame pojok kanan atas
    gotoPrintASCII(124, 14, 187);

    //Frame kiri
    for (int i = 15;i <= 37; i++){
        gotoPrintASCII(85, i, 186);
    }

    //Frame pojok kiri bawah
    gotoPrintASCII(85, 38, 200);

    //Frame kanan
    for (int i = 15;i <= 37; i++){
        gotoPrintASCII(124, i, 186);
    }

    //Frame pojok kanan bawah
    gotoPrintASCII(124, 38, 188);

    //Frame bawah
    for (int i = 86;i <= 123; i++){
        gotoPrintASCII(i, 38, 205);
    }

    setColorBlock(0, 6);
    gotoPrintText(101, 16, "N A M A");
    gotoPrintText(99, 18, "D I S K O N");
    gotoPrintText(100, 21, "B E S A R");
    gotoPrintText(99, 23, "D I S K O N");
    gotoPrintText(98, 26, "T A N G G A L");
    gotoPrintText(98, 28, "B E R L A K U");
    gotoPrintText(98, 31, "T A N G G A L");
    gotoPrintText(97, 33, "B E R A K H I R");
    gotoPrintText(98, 36, " K E L U A R");
    buttonUpdateDiskonTransition(1);
    getch();
    update_function_diskon();
}

void buttonUpdateDiskonTransition(int optional){
    switch (optional){
    case 1:
        button(94, 15, 19, 4, 0, 6);
        hapusButton(94, 20, 19, 4, 6, 6);
        hapusButton(94, 25, 19, 4, 6, 6);
        hapusButton(94, 30, 19, 4, 6, 6);
        hapusButton(94, 35, 19, 2, 6, 6);
        break;
    case 2:
        hapusButton(94, 15, 19, 4, 6, 6);
        button(94, 20, 19, 4, 0, 6);
        hapusButton(94, 25, 19, 4, 6, 6);
        hapusButton(94, 30, 19, 4, 6, 6);
        hapusButton(94, 35, 19, 2, 6, 6);
        break;
    case 3:
        hapusButton(94, 15, 19, 4, 6, 6);
        hapusButton(94, 20, 19, 4, 6, 6);
        button(94, 25, 19, 4, 0, 6);
        hapusButton(94, 30, 19, 4, 6, 6);
        hapusButton(94, 35, 19, 2, 6, 6);
        break;
    case 4:
        hapusButton(94, 15, 19, 4, 6, 6);
        hapusButton(94, 20, 19, 4, 6, 6);
        hapusButton(94, 25, 19, 4, 6, 6);
        button(94, 30, 19, 4, 0, 6);
        hapusButton(94, 35, 19, 2, 6, 6);
        break;
    case 5:
        hapusButton(94, 15, 19, 4, 6, 6);
        hapusButton(94, 20, 19, 4, 6, 6);
        hapusButton(94, 25, 19, 4, 6, 6);
        hapusButton(94, 30, 19, 4, 6, 6);
        button(94, 35, 19, 2, 0, 6);
        break;
    }
}

void update_function_diskon(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 15, 19, 4, 0, 6);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonUpdateDiskonTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonUpdateDiskonTransition(optional);
            }break;
        case ENTER:
            switch(optional){
        case 1:
            found = 2;break;
        case 2:
            found = 3;break;
        case 3:
            found = 4;break;
        case 4:
            found = 5;break;
        case 5:
            found = 6;break;
            }
        }
    }
    if(found == 2){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 38; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_nama_diskon();
    }
    if(found == 3){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 38; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_besar_diskon();
    }
    if(found == 4){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 38; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_tanggalMulai_diskon();
    }
    if(found == 5){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 38; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_tanggalBerakhir_diskon();
    }
    if(found == 6){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 38; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_diskon();
    }
}

void update_nama_diskon(){
    int id_diskon;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_diskon();
        showDiskon();
        desain_box();
        inputIdDiskon:
        gotoPrintText(144, 11, "E D I T");
        gotoPrintText(137, 13, "N A M A  D I S K O N");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        if(!arsDiskon){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_diskon();
        }
        fclose(arsDiskon);

        //-----Menginput ID diskon untuk divalidasi-----
        do{//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Diskon untuk batal-");
            gotoPrintText(134, 25,"I D  D I S K O N : DSK-");
            gotoxy(157, 25);
            limitIntChar(&id_diskon, 3);

            arsDiskon = fopen("../Data/Diskon.dat", "rb");
            while(fread(&d, sizeof(d), 1, arsDiskon)){
                if(d.id_diskon == id_diskon){
                    found = 1;
                    break;
                }
                else if(id_diskon == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_diskon();
                }
            }
            fclose(arsDiskon);

            if(found == 0){
                MessageBox(NULL, "ID Diskon tidak ditemukan", "ID Diskon tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id diskon yang diinput sebelumnya-----
                setClearArea(157, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        temp = fopen("../Temp/DiskonTemp.dat", "wb");
        while(fread(&d, sizeof(d), 1, arsDiskon)){
            if(d.id_diskon == id_diskon){
                gotoPrintText(134, 27, "N A M A  S A A T  I N I");
                gotoPrintText(134, 28, "=>");
                gotoxy(136, 28);
                printf("%s", d.nama_diskon);
                gotoPrintText(134, 30, "N A M A  T E R B A R U");
                gotoPrintText(134, 31, "=>");
                gotoxy(136, 31);
                limitStrChar(d.nama_diskon, 18);
                if(strcmpi(d.nama_diskon, "x") == 0){
                    setClearArea(157, 25, 3, 1);
                    setClearArea(134, 27, 24, 5);
                    goto inputIdDiskon;
                }
                fwrite(&d, sizeof(d), 1, temp);
            }
            else{
                fwrite(&d, sizeof(d), 1, temp);
            }
        }
        fclose(arsDiskon);
        fclose(temp);

        arsDiskon = fopen("../Data/Diskon.dat","wb");
        temp = fopen("../Temp/DiskonTemp.dat","rb");
        while (fread(&d, sizeof(d), 1, temp)){
            fwrite(&d, sizeof(d), 1, arsDiskon);
        }
        fclose(arsDiskon);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin mengubah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <=44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)

    hideCursor();

    update_option_diskon();
}

void update_besar_diskon(){
    int id_diskon;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_diskon();
        showDiskon();
        desain_box();
        inputIdDiskon:
        gotoPrintText(144, 11, "E D I T");
        gotoPrintText(137, 13, "B E S A R  D I S K O N");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        if(!arsDiskon){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_diskon();
        }
        fclose(arsDiskon);

        //-----Menginput ID diskon untuk divalidasi-----
        do{//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Diskon untuk batal-");
            gotoPrintText(134, 25,"I D  D I S K O N : DSK-");
            gotoxy(157, 25);
            limitIntChar(&id_diskon, 3);

            arsDiskon = fopen("../Data/Diskon.dat", "rb");
            while(fread(&d, sizeof(d), 1, arsDiskon)){
                if(d.id_diskon == id_diskon){
                    found = 1;
                    break;
                }
                else if(id_diskon == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_diskon();
                }
            }
            fclose(arsDiskon);

            if(found == 0){
                MessageBox(NULL, "ID Diskon tidak ditemukan", "ID Diskon tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id diskon yang diinput sebelumnya-----
                setClearArea(157, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        temp = fopen("../Temp/DiskonTemp.dat", "wb");
        while(fread(&d, sizeof(d), 1, arsDiskon)){
            if(d.id_diskon == id_diskon){
                gotoPrintText(134, 27, "B E S A R  S A A T  I N I");
                gotoPrintText(134, 28, "=>");
                gotoxy(136, 28);
                printf("%.f%%", d.besar_diskon);
                besarDiskon:
                gotoPrintText(134, 30, "B E S A R  T E R B A R U");
                gotoPrintText(134, 31, "=>   %");
                gotoxy(136, 31);
                limitFloatChar(&d.besar_diskon, 3);
                if(d.besar_diskon == 0){
                    setClearArea(157, 25, 3, 1);
                    setClearArea(134, 27, 27, 5);
                    goto inputIdDiskon;
                }
                //-----Validasi input besar diskon-----
                if(d.besar_diskon > 100 || d.besar_diskon < 0){
                    setClearArea(136, 31, 3, 1);
                    MessageBox(NULL, "Rentang Diskon 1% - 100%", "Diskon tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto besarDiskon;
                }
                fwrite(&d, sizeof(d), 1, temp);
            }
            else{
                fwrite(&d, sizeof(d), 1, temp);
            }
        }
        fclose(arsDiskon);
        fclose(temp);

        arsDiskon = fopen("../Data/Diskon.dat","wb");
        temp = fopen("../Temp/DiskonTemp.dat","rb");
        while (fread(&d, sizeof(d), 1, temp)){
            fwrite(&d, sizeof(d), 1, arsDiskon);
        }
        fclose(arsDiskon);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin mengubah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <=44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)

    hideCursor();

    update_option_diskon();
}
void update_tanggalMulai_diskon(){
    int id_diskon;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_diskon();
        showDiskon();
        desain_box();
        inputIdDiskon:
        gotoPrintText(142, 11, "E D I T");
        gotoPrintText(132, 13, "T A N G G A L  B E R L A K U");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        if(!arsDiskon){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_diskon();
        }
        fclose(arsDiskon);

        //-----Menginput ID diskon untuk divalidasi-----
        do{//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Diskon untuk batal-");
            gotoPrintText(134, 25,"I D  D I S K O N : DSK-");
            gotoxy(157, 25);
            limitIntChar(&id_diskon, 3);

            arsDiskon = fopen("../Data/Diskon.dat", "rb");
            while(fread(&d, sizeof(d), 1, arsDiskon)){
                if(d.id_diskon == id_diskon){
                    found = 1;
                    break;
                }
                else if(id_diskon == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_diskon();
                }
            }
            fclose(arsDiskon);

            if(found == 0){
                MessageBox(NULL, "ID Diskon tidak ditemukan", "ID Diskon tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id diskon yang diinput sebelumnya-----
                setClearArea(157, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        temp = fopen("../Temp/DiskonTemp.dat", "wb");
        while(fread(&d, sizeof(d), 1, arsDiskon)){
            if(d.id_diskon == id_diskon){
                gotoPrintText(134, 27, "T G L  B E R L A K U  L A M A");
                gotoPrintText(134, 28, "=>  /  /");
                gotoxy(136, 28);
                printf("%02d", d.tanggal_mulai.hari);
                gotoxy(139, 28);
                printf("%02d", d.tanggal_mulai.bulan);
                gotoxy(142, 28);
                printf("%d", d.tanggal_mulai.tahun);

                gotoPrintText(134, 30, "T G L  B E R L A K U  B A R U");
                gotoPrintText(134, 31, "=>  /  /");
                //-----Fungsi input tanggal mulai-----
                int error = 0;
                //Validasi input tanggal
                tanggalMulai:
                do{
                    gotoxy(136, 31);
                    limitDateChar(&d.tanggal_mulai.hari, 2);
                    if(d.tanggal_mulai.hari == 0){
                        setClearArea(157, 25, 3, 1);
                        setClearArea(134, 27, 30, 5);
                        goto inputIdDiskon;
                    }
                        if(d.tanggal_mulai.hari > 31){
                        setClearArea(136, 31, 2, 1);
                        MessageBox(NULL, "Silahkan periksa kembali penulisan tanggal anda", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        error = 1;
                    }
                    else
                    {
                        error = 0;
                    }
                }while(error == 1);

                //Validasi input bulan
                do{
                    gotoxy(139, 31);
                    limitDateChar(&d.tanggal_mulai.bulan, 2);
                    if(d.tanggal_mulai.bulan == 0){
                        setClearArea(157, 25, 3, 1);
                        setClearArea(134, 27, 30, 5);
                        goto inputIdDiskon;
                    }
                        if(d.tanggal_mulai.bulan > 12){
                        setClearArea(139, 31, 2, 1);
                        MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        error = 1;
                    }
                    else if(d.tanggal_mulai.hari > 29  && d.tanggal_mulai.bulan == 2){
                        setClearArea(136, 31, 2, 1);
                        setClearArea(139, 31, 2, 1);
                        MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto tanggalMulai;
                    }
                    else{
                        error = 0;
                    }
                }while (error == 1);


                //Validasi input tahun
                do{
                    time_t now;
                    time(&now);

                    struct tm *local = localtime(&now);

                    gotoxy(142, 31);
                    limitDateChar(&d.tanggal_mulai.tahun, 4);
                    if(d.tanggal_mulai.tahun == 0){
                        setClearArea(157, 25, 3, 1);
                        setClearArea(134, 27, 30, 5);
                        goto inputIdDiskon;
                    }
                    //-----validasi tidak boleh kurang dari tanggal, bulan dan tahun saat ini-----
                    if(d.tanggal_mulai.tahun < local->tm_year + 1900 || (d.tanggal_mulai.tahun == local->tm_year + 1900 && d.tanggal_mulai.bulan < local->tm_mon + 1) || (d.tanggal_mulai.tahun == local->tm_year + 1900 && d.tanggal_mulai.bulan == local->tm_mon + 1 && d.tanggal_mulai.hari < local->tm_mday)) {
                        setClearArea(136, 31, 2, 1);
                        setClearArea(139, 31, 2, 1);
                        setClearArea(142, 31, 4, 1);
                        MessageBox(NULL, "Waktu berlaku tidak boleh kurang dari tanggal saat ini", "Waktu berlaku tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto tanggalMulai;
                    }

                    //-----validasi tidak boleh lebih dari waktu berakhir-----
                    else if(d.tanggal_mulai.tahun > d.tanggal_akhir.tahun || (d.tanggal_mulai.tahun == d.tanggal_akhir.tahun && d.tanggal_mulai.bulan > d.tanggal_akhir.bulan) || (d.tanggal_mulai.tahun == d.tanggal_akhir.tahun && d.tanggal_mulai.bulan == d.tanggal_akhir.bulan && d.tanggal_mulai.hari > d.tanggal_akhir.hari)){
                        setClearArea(136, 31, 2, 1);
                        setClearArea(139, 31, 2, 1);
                        setClearArea(142, 31, 4, 1);
                        MessageBox(NULL, "Waktu berlaku tidak boleh lebih dari waktu berakhir", "Waktu berlaku tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto tanggalMulai;
                    }

                    //-----Validasi tahun kabisat-----
                    else if (d.tanggal_mulai.bulan == 2 && d.tanggal_mulai.hari > 28 && kabisat(d.tanggal_mulai.tahun) == false){
                        setClearArea(136, 31, 2, 1);
                        setClearArea(139, 31, 2, 1);
                        setClearArea(142, 31, 4, 1);
                        MessageBox(NULL, "Bukan Tahun Kabisat, silahkan masukkan ulang tanggal", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto tanggalMulai;
                    }
                    else{
                        error = 0;
                    }
                }while (error == 1);
                fwrite(&d, sizeof(d), 1, temp);
            }
            else{
                fwrite(&d, sizeof(d), 1, temp);
            }
        }
        fclose(arsDiskon);
        fclose(temp);

        arsDiskon = fopen("../Data/Diskon.dat","wb");
        temp = fopen("../Temp/DiskonTemp.dat","rb");
        while (fread(&d, sizeof(d), 1, temp)){
            fwrite(&d, sizeof(d), 1, arsDiskon);
        }
        fclose(arsDiskon);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin mengubah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <=44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)

    hideCursor();

    update_option_diskon();
}
void update_tanggalBerakhir_diskon(){
    int id_diskon;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_diskon();
        showDiskon();
        desain_box();
        inputIdDiskon:
        gotoPrintText(144, 11, "E D I T");
        gotoPrintText(132, 13, "T A N G G A L   B E R A K H I R");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        if(!arsDiskon){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_diskon();
        }
        fclose(arsDiskon);

        //-----Menginput ID diskon untuk divalidasi-----
        do{//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Diskon untuk batal-");
            gotoPrintText(134, 25,"I D  D I S K O N : DSK-");
            gotoxy(157, 25);
            limitIntChar(&id_diskon, 3);

            arsDiskon = fopen("../Data/Diskon.dat", "rb");
            while(fread(&d, sizeof(d), 1, arsDiskon)){
                if(d.id_diskon == id_diskon){
                    found = 1;
                    break;
                }
                else if(id_diskon == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_diskon();
                }
            }
            fclose(arsDiskon);

            if(found == 0){
                MessageBox(NULL, "ID Diskon tidak ditemukan", "ID Diskon tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id diskon yang diinput sebelumnya-----
                setClearArea(157, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        temp = fopen("../Temp/DiskonTemp.dat", "wb");
        while(fread(&d, sizeof(d), 1, arsDiskon)){
            if(d.id_diskon == id_diskon){
                gotoPrintText(134, 27, "T G L  B E R A K H I R  L A M A");
                gotoPrintText(134, 28, "=>  /  /");
                gotoxy(136, 28);
                printf("%02d", d.tanggal_akhir.hari);
                gotoxy(139, 28);
                printf("%02d", d.tanggal_akhir.bulan);
                gotoxy(142, 28);
                printf("%d", d.tanggal_akhir.tahun);

                gotoPrintText(134, 30, "T G L  B E R A K H I R  B A R U");
                gotoPrintText(134, 31, "=>  /  /");
                //-----Fungsi input tanggal mulai-----
                int error = 0;
                //Validasi input tanggal
                tanggalBerakhir:
                do{
                    gotoxy(136, 31);
                    limitDateChar(&d.tanggal_akhir.hari, 2);
                    if(d.tanggal_akhir.hari == 0){
                        setClearArea(157, 25, 3, 1);
                        setClearArea(134, 27, 32, 5);
                        goto inputIdDiskon;
                    }
                        if(d.tanggal_akhir.hari > 31){
                        setClearArea(136, 31, 2, 1);
                        MessageBox(NULL, "Silahkan periksa kembali penulisan tanggal anda", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        error = 1;
                    }
                    else
                    {
                        error = 0;
                    }
                }while(error == 1);

                //Validasi input bulan
                do{
                    gotoxy(139, 31);
                    limitDateChar(&d.tanggal_akhir.bulan, 2);
                    if(d.tanggal_akhir.bulan == 0){
                        setClearArea(157, 25, 3, 1);
                        setClearArea(134, 27, 32, 5);
                        goto inputIdDiskon;
                    }
                    if(d.tanggal_akhir.bulan > 12){
                        setClearArea(139, 31, 2, 1);
                        MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        error = 1;
                    }
                    else if(d.tanggal_akhir.hari > 29  && d.tanggal_akhir.bulan == 2){
                        setClearArea(136, 31, 2, 1);
                        setClearArea(139, 31, 2, 1);
                        MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto tanggalBerakhir;
                    }
                    else{
                        error = 0;
                    }
                }while (error == 1);


                //Validasi input tahun
                do{
                    time_t now;
                    time(&now);

                    struct tm *local = localtime(&now);

                    gotoxy(142, 31);
                    limitDateChar(&d.tanggal_akhir.tahun, 4);
                    if(d.tanggal_akhir.tahun == 0){
                        setClearArea(157, 25, 3, 1);
                        setClearArea(134, 27, 32, 5);
                        goto inputIdDiskon;
                    }
                    //-----validasi tidak boleh kurang dari tanggal, bulan dan tahun saat ini-----
                    if(d.tanggal_akhir.tahun < local->tm_year + 1900 || (d.tanggal_akhir.tahun == local->tm_year + 1900 && d.tanggal_akhir.bulan < local->tm_mon + 1) || (d.tanggal_akhir.tahun == local->tm_year + 1900 && d.tanggal_akhir.bulan == local->tm_mon + 1 && d.tanggal_akhir.hari < local->tm_mday)) {
                        setClearArea(136, 31, 2, 1);
                        setClearArea(139, 31, 2, 1);
                        setClearArea(142, 31, 4, 1);
                        MessageBox(NULL, "Waktu berakhir tidak boleh kurang dari tanggal saat ini", "Waktu berakhir tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto tanggalBerakhir;
                    }

                    //-----validasi tidak boleh kurang dari waktu mulai-----
                    else if(d.tanggal_akhir.tahun < d.tanggal_mulai.tahun || (d.tanggal_akhir.tahun == d.tanggal_mulai.tahun && d.tanggal_akhir.bulan < d.tanggal_mulai.bulan) || (d.tanggal_akhir.tahun == d.tanggal_mulai.tahun && d.tanggal_akhir.bulan == d.tanggal_mulai.bulan && d.tanggal_akhir.hari < d.tanggal_mulai.hari)){
                        setClearArea(136, 31, 2, 1);
                        setClearArea(139, 31, 2, 1);
                        setClearArea(142, 31, 4, 1);
                        MessageBox(NULL, "Waktu berakhir tidak boleh kurang dari waktu berlaku", "Waktu berakhir tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto tanggalBerakhir;
                    }

                    //-----Validasi tahun kabisat-----
                    else if (d.tanggal_akhir.bulan == 2 && d.tanggal_akhir.hari > 28 && kabisat(d.tanggal_akhir.tahun) == false){
                        setClearArea(136, 31, 2, 1);
                        setClearArea(139, 31, 2, 1);
                        setClearArea(142, 31, 4, 1);
                        MessageBox(NULL, "Bukan Tahun Kabisat, silahkan masukkan ulang tanggal", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto tanggalBerakhir;
                    }
                    else{
                        error = 0;
                    }
                }while (error == 1);
                fwrite(&d, sizeof(d), 1, temp);
            }
            else{
                fwrite(&d, sizeof(d), 1, temp);
            }
        }
        fclose(arsDiskon);
        fclose(temp);

        arsDiskon = fopen("../Data/Diskon.dat","wb");
        temp = fopen("../Temp/DiskonTemp.dat","rb");
        while (fread(&d, sizeof(d), 1, temp)){
            fwrite(&d, sizeof(d), 1, arsDiskon);
        }
        fclose(arsDiskon);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin mengubah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <=44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)

    hideCursor();

    update_option_diskon();
}

void deleteDiskon(){
    int id_diskon;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_diskon();
        showDiskon();
        desain_box();
        gotoPrintText(143, 11, "H A P U S");
        gotoPrintText(141, 13, "D I S K O N");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        if(!arsDiskon){
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 168; panjang++){
                for (int lebar = 10; lebar <=46; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_diskon();
        }
        fclose(arsDiskon);

        //-----Menginput ID diskon untuk divalidasi-----
        do{//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Diskon untuk batal-");
            gotoPrintText(134, 25,"I D  D I S K O N : DSK-");
            id_diskon :
            gotoxy(157, 25);
            limitIntChar(&id_diskon, 3);

            arsDiskon = fopen("../Data/Diskon.dat", "rb");
            while(fread(&d, sizeof(d), 1, arsDiskon)){
                if(d.id_diskon == id_diskon){
                    found = 1;
                    break;
                }
                else if(id_diskon == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=45; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_jenisMenu();
                }
            }
            fclose(arsDiskon);

            if(found == 0){
                MessageBox(NULL, "ID diskon tidak ditemukan", "ID diskon tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id diskon yang diinput sebelumnya-----
                setClearArea(157, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID diskon yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        temp = fopen("../Temp/DiskonTemp.dat", "wb");
        while(fread(&d, sizeof(d), 1, arsDiskon)){
            if(d.id_diskon != id_diskon){
                fwrite(&d, sizeof(d), 1, temp);
            }
        }
        fclose(arsDiskon);
        fclose(temp);

        arsDiskon = fopen("../Data/Diskon.dat","wb");
        temp = fopen("../Temp/DiskonTemp.dat","rb");
        while (fread(&d, sizeof(d), 1, temp)){
            fwrite(&d, sizeof(d), 1, arsDiskon);
        }
        fclose(arsDiskon);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin menghapus data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        hideCursor();
    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)

    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 10; lebar <=44; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }
    CRUD_option();
    CRUD_function_diskon();
}