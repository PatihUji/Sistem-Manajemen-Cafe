void desain_tabel_menu();
void formMenu();
void insertMenu();
void showMenu();
void deleteMenu();
void update_option_menu();
void buttonUpdateMenuTransition(int optional);
void update_function_menu();
void update_nama_menu();
void update_harga_menu();

void desain_tabel_menu(){
    /*-----Mewarnai fillbox-----*/
    setColorBlock(0, 6);
    for (int panjang = 37; panjang <= 119; panjang++){
        for (int lebar = 10; lebar <= 14; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    /*-----Frame tabel-----*/
    //Frame pojok kiri atas
    gotoPrintASCII(37, 10, 201);

    //Frame atas pertama
    for (int i = 38;i <= 48;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas pertama
    gotoPrintASCII(49, 10, 203);

    //Frame atas kedua
    for (int i = 50;i <= 80;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas kedua
    gotoPrintASCII(81, 10, 203);

    //Frame atas ketiga
    for (int i = 82;i <= 106;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas ketiga
    gotoPrintASCII(107, 10, 203);

    //Frame atas keempat
    for (int i = 108;i <= 118;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame kanan atas
    gotoPrintASCII(119, 10, 187);

    //Frame kanan
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(119, i, 186);
    }

    //Frame kiri
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(37, i, 186);
    }

    //Frame vertikal 1
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(49, i, 186);
    }

    //Frame vertikal 2
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(81, i, 186);
    }

    //Frame vertikal 3
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(107, i, 186);
    }

    //Frame kiri bawah
    gotoPrintASCII(37, 14, 204);

    //Frame kanan bawah
    gotoPrintASCII(119, 14, 185);

    //Frame bawah pertama
    for (int i = 38;i <= 48;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah pertama
    gotoPrintASCII(49, 14, 206);

    //Frame bawah kedua
    for (int i = 50;i <= 80;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah kedua
    gotoPrintASCII(81, 14, 206);

    //Frame bawah ketiga
    for (int i = 82;i <= 106;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah ketiga
        gotoPrintASCII(107, 14, 206);

    //Frame bawah keempat
    for (int i = 108;i <= 118;i++){
        gotoPrintASCII(i, 14, 205);
    }

    /*-----Atribut Tabel-----*/
     gotoPrintText(42, 11, "I D");
     gotoPrintText(40, 13, "M E N U");
     gotoPrintText(62, 11, "N A M A");
     gotoPrintText(62, 13, "M E N U");
     gotoPrintText(91, 12, "H A R G A");
     gotoPrintText(112, 11,"I D");
     gotoPrintText(109, 13, "J E N I S");
}

void formMenu(){
    desain_tabel_jenisMenu();
    showJenisMenu();
    setColorBlock(0, 6);

    //-----Mewarnai fillbox-----
    for (int panjang = 121; panjang <= 165; panjang++){
        for (int lebar = 10; lebar <= 43; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //Frame pojok kiri atas
    gotoPrintASCII(120, 10, 203);

    //Frame atas
    for (int i = 121;i <= 165;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame pojok kanan atas
    gotoPrintASCII(166, 10, 187);

    //Frame kiri bagian atas
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(120, i, 186);
    }

    //Frame kanan bagian atas
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(166, i, 186);
    }

    //Frame pojok kiri tengah
    gotoPrintASCII(120, 14, 206);

    //Frame tengah
    for (int i = 121;i <= 165;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Frame pojok kiri tengah
    gotoPrintASCII(166, 14, 185);

    //Frame kiri bagian bawah
    for (int i = 15;i <= 43;i++){
        gotoPrintASCII(120, i, 186);
    }

    //Frame kanan bagian bawah
    for (int i = 15;i <= 43;i++){
        gotoPrintASCII(166, i, 186);
    }

    //Frame pojok kiri bawah
    gotoPrintASCII(120, 44, 200);

    //Frame pojok kanan bawah
    gotoPrintASCII(166, 44, 188);

    //Frame bawah
    for (int i = 121;i <= 165;i++){
        gotoPrintASCII(i, 44, 205);
    }

    gotoPrintText(139, 11, "T A M B A H");
    gotoPrintText(137, 13, "D A T A  M E N U ");
    gotoPrintText(122, 15, "I D  M E N U       : MNU-");
    gotoPrintText(122, 17, "N A M A  M E N U   :");
    gotoPrintText(122, 19, "H A R G A  M E N U : Rp");
    gotoPrintText(122, 21, "J E N I S  M E N U : JNM-");
}

//-----Fungsi Tambah Data-----
void insertMenu(){
    /*-----Deklarasi-----*/
    int response;
    do
    {//Konfiramsi apakah ingin menambah data lagi (Pembuka)
        gotoPrintText(124, 40, "-Input [x] pada Nama Menu untuk batal-");
        m.id_menu = 1;
        arsMenu = fopen("../Data/Menu.dat", "a+b");

        if (arsMenu != NULL) {
            while (fread(&m, sizeof(m), 1, arsMenu)) {
                m.id_menu += 1;
            }
        }

        //-----Fungsi input ID menu-----
        gotoxy(147, 15);
        printf("%03d", m.id_menu);

        //-----Fungsi input nama menu-----
        gotoxy(143, 17);
        fflush(stdin);
        limitStrChar(m.nama_menu, 18);
        if(strcmpi("x", m.nama_menu)==0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_menu();
        }

        //Validasi harga menu
        do {
            //-----Fungsi input harga menu-----
            limitMoneyChar(&m.hargaMenu, 4, 6, 146, 19);
            setClearArea(145, 19, 12, 1);
            gotoxy(143, 19);
            rupiah(m.hargaMenu);
            if (m.hargaMenu < 5000) {
                setClearArea(145, 19, 12, 1);
                MessageBox(NULL, "Harga tidak valid, silahkan input kembali", "Harga Minimal Rp5000", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            }
        }while (m.hargaMenu < 5000);

        //------Fungsi input id jenis menu------
        //Validasi input id jenis menu
        int found = 0;
        do
        {
            gotoxy(147, 21);
            fflush(stdin);
            limitIntChar(&m.id_jenisMenu, 3);
            arsJenisMenu = fopen("../Data/Jenis Menu.dat", "rb");
            while(fread(&jm,sizeof(jm),1,arsJenisMenu)){
                if(m.id_jenisMenu == jm.id_jenisMenu){
                    found = 1;
                    break;
                }
            }
            fclose(arsJenisMenu);
            if(found == 1){
                break;
            }
            else{
                MessageBox(NULL, "Jenis Menu tidak ada, silahkan input kembali", "Invalid ID Jenis Menu", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(147, 21, 3, 1);
            }

        }while (1);

        fwrite(&m, sizeof(m), 1, arsMenu);
        fclose(arsMenu);

        response = MessageBox(NULL, "Apakah Anda ingin menambahkan menu lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        setClearArea(147, 15, 3, 1);
        setClearArea(143, 17, 18, 1);
        setClearArea(145, 19, 12, 1);
        setClearArea(147, 21, 3, 1);
    }while (response == IDYES);//Konfirmasi apakah ingin menambah data lagi (Penutup)
}

void showMenu(){
    /*-----Deklarasi-----*/
    int i = 0;

    /*-----Algoritma-----*/
    //Menampilkan data menu yang telah di inputkan
    arsMenu = fopen("../Data/Menu.dat", "rb");
    while (fread(&m, sizeof(m), 1, arsMenu) == 1) {
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
        /*-----Mewarnai fillbox-----*/
        setColorBlock(0, 6);
        for (int panjang = 37; panjang <= 119; panjang++){
            for (int lebar = 15+i; lebar <= 15+i+1; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        /*------Membuat tabel-----*/
        //Buat frame vertikal tabel
        for(int j = 14; j <= 15+i; j++){
            gotoPrintASCII(37, j, 186);
            gotoPrintASCII(49, j, 186);
            gotoPrintASCII(81, j, 186);
            gotoPrintASCII(107, j, 186);
            gotoPrintASCII(119, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(37, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(49, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kedua
        gotoPrintASCII(81, 15+i+1, 202);

        //Buat frame pembatas bawah atribut ketiga
        gotoPrintASCII(107, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(119, 15+i+1, 188);

        //Buat frame bawah pertama
        for (int j = 38;j <= 48;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 50;j <= 80;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketiga
        for (int j = 82;j <= 106;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah keempat
        for (int j = 108;j <= 118;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        /*-----Menampilkan Data Menu-----*/
        gotoxy(40, 15+i);
        printf("MNU-%03d", m.id_menu);
        gotoxy(56, 15+i);
        printf("%s", m.nama_menu);
        gotoxy(88, 15+i);
        rupiah(m.hargaMenu);
        gotoxy(110, 15+i);
        printf("JNM-%03d", m.id_jenisMenu);

        i++;
     }
    fclose(arsMenu);
}

void update_option_menu(){
    //-----Memberikan warna fill box kuning-----
    setColorBlock(0, 6);
    for (int panjang = 86; panjang <= 123; panjang++){
        for (int lebar = 15; lebar <= 34; lebar++){
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
    for (int i = 15;i <= 34; i++){
        gotoPrintASCII(85, i, 186);
    }

    //Frame pojok kiri bawah
    gotoPrintASCII(85, 35, 200);

    //Frame kanan
    for (int i = 15;i <= 34; i++){
        gotoPrintASCII(124, i, 186);
    }

    //Frame pojok kanan bawah
    gotoPrintASCII(124, 35, 188);

    //Frame bawah
    for (int i = 86;i <= 123; i++){
        gotoPrintASCII(i, 35, 205);
    }

    setColorBlock(0, 6);
    gotoPrintText(97, 19, "N A M A  M E N U");
    gotoPrintText(96, 24, "H A R G A  M E N U");
    gotoPrintText(99, 32, " K E L U A R");
    update_function_menu();
}

void buttonUpdateMenuTransition(int optional){
    switch (optional){
    case 1:
        button(94, 18, 21, 2, 0, 6);
        hapusButton(94, 23, 22, 2, 6, 6);
        hapusButton(94, 31, 22, 2, 6, 6);
        break;
    case 2:
        hapusButton(94, 18, 21, 2, 6, 6);
        button(94, 23, 22, 2, 0, 6);
        hapusButton(94, 31, 22, 2, 6, 6);
        break;
    case 3:
        hapusButton(94, 18, 21, 2, 6, 6);
        hapusButton(94, 23, 22, 2, 6, 6);
        button(94, 31, 22, 2, 0, 6);
        break;
    }
}

void update_function_menu(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 18, 21, 2, 0, 6);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 3){
                optional +=1;
                buttonUpdateMenuTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonUpdateMenuTransition(optional);
            }break;
        case ENTER:
            switch(optional){
        case 1:
            found = 2;break;
        case 2:
            found = 3;break;
        case 3:
            found = 4;break;
            }
        }
    }
    if(found == 2){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_nama_menu();
    }
    if(found == 3){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_harga_menu();
    }
    if(found == 4){
        //-----Menghapus tabel-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_menu();
    }
}

void update_nama_menu(){
    int id_menu;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_menu();
        showMenu();
        desain_box();
        inputIdMenu:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(136, 13, "N A M A  M E N U");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsMenu = fopen("../Data/Menu.dat", "rb");
        if(!arsMenu){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_menu();
        }
        fclose(arsMenu);

        //-----Menginput ID Menu untuk divalidasi-----
        do{//Memvalidasi apakah ID Menu yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Menu untuk batal-");
            gotoPrintText(135, 25,"I D  M E N U : MNU-");
            gotoxy(154, 25);
            limitIntChar(&id_menu, 3);

            arsMenu = fopen("../Data/menu.dat", "rb");
            while(fread(&m, sizeof(m), 1, arsMenu)){
                if(m.id_menu == id_menu){
                    found = 1;
                    break;
                }
                else if(id_menu == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_menu();
                }
            }
            fclose(arsMenu);

            if(found == 0){
                MessageBox(NULL, "ID Menu tidak ditemukan", "ID Menu tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Menu yang diinput sebelumnya-----
                setClearArea(154, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Menu yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsMenu = fopen("../Data/Menu.dat", "rb");
        temp = fopen("../Temp/MenuTemp.dat", "wb");
        while(fread(&m, sizeof(m), 1, arsMenu)){
            if(m.id_menu == id_menu){
                gotoPrintText(135, 27, "N A M A  M E N U");
                gotoPrintText(135, 28, "=>");
                gotoxy(138, 28);
                printf("%s", m.nama_menu);
                gotoPrintText(135, 30, "M E N U  B A R U");
                gotoPrintText(135, 31, "=>");
                gotoxy(138, 31);
                limitStrChar(m.nama_menu, 18);
                if(strcmpi(m.nama_menu, "x")==0){
                    setClearArea(154, 25, 3, 1);
                    setClearArea(135, 27, 17, 5);
                    goto inputIdMenu;
                }

                fwrite(&m, sizeof(m), 1, temp);
            }
            else{
                fwrite(&m, sizeof(m), 1, temp);
            }
        }
        fclose(arsMenu);
        fclose(temp);

        arsMenu = fopen("../Data/Menu.dat","wb");
        temp = fopen("../Temp/MenuTemp.dat","rb");
        while (fread(&m, sizeof(m), 1, temp)){
            fwrite(&m, sizeof(m), 1, arsMenu);
        }
        fclose(arsMenu);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin mengubah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)

    hideCursor();
    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 10; lebar <=44; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }
    update_option_menu();
}

void update_harga_menu(){
    int id_menu;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_menu();
        showMenu();
        desain_box();
        inputIdMenu:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(138, 13, "H A R G A  M E N U");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsMenu = fopen("../Data/Menu.dat", "rb");
        if(!arsMenu){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_menu();
        }
        fclose(arsMenu);

        //-----Menginput ID Menu untuk divalidasi-----
        do{//Memvalidasi apakah ID Menu yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Menu untuk batal-");
            gotoPrintText(135, 25,"I D  M E N U : MNU-");
            gotoxy(154, 25);
            limitIntChar(&id_menu, 3);

            arsMenu = fopen("../Data/menu.dat", "rb");
            while(fread(&m, sizeof(m), 1, arsMenu)){
                if(m.id_menu == id_menu){
                    found = 1;
                    break;
                }
                else if(id_menu == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_menu();
                }
            }
            fclose(arsMenu);

            if(found == 0){
                MessageBox(NULL, "ID Menu tidak ditemukan", "ID Menu tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Menu yang diinput sebelumnya-----
                setClearArea(154, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Menu yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsMenu = fopen("../Data/Menu.dat", "rb");
        temp = fopen("../Temp/MenuTemp.dat", "wb");
        while(fread(&m, sizeof(m), 1, arsMenu)){
            if(m.id_menu == id_menu){
                gotoPrintText(135, 27, "H A R G A  L A M A");
                gotoPrintText(135, 28, "=>");
                gotoxy(137, 28);
                rupiah(m.hargaMenu);
                gotoPrintText(135, 30, "H A R G A  B A R U");
                gotoPrintText(135, 31, "=>");
                inputHargaMenu:
                gotoPrintText(137, 31, "Rp");
                limitMoneyChar(&m.hargaMenu, 1, 6, 140, 31);
                setClearArea(137, 31, 13, 1);
                if(m.hargaMenu == 0){
                    setClearArea(154, 25, 3, 1);
                    setClearArea(135, 27, 19, 5);
                    goto inputIdMenu;
                }
                if(m.hargaMenu > 0 && m.hargaMenu < 5000){
                    setClearArea(140, 31, 13, 1);
                    MessageBox(NULL, "Harga tidak valid, silahkan input kembali", "Harga Minimal Rp5000", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto inputHargaMenu;
                }
                gotoxy(138, 31);
                rupiah(m.hargaMenu);
                fwrite(&m, sizeof(m), 1, temp);
            }
            else{
                fwrite(&m, sizeof(m), 1, temp);
            }
        }
        fclose(arsMenu);
        fclose(temp);

        arsMenu = fopen("../Data/Menu.dat","wb");
        temp = fopen("../Temp/MenuTemp.dat","rb");
        while (fread(&m, sizeof(m), 1, temp)){
            fwrite(&m, sizeof(m), 1, arsMenu);
        }
        fclose(arsMenu);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin mengubah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)

    hideCursor();
    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 10; lebar <=44; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }
    update_option_menu();
}

void deleteMenu(){
    int id_menu;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_menu();
        showMenu();
        desain_box();
        gotoPrintText(143, 11, "H A P U S");
        gotoPrintText(144, 13, "M E N U");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsMenu = fopen("../Data/Menu.dat", "rb");
        if(!arsMenu){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_menu();
        }
        fclose(arsMenu);

        //-----Menginput ID Menu untuk divalidasi-----
        do{//Memvalidasi apakah ID Menu yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Menu untuk batal-");
            gotoPrintText(135, 25,"I D  M E N U : MNU-");
            id_menu:
            gotoxy(154, 25);
            limitIntChar(&id_menu, 3);

            arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
            int i = 1;
            while(fread(&pm,sizeof(pm),1,arsPktMenu)){
                if(id_menu == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_menu();
                }
                if(id_menu == pm.id_menu[i]){
                    MessageBox(NULL, "Tidak didapat dihapus karena terikat dengan data lain", "Foreign Key Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    setClearArea(154, 25, 3, 1);
                    goto id_menu;
                }
                i++;
            }

            arsMenu = fopen("../Data/menu.dat", "rb");
            while(fread(&m, sizeof(m), 1, arsMenu)){
                if(m.id_menu == id_menu){
                    found = 1;
                    break;
                }

            }
            fclose(arsMenu);

            if(found == 0){
                MessageBox(NULL, "ID Menu tidak ditemukan", "ID Menu tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Menu yang diinput sebelumnya-----
                setClearArea(154, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Menu yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsMenu = fopen("../Data/Menu.dat", "rb");
        temp = fopen("../Temp/MenuTemp.dat", "wb");
        while(fread(&m, sizeof(m), 1, arsMenu)){
            if(m.id_menu != id_menu){
                fwrite(&m, sizeof(m), 1, temp);
            }
        }
        fclose(arsMenu);
        fclose(temp);

        arsMenu = fopen("../Data/Menu.dat","wb");
        temp = fopen("../Temp/MenuTemp.dat","rb");
        while (fread(&m, sizeof(m), 1, temp)){
            fwrite(&m, sizeof(m), 1, arsMenu);
        }
        fclose(arsMenu);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin menghapus data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <=44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
    }while(response == IDYES);//Konfirmasi untuk ingin menghapus data lagi atau tidak (Penutup)

    hideCursor();
    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 10; lebar <=44; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }
    CRUD_option();
    CRUD_function_menu();
}