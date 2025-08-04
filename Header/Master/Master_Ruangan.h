void desain_tabel_ruangan();
void formRuangan();
void insertRuangan();
void showRuangan();
void deleteRuangan();
void update_option_ruangan();
void buttonUpdateRuanganTransition(int optional);
void update_function_ruangan();
void update_nama_ruangan();
void update_harga_ruangan();
void update_kapasitas_ruangan();

void desain_tabel_ruangan(){
    //-----Mewarnai fillbox-----
    setColorBlock(0, 6);
    for (int panjang = 47; panjang <= 119; panjang++){
        for (int lebar = 10; lebar <= 14; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Frame tabel-----
    //Frame kiri atas
    gotoPrintASCII(47, 10, 201);

    //Frame atas pertama
    for (int i = 48;i <= 62;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas pertama
    gotoPrintASCII(63, 10, 203);

    // Frame atas kedua
    for (int i = 64;i <= 82;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas kedua
    gotoPrintASCII(83, 10, 203);

    // Frame atas ketiga
    for (int i = 84;i <= 98;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas ketiga
    gotoPrintASCII(99, 10, 203);

    // Frame atas keempat
    for (int i = 100;i <= 118;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame kanan atas
    gotoPrintASCII(119, 10, 187);


    //Frame kiri
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(47, i, 186);
    }

    //Frame kanan
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(119, i, 186);
    }

    // Frame vertikal 1
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(63, i, 186);
    }

    // Frame vertikal 2
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(83, i, 186);
    }

    // Frame vertikal 3
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(99, i, 186);
    }

    //Frame kiri bawah
    gotoPrintASCII(47, 14, 204);

    //Frame kanan bawah
    gotoPrintASCII(119, 14, 185);

    //Frame bawah pertama
    for (int i = 48;i <= 62;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah pertama
    gotoPrintASCII(63, 14, 206);

    //Frame bawah kedua
    for (int i = 64;i <= 82;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah kedua
    gotoPrintASCII(83, 14, 206);

    //Frame bawah ketiga
    for (int i = 84;i <= 98;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah ketiga
    gotoPrintASCII(99, 14, 206);

    //Frame bawah keempat
    for (int i = 100;i <= 118;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //-----Atribut Tabel-----
    gotoPrintText(54, 11, "I D");
    gotoPrintText(49, 13, "R U A N G A N");
    gotoPrintText(70, 11, "N A M A");
    gotoPrintText(67, 13, "R U A N G A N");
    gotoPrintText(87, 11, "H A R G A");
    gotoPrintText(85, 13, "P E R - J A M");
    gotoPrintText(101, 12, "K A P A S I T A S");
}

void formRuangan(){
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
    gotoPrintText(96, 13, "R U A N G A N");
    gotoPrintText(81, 19, "I D  R U A N G A N       : RGN-");
    gotoPrintText(81, 21, "N A M A  R U A N G A N   : ");
    gotoPrintText(81, 23, "H A R G A  P E R - J A M : Rp");
    gotoPrintText(81, 25, "K A P A S I T A S        : ");
}

void insertRuangan(){
    int response;
    do
    {//Konfiramsi apakah ingin menambah data lagi (Pembuka)
        gotoPrintText(80, 40, "-Input [x] pada Nama Ruangan untuk batal-");
        rg.id_ruangan = 1;
        arsRuangan = fopen("../Data/Ruangan.dat", "a+b");

        if (arsRuangan != NULL) {
            while (fread(&rg, sizeof(rg), 1, arsRuangan)) {
                rg.id_ruangan += 1;
            }
        }

        //-----Fungsi input ID ruangan-----
        gotoxy(112, 19);
        printf("%03d", rg.id_ruangan);

        //-----Fungsi input nama ruangan-----
        gotoxy(108, 21);
        fflush(stdin);
        limitStrChar(rg.nama_ruangan, 18);
        if(strcmpi("x", rg.nama_ruangan)==0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_ruangan();
        }

        //Validasi harga
        do
        {
            //-----Fungsi input harga merchandise-----
            limitMoneyChar(&rg.harga_per_jam, 4, 7, 111, 23);
            setClearArea(111, 23, 13, 1);
            gotoxy(108, 23);
            rupiah(rg.harga_per_jam);
            if(rg.harga_per_jam < 5000){
                setClearArea(108, 23, 13, 1);
                MessageBox(NULL, "Harga tidak valid, silahkan input kembali", "Harga Minimal Rp5000", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            }
        }while(rg.harga_per_jam < 5000);


        //Validasi kapasitas ruangan
        do
        {
            //------Fungsi input kapasitas ruangan------
            gotoxy(108, 25);
            limitIntChar(&rg.kapasitas_ruangan, 3);
            if(rg.kapasitas_ruangan < 1){
                setClearArea(108, 25, 3, 1);
                MessageBox(NULL, "Kapasitas harus lebih dari 0", "Kapasitas tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            }
        }while(rg.kapasitas_ruangan < 1);

        fwrite(&rg, sizeof(rg), 1, arsRuangan);
        fclose(arsRuangan);

        response = MessageBox(NULL, "Apakah Anda ingin menambahkan ruangan lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        setClearArea(112, 19, 3, 1);
        setClearArea(108, 21, 18, 1);
        setClearArea(108, 23, 13, 1);
        setClearArea(108, 25, 3, 1);
    }while (response == IDYES);//Konfirmasi apakah ingin menambah data lagi (Penutup)
}

void showRuangan(){
    int i = 0;
    arsRuangan = fopen("../Data/Ruangan.dat","rb");
    while(fread(&rg,sizeof(rg),1,arsRuangan)){
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
        for (int panjang = 47; panjang <= 119; panjang++){
            for (int lebar = 15+i; lebar <= 15+i+1; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        //Buat frame vertikal tabel
        for(int j = 11; j <= 15+i; j++){
            gotoPrintASCII(47, j, 186);
            gotoPrintASCII(63, j, 186);
            gotoPrintASCII(83, j, 186);
            gotoPrintASCII(99, j, 186);
            gotoPrintASCII(119, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(47, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(63, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kedua
        gotoPrintASCII(83, 15+i+1, 202);

        //Buat frame pembatas bawah atribut ketiga
        gotoPrintASCII(99, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(119, 15+i+1, 188);

        //Buat frame bawah pertama
        for (int j = 48;j <= 62;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 64;j <= 82;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketiga
        for (int j = 84;j <= 98;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah keempat
        for (int j = 100;j <= 118;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //-----Memperlihatkan data yang telah diinput-----
        gotoxy(52, 15+i);
        printf("RGN-%03d", rg.id_ruangan);

        gotoxy(65, 15+i);
        printf("%s", rg.nama_ruangan);

        gotoxy(85, 15+i);
        rupiah(rg.harga_per_jam);

        gotoxy(108, 15+i);
        printf("%d", rg.kapasitas_ruangan);

        i++;
    }
    fclose(arsRuangan);
}

void update_option_ruangan(){
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
    gotoPrintText(101, 17, "N A M A");
    gotoPrintText(98, 19, "R U A N G A N");
    gotoPrintText(100, 22, "H A R G A");
    gotoPrintText(98, 24, "P E R - J A M");
    gotoPrintText(96, 27, "K A P A S I T A S");
    gotoPrintText(98, 32, " K E L U A R");
    update_function_ruangan();
}

void buttonUpdateRuanganTransition(int optional){
    switch (optional){
    case 1:
        button(93, 16, 22, 4, 0, 6);
        hapusButton(93, 21, 22, 4, 6, 6);
        hapusButton(93, 26, 22, 2, 6, 6);
        hapusButton(93, 31, 22, 2, 6, 6);
        break;
    case 2:
        hapusButton(93, 16, 22, 4, 6, 6);
        button(93, 21, 22, 4, 0, 6);
        hapusButton(93, 26, 22, 2, 6, 6);
        hapusButton(93, 31, 22, 2, 6, 6);
        break;
    case 3:
        hapusButton(93, 16, 22, 4, 6, 6);
        hapusButton(93, 21, 22, 4, 6, 6);
        button(93, 26, 22, 2, 0, 6);
        hapusButton(93, 31, 22, 2, 6, 6);
        break;
    case 4:
        hapusButton(93, 16, 22, 4, 6, 6);
        hapusButton(93, 21, 22, 4, 6, 6);
        hapusButton(93, 26, 22, 2, 6, 6);
        button(93, 31, 22, 2, 0, 6);
        break;
    }
}

void update_function_ruangan(){
    char ch;
    int found = 1;
    int optional = 1;
    button(93, 16, 22, 4, 0, 6);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 4){
                optional +=1;
                buttonUpdateRuanganTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonUpdateRuanganTransition(optional);
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
        update_nama_ruangan();
    }
    if(found == 3){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_harga_ruangan();
    }
    if(found == 4){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_kapasitas_ruangan();
    }
    if(found == 5){
        //-----Menghapus tabel-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_ruangan();
    }
}

void update_nama_ruangan(){
    int id_ruangan;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_ruangan();
        showRuangan();
        desain_box();
        inputIdRuangan:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(135, 13, "N A M A  R U A N G A N");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        if(!arsRuangan){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_ruangan();
        }
        fclose(arsRuangan);

        //-----Menginput ID Ruangan untuk divalidasi-----
        do{//Memvalidasi apakah ID Ruangan yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Ruangan untuk batal-");
            gotoPrintText(130, 25,"I D  R U A N G A N : RGN-");
            gotoxy(155, 25);
            limitIntChar(&id_ruangan, 3);

            arsRuangan = fopen("../Data/Ruangan.dat", "rb");
            while(fread(&rg, sizeof(rg), 1, arsRuangan)){
                if(rg.id_ruangan == id_ruangan){
                    found = 1;
                    break;
                }
                else if(id_ruangan == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_ruangan();
                }
            }
            fclose(arsRuangan);

            if(found == 0){
                MessageBox(NULL, "ID Ruangan tidak ditemukan", "ID Ruangan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Ruangan yang diinput sebelumnya-----
                setClearArea(155, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Ruangan yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        temp = fopen("../Temp/RuanganTemp.dat", "wb");
        while(fread(&rg, sizeof(rg), 1, arsRuangan)){
            if(rg.id_ruangan == id_ruangan){
                gotoPrintText(130, 27, "N A M A  R U A N G A N");
                gotoPrintText(130, 28, "=>");
                gotoxy(133, 28);
                printf("%s", rg.nama_ruangan);
                gotoPrintText(130, 30, "N A M A  T E R B A R U");
                gotoPrintText(130, 31, "=>");
                gotoxy(133, 31);
                limitStrChar(rg.nama_ruangan, 18);
                if(strcmpi(rg.nama_ruangan, "x")==0){
                    setClearArea(155, 25, 3, 1);
                    setClearArea(130, 27, 23, 5);
                    goto inputIdRuangan;
                }
                fwrite(&rg, sizeof(rg), 1, temp);
            }
            else{
                fwrite(&rg, sizeof(rg), 1, temp);
            }
        }
        fclose(arsRuangan);
        fclose(temp);

        arsRuangan = fopen("../Data/Ruangan.dat","wb");
        temp = fopen("../Temp/RuanganTemp.dat","rb");
        while (fread(&rg, sizeof(rg), 1, temp)){
            fwrite(&rg, sizeof(rg), 1, arsRuangan);
        }
        fclose(arsRuangan);
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

    update_option_ruangan();
}

void update_harga_ruangan(){
    int id_ruangan;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_ruangan();
        showRuangan();
        desain_box();
        inputIdruangan:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(135, 13, "N A M A  R U A N G A N");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        if(!arsRuangan){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_ruangan();
        }
        fclose(arsRuangan);

        //-----Menginput ID Ruangan untuk divalidasi-----
        do{//Memvalidasi apakah ID Ruangan yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Ruangan untuk batal-");
            gotoPrintText(130, 25,"I D  R U A N G A N : RGN-");
            gotoxy(155, 25);
            limitIntChar(&id_ruangan, 3);

            arsRuangan = fopen("../Data/Ruangan.dat", "rb");
            while(fread(&rg, sizeof(rg), 1, arsRuangan)){
                if(rg.id_ruangan == id_ruangan){
                    found = 1;
                    break;
                }
                else if(id_ruangan == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_ruangan();
                }
            }
            fclose(arsRuangan);

            if(found == 0){
                MessageBox(NULL, "ID Ruangan tidak ditemukan", "ID Ruangan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Ruangan yang diinput sebelumnya-----
                setClearArea(155, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Ruangan yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        temp = fopen("../Temp/RuanganTemp.dat", "wb");
        while(fread(&rg, sizeof(rg), 1, arsRuangan)){
            if(rg.id_ruangan == id_ruangan){
                gotoPrintText(130, 27, "H A R G A / J A M  S A A T  I N I");
                gotoPrintText(130, 28, "=>");
                gotoxy(133, 28);
                rupiah(rg.harga_per_jam);
                inputHargaRuangan:
                gotoPrintText(130, 30, "H A R G A / J A M  T E R B A R U");
                gotoPrintText(130, 31, "=> Rp");
                limitMoneyChar(&rg.harga_per_jam, 1, 7, 136, 31);
                if(rg.harga_per_jam == 0){
                    setClearArea(155, 25, 3, 1);
                    setClearArea(130, 27, 34, 5);
                    goto inputIdruangan;
                }
                if(rg.harga_per_jam > 0 && rg.harga_per_jam < 5000){
                    setClearArea(136, 31, 13, 1);
                    MessageBox(NULL, "Harga tidak valid, silahkan input kembali", "Harga Minimal Rp5000", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto inputHargaRuangan;
                }
                setClearArea(133, 31, 13, 1);
                gotoxy(133, 31);
                rupiah(rg.harga_per_jam);

                fwrite(&rg, sizeof(rg), 1, temp);
            }
            else{
                fwrite(&rg, sizeof(rg), 1, temp);
            }
        }
        fclose(arsRuangan);
        fclose(temp);

        arsRuangan = fopen("../Data/Ruangan.dat","wb");
        temp = fopen("../Temp/RuanganTemp.dat","rb");
        while (fread(&rg, sizeof(rg), 1, temp)){
            fwrite(&rg, sizeof(rg), 1, arsRuangan);
        }
        fclose(arsRuangan);
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

    update_option_ruangan();
}

void update_kapasitas_ruangan(){
    int id_ruangan;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_ruangan();
        showRuangan();
        desain_box();
        inputIdRuangan:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(135, 13, "N A M A  R U A N G A N");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        if(!arsRuangan){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_ruangan();
        }
        fclose(arsRuangan);

        //-----Menginput ID Ruangan untuk divalidasi-----
        do{//Memvalidasi apakah ID Ruangan yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Ruangan untuk batal-");
            gotoPrintText(130, 25,"I D  R U A N G A N : RGN-");
            gotoxy(155, 25);
            limitIntChar(&id_ruangan, 3);

            arsRuangan = fopen("../Data/Ruangan.dat", "rb");
            while(fread(&rg, sizeof(rg), 1, arsRuangan)){
                if(rg.id_ruangan == id_ruangan){
                    found = 1;
                    break;
                }
                else if(id_ruangan == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_ruangan();
                }
            }
            fclose(arsRuangan);

            if(found == 0){
                MessageBox(NULL, "ID Ruangan tidak ditemukan", "ID Ruangan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Ruangan yang diinput sebelumnya-----
                setClearArea(155, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Ruangan yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        temp = fopen("../Temp/RuanganTemp.dat", "wb");
        while(fread(&rg, sizeof(rg), 1, arsRuangan)){
            if(rg.id_ruangan == id_ruangan){
                gotoPrintText(130, 27, "K A P A S I T A S  S A A T  I N I");
                gotoPrintText(130, 28, "=> ");
                gotoxy(133, 28);
                printf("%d", rg.kapasitas_ruangan);
                gotoPrintText(130, 30, "K A P A S I T A S  T E R B A R U");
                gotoPrintText(130, 31, "=> ");
                gotoxy(133, 31);
                limitIntChar(&rg.kapasitas_ruangan, 3);
                if(rg.kapasitas_ruangan == 0){
                    setClearArea(155, 25, 3, 1);
                    setClearArea(130, 27, 34, 5);
                    goto inputIdRuangan;
                }

                fwrite(&rg, sizeof(rg), 1, temp);
            }
            else{
                fwrite(&rg, sizeof(rg), 1, temp);
            }
        }
        fclose(arsRuangan);
        fclose(temp);

        arsRuangan = fopen("../Data/Ruangan.dat","wb");
        temp = fopen("../Temp/RuanganTemp.dat","rb");
        while (fread(&rg, sizeof(rg), 1, temp)){
            fwrite(&rg, sizeof(rg), 1, arsRuangan);
        }
        fclose(arsRuangan);
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

    update_option_ruangan();
}

void deleteRuangan(){
    int id_ruangan;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_ruangan();
        showRuangan();
        desain_box();
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(135, 13, "N A M A  R U A N G A N");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        if(!arsRuangan){
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
            CRUD_function_ruangan();
        }
        fclose(arsRuangan);

        //-----Menginput ID Ruangan untuk divalidasi-----
        do{//Memvalidasi apakah ID Ruangan yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Ruangan untuk batal-");
            gotoPrintText(130, 25,"I D  R U A N G A N : RGN-");
            gotoxy(155, 25);
            limitIntChar(&id_ruangan, 3);

            arsRuangan = fopen("../Data/Ruangan.dat", "rb");
            while(fread(&rg, sizeof(rg), 1, arsRuangan)){
                if(rg.id_ruangan == id_ruangan){
                    found = 1;
                    break;
                }
                else if(id_ruangan == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_ruangan();
                }
            }
            fclose(arsRuangan);

            if(found == 0){
                MessageBox(NULL, "ID Ruangan tidak ditemukan", "ID Ruangan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Ruangan yang diinput sebelumnya-----
                setClearArea(155, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Ruangan yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        temp = fopen("../Temp/RuanganTemp.dat", "wb");
        while(fread(&rg, sizeof(rg), 1, arsRuangan)){
            if(rg.id_ruangan != id_ruangan){
                fwrite(&rg, sizeof(rg), 1, temp);
            }
        }
        fclose(arsRuangan);
        fclose(temp);

        arsRuangan = fopen("../Data/Ruangan.dat","wb");
        temp = fopen("../Temp/RuanganTemp.dat","rb");
        while (fread(&rg, sizeof(rg), 1, temp)){
            fwrite(&rg, sizeof(rg), 1, arsRuangan);
        }
        fclose(arsRuangan);
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
    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 10; lebar <=44; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }
    CRUD_option();
    CRUD_function_ruangan();
}