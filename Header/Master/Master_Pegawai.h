void desain_tabel_pegawai();
void formPegawai();
void insertPegawai();
void showPegawai();
void update_option_pegawai();
void buttonUpdatePegawaiTransition(int optional);
void update_function_pegawai();
void desain_box();
void update_nama_pegawai();
void update_pass_pegawai();
void update_tglLahir_Pegawai();
void hapusPegawai();

//-----Desain tampilan tabel Master-----
void desain_tabel_pegawai(){
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
    for (int i = 54;i <= 73;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas kedua
    gotoPrintASCII(74, 10, 203);

    //Frame atas ketiga
    for (int i = 75;i <= 91;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas ketiga
    gotoPrintASCII(92, 10, 203);

    //Frame atas keempat
    for (int i = 93;i <= 109;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas keempat
    gotoPrintASCII(110, 10, 203);

    //Frame atas kelima
    for (int i = 111;i <= 125;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas kelima
    gotoPrintASCII(126, 10, 203);

    //Frame atas keenam
    for (int i = 127;i <= 139;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas keenam
    gotoPrintASCII(140, 10, 203);

    //Frame atas ketujuh
    for (int i = 141;i <= 165;i++){
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
        gotoPrintASCII(74, i, 186);
    }

    //Frame vertikal 3
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(92, i, 186);
    }

    //Frame vertikal 4
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(110, i, 186);
    }

    //Frame vertikal 5
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(126, i, 186);
    }

    //Frame vertikal 6
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(140, i, 186);
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
    for (int i = 54;i <= 73;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah kedua
    gotoPrintASCII(74, 14, 206);

    //Frame bawah ketiga
    for (int i = 75;i <= 91;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah ketiga
    gotoPrintASCII(92, 14, 206);

    //Frame bawah keempat
    for (int i = 93;i <= 109;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah keempat
    gotoPrintASCII(110, 14, 206);

    //Frame bawah kelima
    for (int i = 111;i <= 125;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah kelima
    gotoPrintASCII(126, 14, 206);

    //Frame bawah keenam
    for (int i = 127;i <= 139;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah keenam
    gotoPrintASCII(140, 14, 206);

    //Frame bawah ketujuh
    for (int i = 141;i <= 165;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //-----Atribut Tabel-----
    gotoPrintText(43, 11, "I D");
    gotoPrintText(39, 13, "P E G A W A I");
    gotoPrintText(60, 11, "N A M A");
    gotoPrintText(57, 13, "L E N G K A P");
    gotoPrintText(76, 12, "U S E R N A M E");
    gotoPrintText(94, 12, "P A S S W O R D");
    gotoPrintText(112, 11, "T A N G G A L");
    gotoPrintText(114, 13, "L A H I R");
    gotoPrintText(130, 12, "R O L E");
    gotoPrintText(150, 12, "G A J I");
}

//-----Menampilkan template form pengiisian data pegawai-----
void formPegawai(){
    desain_tabel_role();
    showRole();
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
    gotoPrintText(134, 13, "D A T A  P E G A W A I");
    gotoPrintText(122, 15, "I D  P E G A W A I     : PGW-");
    gotoPrintText(122, 17, "N A M A  L E N G K A P : ");
    gotoPrintText(122, 19, "R O L E                : RLE-");
    gotoPrintText(122, 21, "U S E R N A M E        : ");
    gotoPrintText(122, 23, "P A S S W O R D        : ");
    gotoPrintText(122, 25, "T G L  L A H I R       : ");
    gotoPrintText(149, 25, "/");
    gotoPrintText(152, 25, "/");
}

//-----Menambahkan data pegawai baru-----
void insertPegawai(){
    int response;

        do
        {//Konfiramsi apakah ingin menambah data lagi (Pembuka)
            p.id_pegawai = 1;
            gotoPrintText(122, 40, "--Input [x] pada Nama Lengkap untuk batal--");
            arsPegawai = fopen("../Data/Pegawai.dat","a+b");

            //-----Fungsi pemberi ID Pegawai secara auto increment-----
            string usn[999];
            int i = 0;
            if(arsPegawai != NULL){
                while (fread(&p,sizeof(p),1,arsPegawai)){
                    p.id_pegawai += 1;
                    strcpy(usn[i], p.username);
                    i++;
                }
            }


            //-----Fungsi input ID Pegawai-----
            gotoxy(151, 15);
            printf("%03d", p.id_pegawai);

            //-----Fungsi input nama pegawai-----
            gotoxy(147, 17);
            fflush(stdin);
            limitStrChar(p.nama, 18);
            if(strcmpi("x", p.nama)==0){
                hideCursor();
                //-----Menghapus layar-----
                setColorBlock(0, 0);
                for (int panjang = 37; panjang <= 166; panjang++){
                    for (int lebar = 10; lebar <=44; lebar++){
                        gotoPrintText(panjang, lebar, " ");
                    }
                }
                CRUD_option();
                CRUD_function_pegawai();
            }
            //-----Input role pegawai-----

            //Validasi input role
            int found = 0;
            do
            {
                gotoxy(151, 19);
                fflush(stdin);
                limitIntChar(&p.id_role, 3);
                arsRole = fopen("../Data/Role.dat", "rb");
                while(fread(&r,sizeof(r),1,arsRole)){
                    if(p.id_role == r.id_role){
                        found = 1;
                        break;
                    }
                }
                fclose(arsRole);
                if(found == 1){
                    break;
                }
                else{
                    MessageBox(NULL, "Role tidak ada, silahkan input kembali", "Invalid ID Role", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    setClearArea(151, 19, 3, 1);
                }

            }while (1);


            if(p.id_role >= 1 && p.id_role <= 2){
                //-----Fungsi input username pegawai-----
                string username;
                username:
                gotoxy(147, 21);
                fflush(stdin);
                loginUsername(username);

                //Validasi username
                for (int i = 0; i < 999; i++){
                    if(strcmp(username, usn[i])==0){
                        setClearArea(147, 21, 12, 1);
                        MessageBox(NULL, "Username telah digunakan", "Username tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                        goto username;
                    }
                }
                strcpy(p.username, username);

                //-----Fungsi input password pegawai-----
                gotoxy(147, 23);
                fflush(stdin);
                loginPassword(p.password);
            }
            else{
                strcpy(p.username,"-");
                strcpy(p.password, "-");
                gotoxy(147, 21);
                printf("%s", p.username);
                gotoxy(147, 23);
                printf("%s", p.password);
            }

            //-----Fungsi input tanggal lahir pegawai-----
            int error = 0;
            //Validasi input tanggal
            hari:
            do{
                gotoxy(147, 25);
                limitDateChar(&p.tanggal_lahir.hari, 2);
                if(p.tanggal_lahir.hari == 0 || p.tanggal_lahir.hari > 31){
                    setClearArea(147, 25, 2, 1);
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
                gotoxy(150, 25);
                limitDateChar(&p.tanggal_lahir.bulan, 2);
                if(p.tanggal_lahir.bulan == 0 || p.tanggal_lahir.bulan > 12){
                    setClearArea(150, 25, 2, 1);
                    MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    error = 1;
                }
                else if(p.tanggal_lahir.hari > 29  && p.tanggal_lahir.bulan == 2){
                    setClearArea(150, 25, 2, 1);
                    setClearArea(147, 25, 2, 1);
                    MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto hari;
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

                gotoxy(153, 25);
                limitDateChar(&p.tanggal_lahir.tahun, 4);
                if(local->tm_year + 1900 - p.tanggal_lahir.tahun > 30 || local->tm_year + 1900 - p.tanggal_lahir.tahun < 18){
                    setClearArea(153, 25, 4, 1);
                    int tahunAwal = local->tm_year + 1900 - 30;
                    int tahunAkhir = local->tm_year + 1900 - 18;
                    string message;

                    snprintf(message, sizeof(message), "Rentang Tahun : %d - %d", tahunAwal, tahunAkhir);

                    MessageBox(NULL, message, "Tahun tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    error = 1;
                }
                //-----Validasi tahun kabisat-----
                else if (p.tanggal_lahir.bulan == 2 && p.tanggal_lahir.hari > 28 && kabisat(p.tanggal_lahir.tahun) == false){
                    setClearArea(150, 25, 2, 1);
                    setClearArea(147, 25, 2, 1);
                    setClearArea(153, 25, 4, 1);
                    MessageBox(NULL, "Bukan Tahun Kabisat, silahkan masukkan ulang tanggal", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto hari;
                }
                else{
                    error = 0;
                }
            }while (error == 1);

            fwrite(&p, sizeof(p), 1, arsPegawai);
            fclose(arsPegawai);

            response = MessageBox(NULL, "Apakah anda ingin menambah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(147, 17, 18, 1);
            setClearArea(151, 19, 3, 1);
            setClearArea(147, 21, 12, 1);
            setClearArea(147, 23, 12, 1);
            setClearArea(147, 25, 2, 1);
            setClearArea(150, 25, 2, 1);
            setClearArea(153, 25, 4, 1);
        }while(response == IDYES);//Konfirmasi apakah ingin menambah data lagi (Penutup)
}

//-----Menampilkan data pegawai yang telah diinput-----
void showPegawai()
{
    int i = 0;
    arsPegawai = fopen("../Data/Pegawai.dat","rb");
    while(fread(&p, sizeof(p), 1, arsPegawai)){
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
            gotoPrintASCII(74, j, 186);
            gotoPrintASCII(92, j, 186);
            gotoPrintASCII(110, j, 186);
            gotoPrintASCII(126, j, 186);
            gotoPrintASCII(140, j, 186);
            gotoPrintASCII(166, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(37, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(53, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kedua
        gotoPrintASCII(74, 15+i+1, 202);

        //Buat frame pembatas bawah atribut ketiga
        gotoPrintASCII(92, 15+i+1, 202);

        //Buat frame pembatas bawah atribut keempat
        gotoPrintASCII(110, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kelima
        gotoPrintASCII(126, 15+i+1, 202);

        //Buat frame pembatas bawah atribut keenam
        gotoPrintASCII(140, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(166, 15+i+1, 188);


        //Buat frame bawah pertama
        for (int j = 38;j <= 52;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 54;j <= 73;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketiga
        for (int j = 75;j <= 91;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah keempat
        for (int j = 93;j <= 109;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kelima
        for (int j = 111;j <= 125;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah keenam
        for (int j = 127;j <= 139;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketujuh
        for (int j = 141;j <= 165;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //-----Memperlihatkan data yang telah diinput-----
        gotoxy(42, 15+i);
        printf("PGW-%03d", p.id_pegawai);

        gotoxy(55, 15+i);
        printf("%s", p.nama);

        gotoxy(78, 15+i);
        printf("%s", p.username);

        if(strcmp(p.password, "-") == 1){
            for (int k = 1; k <= strlen(p.password); k++){
                gotoxy(96+k, 15+i);
                printf("*");
            }
        }
        else{
            gotoxy(96, 15+i);
            printf("%s", p.password);
        }


        gotoxy(114, 15+i);
        printf("%02d/%02d/%04d", p.tanggal_lahir.hari, p.tanggal_lahir.bulan, p.tanggal_lahir.tahun);

        arsRole = fopen("../Data/Role.dat","rb");
        while (fread(&r, sizeof(r), 1, arsRole))
        {
            if(r.id_role == p.id_role){
                gotoxy(128, 15+i);
                printf("%s", r.nama_role);

                gotoxy(147, 15+i);
                rupiah(r.gaji);
            }
        }
        fclose(arsRole);

        i++;
    }
    fclose(arsPegawai);
}

void update_option_pegawai(){
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
    gotoPrintText(102, 17, "N A M A");
    gotoPrintText(99, 19, "L E N G K A P");
    gotoPrintText(98, 22, "P A S S W O R D");
    gotoPrintText(99, 25, "T A N G G A L");
    gotoPrintText(101, 27, "L A H I R");
    gotoPrintText(99, 32, " K E L U A R");
    update_function_pegawai();
}

void buttonUpdatePegawaiTransition(int optional){
    switch (optional){
    case 1:
        button(94, 16, 21, 4, 0, 6);
        hapusButton(94, 21, 21, 2, 6, 6);
        hapusButton(94, 24, 21, 4, 6, 6);
        hapusButton(94, 31, 21, 2, 6, 6);
        break;
    case 2:
        hapusButton(94, 16, 21, 4, 6, 6);
        button(94, 21, 21, 2, 0, 6);
        hapusButton(94, 24, 21, 4, 6, 6);
        hapusButton(94, 31, 21, 2, 6, 6);
        break;
    case 3:
        hapusButton(94, 16, 21, 4, 6, 6);
        hapusButton(94, 21, 21, 2, 6, 6);
        button(94, 24, 21, 4, 0, 6);
        hapusButton(94, 31, 21, 2, 6, 6);
        break;
    case 4:
        hapusButton(94, 16, 21, 4, 6, 6);
        hapusButton(94, 21, 21, 2, 6, 6);
        hapusButton(94, 24, 21, 4, 6, 6);
        button(94, 31, 21, 2, 0, 6);
        break;
    }
}

void update_function_pegawai(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 16, 21, 4, 0, 6);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 4){
                optional +=1;
                buttonUpdatePegawaiTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonUpdatePegawaiTransition(optional);
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
        update_nama_pegawai();
    }
    if(found == 3){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_pass_pegawai();
    }
    if(found == 4){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_tglLahir_Pegawai();
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
        CRUD_function_pegawai();
    }
}

void desain_box(){

    setColorBlock(0, 6);

    //-----Mewarnai fillbox-----
    for (int panjang = 127; panjang <= 165; panjang++){
        for (int lebar = 10; lebar <= 43; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //Frame pojok kiri atas
    gotoPrintASCII(126, 10, 203);

    //Frame atas
    for (int i = 127;i <= 165;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame pojok kanan atas
    gotoPrintASCII(166, 10, 187);

    //Frame kiri bagian atas
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(126, i, 186);
    }

    //Frame kanan bagian atas
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(166, i, 186);
    }

    //Frame pojok kiri tengah
    gotoPrintASCII(126, 14, 206);

    //Frame tengah
    for (int i = 127;i <= 165;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Frame pojok kiri tengah
    gotoPrintASCII(166, 14, 185);

    //Frame kiri bagian bawah
    for (int i = 15;i <= 43;i++){
        gotoPrintASCII(126, i, 186);
    }

    //Frame kanan bagian bawah
    for (int i = 15;i <= 43;i++){
        gotoPrintASCII(166, i, 186);
    }

    //Frame pojok kiri bawah
    gotoPrintASCII(126, 44, 200);

    //Frame pojok kanan bawah
    gotoPrintASCII(166, 44, 188);

    //Frame bawah
    for (int i = 127;i <= 165;i++){
        gotoPrintASCII(i, 44, 205);
    }
}

void update_nama_pegawai(){
    int id_pegawai;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_pegawai();
        showPegawai();
        desain_box();
        inputIdPegawai:
        gotoPrintText(144, 11, "E D I T");
        gotoPrintText(137, 13, "N A M A  P E G A W A I");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        if(!arsPegawai){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_pegawai();
        }
        fclose(arsPegawai);

        //-----Menginput ID Pegawai untuk divalidasi-----
        do{//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Pegawai untuk batal-");
            gotoPrintText(134, 25,"I D  P E G A W A I  : PGW-");
            gotoxy(160, 25);
            limitIntChar(&id_pegawai, 3);

            arsPegawai = fopen("../Data/Pegawai.dat", "rb");
            while(fread(&p, sizeof(p), 1, arsPegawai)){
                if(p.id_pegawai == id_pegawai){
                    found = 1;
                    break;
                }
                else if(id_pegawai == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_pegawai();
                }
            }
            fclose(arsPegawai);

            if(found == 0){
                MessageBox(NULL, "ID Pegawai tidak ditemukan", "ID Pegawai tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id pegawai yang diinput sebelumnya-----
                setClearArea(160, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        temp = fopen("../Temp/PegawaiTemp.dat", "wb");
        while(fread(&p, 1, sizeof(p), arsPegawai)){
            if(p.id_pegawai == id_pegawai){
                gotoPrintText(134, 27, "N A M A  P E G A W A I");
                gotoPrintText(134, 28, "=>");
                gotoxy(136, 28);
                printf("%s", p.nama);
                gotoPrintText(134, 30, "N A M A  B A R U");
                gotoPrintText(134, 31, "=>");
                gotoxy(136, 31);
                limitStrChar(p.nama, 18);
                if(strcmpi(p.nama, "x") == 0){
                    setClearArea(160, 25, 3, 1);
                    setClearArea(134, 27, 23, 5);
                    goto inputIdPegawai;
                }
                fwrite(&p, sizeof(p), 1, temp);
            }
            else{
                fwrite(&p, sizeof(p), 1, temp);
            }
        }
        fclose(arsPegawai);
        fclose(temp);

        arsPegawai = fopen("../Data/Pegawai.dat","wb");
        temp = fopen("../Temp/PegawaiTemp.dat","rb");
        while (fread(&p, sizeof(p), 1, temp)){
            fwrite(&p, sizeof(p), 1, arsPegawai);
        }
        fclose(arsPegawai);
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

    update_option_pegawai();
}

void update_pass_pegawai(){
    int id_pegawai;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_pegawai();
        showPegawai();
        desain_box();
        inputIdPegawai:
        gotoPrintText(144, 11, "E D I T");
        gotoPrintText(132, 13, "P A S S W O R D  P E G A W A I");
        showCursor();

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        if(!arsPegawai){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_pegawai();
        }
        fclose(arsPegawai);

        //-----Menginput ID Pegawai untuk divalidasi-----
        do{//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Pegawai untuk batal-");
            gotoPrintText(134, 25,"I D  P E G A W A I  : PGW-");
            gotoxy(160, 25);
            limitIntChar(&id_pegawai, 3);

            arsPegawai = fopen("../Data/Pegawai.dat", "rb");
            while(fread(&p, sizeof(p), 1, arsPegawai)){
                if(p.id_pegawai == id_pegawai){
                    found = 1;
                    break;
                }
                else if(id_pegawai == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_pegawai();
                }
            }
            fclose(arsPegawai);

            if(found == 0){
                MessageBox(NULL, "ID Pegawai tidak ditemukan", "ID Pegawai tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id pegawai yang diinput sebelumnya-----
                setClearArea(160, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        temp = fopen("../Temp/PegawaiTemp.dat", "wb");
        while(fread(&p, sizeof(p), 1, arsPegawai)){
            if(p.id_pegawai == id_pegawai && strcmp(p.username, "-")==1){
                gotoPrintText(134, 27, "P A S S W O R D  L A M A :");
                gotoPrintText(134, 28, "=>");
                gotoxy(136, 28);
                printf("%s", p.password);
                gotoPrintText(134, 30, "P A S S W O R D  B A R U :");
                gotoPrintText(134, 31, "=>");
                gotoxy(136, 31);
                loginPassword(p.password);
                if(strcmpi(p.password, "x")==0){
                    setClearArea(160, 25, 3, 1);
                    setClearArea(134, 27, 27, 5);
                    goto inputIdPegawai;
                }
                fwrite(&p, sizeof(p), 1, temp);
            }
            else if(p.id_pegawai == id_pegawai && strcmp(p.username, "-")==0){
                MessageBox(NULL, "Hanya yang memiliki username & password yang dapat mengubah password", "ERROR", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(160, 25, 3, 1);
                goto inputIdPegawai;
            }
            else{
                fwrite(&p, sizeof(p), 1, temp);
            }
        }
        fclose(arsPegawai);
        fclose(temp);

        arsPegawai = fopen("../Data/Pegawai.dat","wb");
        temp = fopen("../Temp/PegawaiTemp.dat","rb");
        while (fread(&p, sizeof(p), 1, temp)){
            fwrite(&p, sizeof(p), 1, arsPegawai);
        }
        fclose(arsPegawai);
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

    update_option_pegawai();
}

void update_tglLahir_Pegawai(){
    int id_pegawai;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_pegawai();
        showPegawai();
        desain_box();
        inputIdPegawai:
        gotoPrintText(144, 11, "E D I T");
        gotoPrintText(135, 13, "T A N G G A L  L A H I R");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        if(!arsPegawai){
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_pegawai();
        }
        fclose(arsPegawai);

        //-----Menginput ID Pegawai untuk divalidasi-----
        do{//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Pembuka)
            found = 0;
            showCursor();
            gotoPrintText(127, 40, "-Input [0] pada ID Pegawai untuk batal-");
            gotoPrintText(134, 25,"I D  P E G A W A I  : PGW-");
            gotoxy(160, 25);
            limitIntChar(&id_pegawai, 3);

            arsPegawai = fopen("../Data/Pegawai.dat", "rb");
            while(fread(&p, sizeof(p), 1, arsPegawai)){
                if(p.id_pegawai == id_pegawai){
                    found = 1;
                    break;
                }
                else if(id_pegawai == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_pegawai();
                }
            }
            fclose(arsPegawai);

            if(found == 0){
                MessageBox(NULL, "ID Pegawai tidak ditemukan", "ID Pegawai tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id pegawai yang diinput sebelumnya-----
                setClearArea(160, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        showCursor();
        gotoPrintText(134, 27, "T G L  L A H I R  L A M A :");
        gotoPrintText(134, 28, "=>");
        gotoPrintText(138, 28, "/");
        gotoPrintText(141, 28, "/");
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        temp = fopen("../Temp/PegawaiTemp.dat", "wb");
        while(fread(&p, sizeof(p), 1, arsPegawai)){
            if(p.id_pegawai == id_pegawai){

                gotoxy(136, 28);
                printf("%02d", p.tanggal_lahir.hari);
                gotoxy(139, 28);
                printf("%02d", p.tanggal_lahir.bulan);
                gotoxy(142, 28);
                printf("%0d", p.tanggal_lahir.tahun);

                gotoPrintText(134, 30, "T G L  L A H I R  B A R U :");
                gotoPrintText(134, 31, "=>");
                gotoPrintText(138, 31, "/");
                gotoPrintText(141, 31, "/");
                //-----Fungsi input tanggal lahir pegawai-----
            int error = 0;
            //Validasi input tanggal
            hari:
            do{
                gotoxy(136, 31);
                limitDateChar(&p.tanggal_lahir.hari, 2);
                if(p.tanggal_lahir.hari == 0){
                    setClearArea(160, 25, 3, 1);
                    setClearArea(134, 27, 28, 5);
                    goto inputIdPegawai;
                }
                    if(p.tanggal_lahir.hari > 31){
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
                limitDateChar(&p.tanggal_lahir.bulan, 2);
                if(p.tanggal_lahir.bulan == 0){
                    setClearArea(160, 25, 3, 1);
                    setClearArea(134, 27, 28, 5);
                    goto inputIdPegawai;
                }
                    if(p.tanggal_lahir.bulan > 12){
                    setClearArea(139, 31, 2, 1);
                    MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    error = 1;
                }
                else if(p.tanggal_lahir.hari > 29  && p.tanggal_lahir.bulan == 2){
                    setClearArea(136, 31, 2, 1);
                    setClearArea(139, 31, 2, 1);
                    MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto hari;
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
                limitDateChar(&p.tanggal_lahir.tahun, 4);
                if(p.tanggal_lahir.tahun == 0){
                    setClearArea(160, 25, 3, 1);
                    setClearArea(134, 27, 28, 5);
                    goto inputIdPegawai;
                }
                if(local->tm_year + 1900 - p.tanggal_lahir.tahun > 30 || local->tm_year + 1900 - p.tanggal_lahir.tahun < 18){
                    setClearArea(142, 31, 4, 1);
                    int tahunAwal = local->tm_year + 1900 - 30;
                    int tahunAkhir = local->tm_year + 1900 - 18;
                    string message;

                    snprintf(message, sizeof(message), "Rentang Tahun : %d - %d", tahunAwal, tahunAkhir);

                    MessageBox(NULL, message, "Tahun tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    error = 1;
                }
                //-----Validasi tahun kabisat-----
                else if (p.tanggal_lahir.bulan == 2 && p.tanggal_lahir.hari > 28 && kabisat(p.tanggal_lahir.tahun) == false){
                    setClearArea(136, 31, 2, 1);
                    setClearArea(139, 31, 2, 1);
                    setClearArea(142, 31, 4, 1);
                    MessageBox(NULL, "Bukan Tahun Kabisat, silahkan masukkan ulang tanggal", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto hari;
                }
                else{
                    error = 0;
                }
            }while (error == 1);
                fwrite(&p, 1, sizeof(p), temp);
            }
            else{
                fwrite(&p, 1, sizeof(p), temp);
            }
        }
        fclose(arsPegawai);
        fclose(temp);

        arsPegawai = fopen("../Data/Pegawai.dat","wb");
        temp = fopen("../Temp/PegawaiTemp.dat","rb");
        while (fread(&p, sizeof(p), 1, temp)){
            fwrite(&p, sizeof(p), 1, arsPegawai);
        }
        fclose(arsPegawai);
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

    update_option_pegawai();
}

void hapusPegawai()
{
    int id_pegawai;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_pegawai();
        showPegawai();
        desain_box();
        gotoPrintText(143, 11, "H A P U S");
        gotoPrintText(137, 13, "D A T A  P E G A W A I");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        if(!arsPegawai){
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_pegawai();
        }
        fclose(arsPegawai);

        //-----Menginput ID Pegawai untuk divalidasi-----
        do{//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Pegawai untuk batal-");
            gotoPrintText(134, 25,"I D  P E G A W A I  : PGW-");
            gotoxy(160, 25);
            limitIntChar(&id_pegawai, 3);

            arsPegawai = fopen("../Data/Pegawai.dat", "rb");
            while(fread(&p, sizeof(p), 1, arsPegawai)){
                if(p.id_pegawai == id_pegawai){
                    found = 1;
                    break;
                }
                else if(id_pegawai == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_pegawai();
                }
            }
            fclose(arsPegawai);

            if(found == 0){
                MessageBox(NULL, "ID Pegawai tidak ditemukan", "ID Pegawai tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id pegawai yang diinput sebelumnya-----
                setClearArea(160, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        temp = fopen("../Temp/PegawaiTemp.dat", "wb");
        while(fread(&p, 1, sizeof(p), arsPegawai)){
            if(p.id_pegawai != id_pegawai){
                fwrite(&p, sizeof(p), 1, temp);
            }
        }
        fclose(arsPegawai);
        fclose(temp);

        arsPegawai = fopen("../Data/Pegawai.dat","wb");
        temp = fopen("../Temp/PegawaiTemp.dat","rb");
        while (fread(&p, sizeof(p), 1, temp)){
            fwrite(&p, sizeof(p), 1, arsPegawai);
        }
        fclose(arsPegawai);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin menghapus data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

    }while(response == IDYES);//Konfirmasi untuk ingin mengubah data lagi atau tidak (Penutup)
    hideCursor();

    CRUD_option();
    CRUD_function_pegawai();
}