void desain_tabel_paket();
void tabel_detail_paket();
void formPaket();
void insertPaket();
void showPaket();
void deletePaket();
void update_option_paket();
void buttonUpdatePaketTransition(int optional);
void update_function_paket();
void update_nama_paket();
void update_harga_paket();
void detailPaketMenu();

void desain_tabel_paket(){
//-----Mewarnai fillbox-----
    setColorBlock(0, 6);
    for (int panjang = 37; panjang <= 102; panjang++){
        for (int lebar = 10; lebar <= 14; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Frame tabel-----
    //Frame kiri atas
    gotoPrintASCII(37, 10, 201);

    //Frame atas pertama
    for (int i = 38;i <= 52;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas pertama
    gotoPrintASCII(53, 10, 203);

    //Frame atas kedua
    for (int i = 54;i <= 79;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas kedua
    gotoPrintASCII(80, 10, 203);

    //Frame atas ketiga
    for (int i = 81;i <= 101;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame kanan atas
    gotoPrintASCII(102, 10, 187);

    //Frame kiri
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(37, i, 186);
    }

    //Frame kanan
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(102, i, 186);
    }

    //Frame vertikal 1
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(53, i, 186);
    }

    //Frame vertikal 2
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(80, i, 186);
    }

    //Frame kiri bawah
    gotoPrintASCII(37, 14, 204);

    //Frame Kanan bawah
    gotoPrintASCII(102, 14, 185);

    //Frame bawah pertama
    for (int i = 38;i <= 52;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah pertama
    gotoPrintASCII(53, 14, 206);

    //Frame bawah kedua
    for (int i = 54;i <= 79;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah kedua
    gotoPrintASCII(80, 14, 206);

    //Frame bawah ketiga
    for (int i = 81;i <= 101;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //-----Atribut Tabel-----
    gotoPrintText(44, 11, "I D");
    gotoPrintText(41, 13, "P A K E T");
    gotoPrintText(64, 11, "N A M A");
    gotoPrintText(63, 13, "P A K E T");
    gotoPrintText(87, 12, "H A R G A");

    /*-----Deklarasi-----*/
    int i = 0;

    /*-----Algoritma-----*/

    arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
    while (fread(&pm, sizeof(pm), 1, arsPktMenu) == 1) {
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
        for (int panjang = 37; panjang <= 102; panjang++){
            for (int lebar = 15+i; lebar <= 15+i+1; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
         //------Buat tabel-----

        //Buat frame vertikal tabel
        for(int j = 14; j <= 15+i; j++){
            gotoPrintASCII(37, j, 186);
            gotoPrintASCII(53, j, 186);
            gotoPrintASCII(80, j, 186);
            gotoPrintASCII(102, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(37, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(53, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kedua
        gotoPrintASCII(80, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(102, 15+i+1, 188);


        //Buat frame bawah pertama
        for (int j = 38;j <= 52;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 54;j <= 79;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketiga
        for (int j = 81;j <= 101;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        /*-----Menampilkan Data-----*/
        gotoxy(42, 15 + i);
        printf("PKT-%03d", pm.id_paket);
        gotoxy(60, 15 + i);
        printf("%s", pm.nama_paket);
        gotoxy(84, 15 + i);
        rupiah(pm.harga);
        i++;
    }
    fclose(arsPktMenu);
}

void tabel_detail_paket(){
    //-----Mewarnai fillbox-----
    setColorBlock(0, 6);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 10; lebar <= 14; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Frame tabel-----
    //Frame kiri atas
    gotoPrintASCII(37, 10, 201);

    //Frame atas pertama
    for (int i = 38;i <= 52;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas pertama
    gotoPrintASCII(53, 10, 203);

    //Frame atas kedua
    for (int i = 54;i <= 79;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas kedua
    gotoPrintASCII(80, 10, 203);

    //Frame atas ketiga
    for (int i = 81;i <= 101;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas ketiga
    gotoPrintASCII(102, 10, 203);

    //Frame atas keempat
    for (int i = 103;i <= 117;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas keempat
    gotoPrintASCII(118, 10, 203);

    //Frame atas kelima
    for (int i = 119;i <= 133;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas kelima
    gotoPrintASCII(134, 10, 203);

    //Frame atas keenam
    for (int i = 135;i <= 149;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas keenam
    gotoPrintASCII(150, 10, 203);

    //Frame atas ketujuh
    for (int i = 151;i <= 165;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame kanan atas
    gotoPrintASCII(166, 10, 187);

    //Frame kanan
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(166, i, 186);
    }

    //Frame kiri
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(37, i, 186);
    }

    //Frame vertikal 1
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(53, i, 186);
    }

    //Frame vertikal 2
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(80, i, 186);
    }

    //Frame vertikal 3
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(102, i, 186);
    }

    //Frame vertikal 4
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(118, i, 186);
    }

    //Frame vertikal 5
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(134, i, 186);
    }

    //Frame vertikal 6
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(150, i, 186);
    }

    //Frame kiri bawah
    gotoPrintASCII(37, 14, 204);

    //Frame kanan bawah
    gotoPrintASCII(166, 14, 185);

    //Frame bawah pertama
    for (int i = 38;i <= 52;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah pertama
    gotoPrintASCII(53, 14, 206);

    //Frame bawah kedua
    for (int i = 54;i <= 79;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah kedua
    gotoPrintASCII(80, 14, 206);

    //Frame bawah ketiga
    for (int i = 81;i <= 101;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah ketiga
    gotoPrintASCII(102, 14, 206);

    //Frame bawah keempat
    for (int i = 103;i <= 117;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah keempat
    gotoPrintASCII(118, 14, 206);

    //Frame bawah kelima
    for (int i = 119;i <= 133;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah kelima
    gotoPrintASCII(134, 14, 206);

    //Frame bawah keenam
    for (int i = 135;i <= 149;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah keenam
    gotoPrintASCII(150, 14, 206);

    //Frame bawah ketujuh
    for (int i = 151;i <= 165;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //-----Atribut Tabel-----
    gotoPrintText(44, 11, "I D");
    gotoPrintText(41, 13, "P A K E T");
    gotoPrintText(64, 11, "N A M A");
    gotoPrintText(63, 13, "P A K E T");
    gotoPrintText(87, 12, "H A R G A");
    gotoPrintText(106, 12, "M E N U  1");
    gotoPrintText(122, 12, "M E N U  2");
    gotoPrintText(138, 12, "M E N U  3");
    gotoPrintText(154, 12, "M E N U  4");
}

void formPaket(){
    desain_tabel_menu();
    showMenu();
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

    gotoPrintText(137, 11, "T A M B A H");
    gotoPrintText(135, 13, "D A T A  P A K E T ");
    gotoPrintText(122, 15, "I D  P A K E T       : PKT-");
    gotoPrintText(122, 17, "N A M A  P A K E T   : ");
    gotoPrintText(122, 19, "J U M L A H  M E N U : ");
    gotoPrintText(122, 29, "H A R G A  P A K E T : Rp");
}

void insertPaket(){
    /*-----Deklarasi-----*/
    int response;
    int jumlah;
    do
    {//Konfiramsi apakah ingin menambah data lagi (Pembuka)
        gotoPrintText(124, 40, "-Input [x] pada Nama Menu untuk batal-");
        pm.id_paket = 1;
        arsPktMenu = fopen("../Data/Paket Menu.dat", "a+b");

        if (arsPktMenu != NULL) {
            while (fread(&pm, sizeof(pm), 1, arsPktMenu)) {
                pm.id_paket += 1;
            }
        }

        //-----Fungsi input ID menu-----
        gotoxy(149, 15);
        printf("%03d", pm.id_paket);

        //-----Fungsi input nama paket menu-----
        gotoxy(145, 17);
        fflush(stdin);
        limitStrChar(pm.nama_paket, 18);
        if(strcmpi("x", pm.nama_paket)==0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_paketMenu();
        }

        //-----Fungsi input jumlah menu-----
        //Input Jumlah Menu
        cp2: //Check Point
        gotoxy(145, 19);
        fflush(stdin);
        limitIntChar(&jumlah, 1);

        //Validasi jumlah menu
        if (jumlah < 2 || jumlah > 4) {
            MessageBox(NULL, "Jumlah menu yang anda masukkan tidak boleh kurang dari 2 dan lebih dari 4!!","Jumlah menu salah!!", MB_OK | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(145, 19, 1,1);
            goto cp2; //Digunakan untuk kembali
        }

        //------Fungsi input id menu------
        int found = 0;
        for (int i = 1; i <= jumlah; i++) {
            cp3:
            found = 0;
            gotoPrintText(122, 19 + i*2, "I D  M E N U         : MNU-");
            gotoxy(149, 19 + i*2);
            limitIntChar(&pm.id_menu[i], 3);
            //Validasi Id Menu
            arsMenu = fopen("../Data/Menu.dat", "rb");
            while (fread(&m, sizeof(m), 1, arsMenu) == 1) {
                if (m.id_menu == pm.id_menu[i]) {
                    found = 1;
                    gotoxy(149, 19 + i*2);
                    printf("%03d", m.id_menu);
                }
            }
            fclose(arsMenu);

            if(jumlah < 3){
                pm.id_menu[3] = 0;
                pm.id_menu[4] = 0;
            }
            else if(jumlah < 4){
                pm.id_menu[4] = 0;
            }

            //Validasi jika id tidak ditemukan
            if (found == 0) {
                setClearArea(149, 19 + i*2, 3, 1);
                MessageBox(NULL, "Id yang anda masukkan tidak valid!!","Tidak valid!!", MB_OK | MB_DEFAULT_DESKTOP_ONLY | MB_ICONERROR);
                goto cp3;
            }
        }

        //Validasi harga paket
        do {
            //Input Harga Paket
            limitMoneyChar(&pm.harga, 4, 6, 148,29);
            setClearArea(147, 29, 12, 1);
            gotoxy(145, 29);
            rupiah(pm.harga);
            if (pm.harga < 5000) {
                setClearArea(147, 29, 12, 1);
                MessageBox(NULL, "Harga tidak valid, silahkan input kembali", "Harga Minimal Rp5000", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            }
        }while (pm.harga < 5000);

        fwrite(&pm, sizeof(pm), 1, arsPktMenu);
        fclose(arsPktMenu);

        response = MessageBox(NULL, "Apakah Anda ingin menambahkan paket menu lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        setClearArea(149, 15, 3, 1);
        setClearArea(145, 17, 18, 1);
        setClearArea(145, 19, 1, 1);
        setClearArea(122, 21, 30, 7);
        setClearArea(147, 29, 12, 1);
    }while (response == IDYES);//Konfirmasi apakah ingin menambah data lagi (Penutup)
}

void showPaket(){
    /*-----Deklarasi-----*/
    int i = 0;

    /*-----Algoritma-----*/

    arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
    while (fread(&pm, sizeof(pm), 1, arsPktMenu) == 1) {
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
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 15+i; lebar <= 15+i+1; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
         //------Buat tabel-----

        //Buat frame vertikal tabel
        for(int j = 14; j <= 15+i; j++){
            gotoPrintASCII(37, j, 186);
            gotoPrintASCII(53, j, 186);
            gotoPrintASCII(80, j, 186);
            gotoPrintASCII(102, j, 186);
            gotoPrintASCII(118, j, 186);
            gotoPrintASCII(134, j, 186);
            gotoPrintASCII(150, j, 186);
            gotoPrintASCII(166, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(37, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(53, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kedua
        gotoPrintASCII(80, 15+i+1, 202);

        //Buat frame pembatas bawah atribut ketiga
        gotoPrintASCII(102, 15+i+1, 202);

        //Buat frame pembatas bawah atribut keempat
        gotoPrintASCII(118, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kelima
        gotoPrintASCII(134, 15+i+1, 202);

        //Buat frame pembatas bawah atribut keenam
        gotoPrintASCII(150, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(166, 15+i+1, 188);


        //Buat frame bawah pertama
        for (int j = 38;j <= 52;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 54;j <= 79;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketiga
        for (int j = 81;j <= 101;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah keempat
        for (int j = 103;j <= 117;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kelima
        for (int j = 119;j <= 133;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah keenam
        for (int j = 135;j <= 149;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketujuh
        for (int j = 151;j <= 165;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        /*-----Menampilkan Data-----*/
        gotoxy(42, 15 + i);
        printf("PKT-%03d", pm.id_paket);
        gotoxy(60, 15 + i);
        printf("%s", pm.nama_paket);
        gotoxy(84, 15 + i);
        rupiah(pm.harga);
        for (int j = 1; j <= 4; j++) {
            if (pm.id_menu[j] != 0){
                //Menampilkan nama menu sesuai id menu
                arsMenu = fopen("../Data/Menu.dat", "rb");
                while (fread(&m, sizeof(m), 1, arsMenu) == 1 ) {
                    if (m.id_menu == pm.id_menu[j]) {
                        gotoxy(87 + (j * 16), 15 + i);
                        printf("%s", m.nama_menu);
                    }
                }
                fclose(arsMenu);
            }
            else{
                gotoxy(91 + (j * 17), 15 + i);
                printf("-");
            }
        }
        i++;
    }
    fclose(arsPktMenu);
    detailPaketMenu();
}

void update_option_paket(){
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
    gotoPrintText(96, 19, "N A M A  P A K E T");
    gotoPrintText(95, 24, "H A R G A  P A K E T");
    gotoPrintText(99, 32, " K E L U A R");
    update_function_paket();
}

void buttonUpdatePaketTransition(int optional){
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

void update_function_paket(){
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
                buttonUpdatePaketTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonUpdatePaketTransition(optional);
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
        update_nama_paket();
    }
    if(found == 3){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_harga_paket();
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
        CRUD_function_paketMenu();
    }
}

void update_nama_paket(){
    int id_paket;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_paket();
        desain_box();
        inputIdPaket:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(135, 13, "N A M A  P A K E T");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
        if(!arsPktMenu){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_paket();
        }
        fclose(arsPktMenu);

        //-----Menginput ID Paket menu untuk divalidasi-----
        do{//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Paket untuk batal-");
            gotoPrintText(135, 25,"I D  P A K E T : PKT-");
            gotoxy(156, 25);
            limitIntChar(&id_paket, 3);

            arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
            while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
                if(pm.id_paket == id_paket){
                    found = 1;
                    break;
                }
                else if(id_paket == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_paket();
                }
            }
            fclose(arsPktMenu);

            if(found == 0){
                MessageBox(NULL, "ID Paket tidak ditemukan", "ID Paket tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Paket menu yang diinput sebelumnya-----
                setClearArea(156, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
        temp = fopen("../Temp/PaketMenuTemp.dat", "wb");
        while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
            if(pm.id_paket == id_paket){
                gotoPrintText(135, 27, "N A M A  P A K E T  L A M A");
                gotoPrintText(135, 28, "=>");
                gotoxy(138, 28);
                printf("%s", pm.nama_paket);
                gotoPrintText(135, 30, "N A M A  P A K E T  B A R U");
                gotoPrintText(135, 31, "=>");
                gotoxy(138, 31);
                limitStrChar(pm.nama_paket, 18);
                if(strcmpi(pm.nama_paket, "x")==0){
                    setClearArea(156, 25, 3, 1);
                    setClearArea(135, 27, 28, 5);
                    goto inputIdPaket;
                }

                fwrite(&pm, sizeof(pm), 1, temp);
            }
            else{
                fwrite(&pm, sizeof(pm), 1, temp);
            }
        }
        fclose(arsPktMenu);
        fclose(temp);

        arsPktMenu = fopen("../Data/Paket Menu.dat","wb");
        temp = fopen("../Temp/PaketMenuTemp.dat","rb");
        while (fread(&pm, sizeof(pm), 1, temp)){
            fwrite(&pm, sizeof(pm), 1, arsPktMenu);
        }
        fclose(arsPktMenu);
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

    update_option_paket();
}

void update_harga_paket(){
    int id_paket;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_paket();
        desain_box();
        inputIdPaket:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(135, 13, "N A M A  P A K E T");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
        if(!arsPktMenu){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_paket();
        }
        fclose(arsPktMenu);

        //-----Menginput ID Paket menu untuk divalidasi-----
        do{//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Paket untuk batal-");
            gotoPrintText(135, 25,"I D  P A K E T : PKT-");
            gotoxy(156, 25);
            limitIntChar(&id_paket, 3);

            arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
            while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
                if(pm.id_paket == id_paket){
                    found = 1;
                    break;
                }
                else if(id_paket == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_paket();
                }
            }
            fclose(arsPktMenu);

            if(found == 0){
                MessageBox(NULL, "ID Paket tidak ditemukan", "ID Paket tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Paket menu yang diinput sebelumnya-----
                setClearArea(156, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
        temp = fopen("../Temp/PaketMenuTemp.dat", "wb");
        while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
            if(pm.id_paket == id_paket){
                gotoPrintText(135, 27, "H A R G A  S A A T  I N I");
                gotoPrintText(135, 28, "=>");
                gotoxy(137, 28);
                rupiah(pm.harga);
                inputHargaPaket:
                gotoPrintText(135, 30, "H A R G A  T E R B A R U");
                gotoPrintText(135, 31, "=> Rp");
                limitMoneyChar(&pm.harga, 1, 6, 141, 31);
                if(pm.harga == 0){
                    setClearArea(156, 25, 3, 1);
                    setClearArea(135, 27, 26, 5);
                    goto inputIdPaket;;
                }
                if(pm.harga > 0 && pm.harga < 5000){
                    setClearArea(141, 31, 13, 1);
                    MessageBox(NULL, "Harga tidak valid, silahkan input kembali", "Harga Minimal Rp5000", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto inputHargaPaket;
                }
                setClearArea(140, 31, 12, 1);
                gotoxy(138, 31);
                rupiah(pm.harga);

                fwrite(&pm, sizeof(pm), 1, temp);
            }
            else{
                fwrite(&pm, sizeof(pm), 1, temp);
            }
        }
        fclose(arsPktMenu);
        fclose(temp);

        arsPktMenu = fopen("../Data/Paket Menu.dat","wb");
        temp = fopen("../Temp/PaketMenuTemp.dat","rb");
        while (fread(&pm, sizeof(pm), 1, temp)){
            fwrite(&pm, sizeof(pm), 1, arsPktMenu);
        }
        fclose(arsPktMenu);
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

    update_option_paket();
}

void deletePaket(){
    int id_paket;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_paket();
        desain_box();
        gotoPrintText(143, 11, "H A P U S");
        gotoPrintText(138, 13, "P A K E T  M E N U");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
        if(!arsPktMenu){
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
            CRUD_function_paketMenu();
        }
        fclose(arsPktMenu);

        //-----Menginput ID Paket menu untuk divalidasi-----
        do{//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Paket untuk batal-");
            gotoPrintText(135, 25,"I D  P A K E T : PKT-");
            gotoxy(156, 25);
            limitIntChar(&id_paket, 3);

            arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
            while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
                if(pm.id_paket == id_paket){
                    found = 1;
                    break;
                }
                else if(id_paket == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_paketMenu();
                }
            }
            fclose(arsPktMenu);

            if(found == 0){
                MessageBox(NULL, "ID Paket tidak ditemukan", "ID Paket tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Paket menu yang diinput sebelumnya-----
                setClearArea(156, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
        temp = fopen("../Temp/PaketMenuTemp.dat", "wb");
        while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
            if(pm.id_paket != id_paket){
                fwrite(&pm, sizeof(pm), 1, temp);
            }
        }
        fclose(arsPktMenu);
        fclose(temp);

        arsPktMenu = fopen("../Data/Paket Menu.dat","wb");
        temp = fopen("../Temp/PaketMenuTemp.dat","rb");
        while (fread(&pm, sizeof(pm), 1, temp)){
            fwrite(&pm, sizeof(pm), 1, arsPktMenu);
        }
        fclose(arsPktMenu);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin menghapus data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <=44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)

    hideCursor();

    CRUD_option();
    CRUD_function_paketMenu();
}

void detailPaketMenu(){
    int id_paket;
    int found;

    //-----Mewarnai shadow-----
    setColorBlock(0, 7);
    for (int panjang = 124; panjang <= 163; panjang++){
        for (int lebar = 37; lebar <= 43; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Mewarnai fillbox-----
    setColorBlock(0, 6);
    for (int panjang = 127; panjang <= 165; panjang++){
        for (int lebar = 39; lebar <= 43; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Frame box-----
    //Pojok kiri atas
    gotoPrintASCII(126, 38, 201);

    //pojok kanan atas
    gotoPrintASCII(166, 38, 187);

    //Pojok kiri bawah
    gotoPrintASCII(126, 44, 200);

    //pojok kanan bawah
    gotoPrintASCII(166, 44, 188);

    for(int i = 127; i <= 165; i++){
        //frame atas
        gotoPrintASCII(i, 38, 205);

        //pembatas judul
        gotoPrintASCII(i, 40, 196);

        //pembatas input
        gotoPrintASCII(i, 42, 95);

        //frame bawah
        gotoPrintASCII(i, 44, 205);
    }

    for(int i = 39; i <= 43; i++){
        //frame kiri
        gotoPrintASCII(126, i, 186);

        //frame kanan
        gotoPrintASCII(166, i, 186);
    }

    //-----Judul box-----
    gotoPrintText(135, 39, "L I H A T  D E T A I L");

    //-----Menginput ID Paket menu untuk divalidasi-----
    do{//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Pembuka)
        showCursor();
        found = 0;
        setColorBlock(0, 6);
        gotoPrintText(128, 43, "-Input [0] pada ID Paket untuk batal-");
        gotoPrintText(130, 41,"I D  P A K E T : PKT-");
        gotoxy(151, 41);
        limitIntChar(&id_paket, 3);

        arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
        while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
            if(pm.id_paket == id_paket){
                found = 1;
                break;
            }
            else if(id_paket == 0){
                hideCursor();
                //-----Menghapus layar-----
                setColorBlock(0, 0);
                for (int panjang = 37; panjang <= 166; panjang++){
                    for (int lebar = 10; lebar <=44; lebar++){
                        gotoPrintText(panjang, lebar, " ");
                    }
                }
                CRUD_option();
                CRUD_function_paketMenu();
            }
        }
        fclose(arsPktMenu);

        if(found == 0){
            MessageBox(NULL, "ID Paket tidak ditemukan", "ID Paket tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            hideCursor();
            //-----Menghapus angka id Paket menu yang diinput sebelumnya-----
            setClearArea(151, 41, 3, 1);
        }
    }while(found == 0);//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Penutup)

    hideCursor();
    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 10; lebar <=44; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Mewarnai fillbox-----
    setColorBlock(0, 6);
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

    gotoPrintText(97, 11, "D E T A I L");
    gotoPrintText(98, 13, "P A K E T");
    gotoPrintText(81, 19, "I D  P A K E T       : PKT-");
    gotoPrintText(81, 21, "N A M A  P A K E T   : ");
    gotoPrintText(81, 23, "H A R G A            : ");
    gotoPrintText(81, 25, "D E T A I L  M E N U : ");

    arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
    arsMenu = fopen("../Data/Menu.dat", "rb");

    while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
        if(id_paket == pm.id_paket){
            gotoxy(108, 19);
            printf("%03d", pm.id_paket);

            gotoxy(104, 21);
            printf("%s", pm.nama_paket);

            gotoxy(104, 23);
            rupiah(pm.harga);

            while(fread(&m, sizeof(m), 1, arsMenu)){
                for(int i = 1; i <= 4; i++){
                    if(pm.id_menu[i] == m.id_menu){
                        gotoxy(83, 25+i*2);
                        printf("M E N U  K E-%d     : %s", i, m.nama_menu);
                    }
                }
            }
            fclose(arsMenu);
        }
    }
    fclose(arsPktMenu);

    getch();

    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 10; lebar <=44; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    tabel_detail_paket();
    showPaket();
}