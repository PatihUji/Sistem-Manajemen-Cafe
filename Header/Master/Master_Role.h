void desain_tabel_role();
void formRole();
void insertRole();
void showRole();
void updateRole();
void deleteRole();

void desain_tabel_role(){
    //-----Mewarnai fillbox-----
    setColorBlock(0, 6);
    for (int panjang = 47; panjang <= 120; panjang++){
        for (int lebar = 10; lebar <= 14; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Frame tabel-----
    //Frame kiri atas
    gotoPrintASCII(47, 10, 201);

    //Frame atas pertama
    for (int i = 48;i <= 63;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas pertama
    gotoPrintASCII(63, 10, 203);

    //Frame atas kedua
    for (int i = 64;i <= 99;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Pembatas atribut bagian atas kedua
    gotoPrintASCII(100, 10, 203);

    //Frame atas ketiga
    for (int i = 101;i <= 120;i++){
        gotoPrintASCII(i, 10, 205);
    }


    //Frame kanan atas
    gotoPrintASCII(120, 10, 187);


    //Frame kiri
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(47, i, 186);
    }

    //Frame kanan
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(120, i, 186);
    }

    // Frame vertikal 1
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(63, i, 186);
    }

    // Frame vertikal 2
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(100, i, 186);
    }

    //Frame kiri bawah
    gotoPrintASCII(47, 14, 204);

    //Frame kanan bawah
    gotoPrintASCII(120, 14, 185);

    //Frame bawah pertama
    for (int i = 48;i <= 63;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah pertama
    gotoPrintASCII(63, 14, 206);

    //Frame bawah kedua
    for (int i = 64;i <= 99;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Pembatas atribut bagian bawah kedua
    gotoPrintASCII(100, 14, 206);

    //Frame bawah ketiga
    for (int i = 101;i <= 119;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //-----Atribut Tabel-----
    gotoPrintText(54, 11, "I D");
    gotoPrintText(52, 13, "R O L E");
    gotoPrintText(74, 12, "N A M A  R O L E");
    gotoPrintText(107, 12, "G A J I");
}

void formRole(){
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
    gotoPrintText(94, 13, "D A T A  R O L E");
    gotoPrintText(81, 19, "I D  R O L E\t\t: RLE-");
    gotoPrintText(81, 21, "N A M A  R O L E\t: ");
    gotoPrintText(81, 23, "G A J I\t\t: Rp");
}

void insertRole(){
    int response;
        do
        {//Konfiramsi apakah ingin menambah data lagi (Pembuka)
            gotoPrintText(81, 23, "G A J I\t\t: Rp");
            gotoPrintText(83, 40, "-Input [x] pada Nama Role untuk batal-");
            r.id_role = 1;
            arsRole = fopen("../Data/Role.dat","a+b");

            //-----Fungsi pemberi ID role secara auto increment-----
            if(arsRole != NULL){
                while (fread(&r,sizeof(r),1,arsRole)){
                    r.id_role += 1;
                }
            }

            //-----Fungsi input ID role-----
            gotoxy(110, 19);
            printf("%03d", r.id_role);

            //-----Fungsi input nama role-----
            gotoxy(106, 21);
            fflush(stdin);
            limitStrChar(r.nama_role, 12);
            if(strcmpi("x", r.nama_role)==0){
                hideCursor();
                //-----Menghapus layar-----
                setColorBlock(0, 0);
                for (int panjang = 37; panjang <= 166; panjang++){
                    for (int lebar = 10; lebar <=44; lebar++){
                        gotoPrintText(panjang, lebar, " ");
                    }
                }
                CRUD_option();
                CRUD_function_role();
            }

            //-----Fungsi input gaji-----
            fflush(stdin);
            limitMoneyChar(&r.gaji, 6, 8, 109, 23);
            setClearArea(106, 23, 15, 1);

            fwrite(&r, sizeof(r), 1, arsRole);
            fclose(arsRole);

            response = MessageBox(NULL, "Apakah anda ingin menambah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(106, 21, 12, 1);
            setClearArea(106, 23, 8, 1);
        }while(response == IDYES);//Konfirmasi apakah ingin menambah data lagi (Penutup)
}

void showRole(){
    int i = 0;
    arsRole = fopen("../Data/Role.dat","rb");
    while(fread(&r,sizeof(r),1,arsRole)){
        if(i % 25 == 0 && i != 0){
            getch();
            //-----Membersihkan Data sebelumnya-----
            for(int j = 47;j <= 121;j++){
                for(int k = 15;k <= 40;k++){
                    setColorBlock(0, 0);
                    gotoPrintText(j, k, " ");
                }
            }
            i = 0;
        }
        setColorBlock(0, 6);
        //-----Mewarnai fillbox-----
        for (int panjang = 47; panjang <= 120; panjang++){
            for (int lebar = 15+i; lebar <= 15+i+1; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        //Buat frame vertikal tabel
        for(int j = 11; j <= 15+i; j++){
            gotoPrintASCII(47, j, 186);
            gotoPrintASCII(120, j, 186);
            gotoPrintASCII(63, j, 186);
            gotoPrintASCII(100, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(47, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(63, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kedua
        gotoPrintASCII(100, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(120, 15+i+1, 188);

        //Buat frame bawah pertama
        for (int j = 48;j <= 62;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 64;j <= 99;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketiga
        for (int j = 101;j <= 119;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //-----Memperlihatkan data yang telah diinput-----
        gotoxy(52, 15+i);
        printf("RLE-%03d", r.id_role);

        gotoxy(73, 15+i);
        printf("%s", r.nama_role);

        gotoxy(104, 15+i);
        rupiah(r.gaji);
        i++;
    }
    fclose(arsRole);
}

void deleteRole(){
    int id_role;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_role();
        showRole();
        desain_box();
        gotoPrintText(143, 11, "H A P U S");
        gotoPrintText(139, 13, "D A T A  R O L E");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsRole = fopen("../Data/Role.dat", "rb");
        if(!arsRole){
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 168; panjang++){
                for (int lebar = 10; lebar <=46; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_role();
        }
        fclose(arsRole);

        //-----Menginput ID Pegawai untuk divalidasi-----
        do{//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "-Input [0] pada ID Role untuk batal-");
            gotoPrintText(136, 25,"I D  R O L E : RLE-");
            id_role :
            gotoxy(155, 25);
            limitIntChar(&id_role, 3);

            arsPegawai = fopen("../Data/Pegawai.dat", "rb");
            while(fread(&p,sizeof(p),1,arsPegawai)){
                if(id_role == p.id_role){
                    MessageBox(NULL, "Tidak didapat dihapus karena terikat dengan data lain", "Foreign Key Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    setClearArea(155, 25, 3, 1);
                    goto id_role;
                }
            }
            fclose(arsPegawai);

            arsRole = fopen("../Data/Role.dat", "rb");
            while(fread(&r, sizeof(r), 1, arsRole)){
                if(r.id_role == id_role){
                    found = 1;
                    break;
                }
                else if(id_role == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=45; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_role();
                }
            }
            fclose(arsRole);

            if(found == 0){
                MessageBox(NULL, "ID Role tidak ditemukan", "ID Role tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id pegawai yang diinput sebelumnya-----
                setClearArea(155, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsRole = fopen("../Data/Role.dat", "rb");
        temp = fopen("../Temp/RoleTemp.dat", "wb");
        while(fread(&r, sizeof(r), 1, arsRole)){
            if(r.id_role != id_role){
                fwrite(&r, sizeof(r), 1, temp);
            }
        }
        fclose(arsRole);
        fclose(temp);

        arsRole = fopen("../Data/Role.dat","wb");
        temp = fopen("../Temp/RoleTemp.dat","rb");
        while (fread(&r, sizeof(r), 1, temp)){
            fwrite(&r, sizeof(r), 1, arsRole);
        }
        fclose(arsRole);
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
    CRUD_function_role();
}

void updateRole(){
    int id_role;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_role();
        showRole();
        desain_box();
        gotoPrintText(144, 11, "E D I T");
        gotoPrintText(144, 13, "G A J I");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsRole = fopen("../Data/Role.dat", "rb");
        if(!arsRole){
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
            CRUD_function_role();
        }
        fclose(arsRole);

        //-----Menginput ID Pegawai untuk divalidasi-----
        do{//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Pembuka)
            inputIdRole:
            showCursor();
            found = 0;
            gotoPrintText(129, 40, "-Input [0] pada ID Role untuk batal-");
            gotoPrintText(136, 25,"I D  R O L E : RLE-");
            gotoxy(155, 25);
            limitIntChar(&id_role, 3);

            arsRole = fopen("../Data/Role.dat", "rb");
            while(fread(&r, sizeof(r), 1, arsRole)){
                if(r.id_role == id_role){
                    found = 1;
                    break;
                }
                else if(id_role == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_role();
                }
            }
            fclose(arsRole);

            if(found == 0){
                MessageBox(NULL, "ID Role tidak ditemukan", "ID Role tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id pegawai yang diinput sebelumnya-----
                setClearArea(155, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Pegawai yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsRole = fopen("../Data/Role.dat", "rb");
        temp = fopen("../Temp/RoleTemp.dat", "wb");
        while(fread(&r, sizeof(r), 1, arsRole)){
            if(r.id_role == id_role){
                gotoPrintText(136, 27, "G A J I  S A A T  I N I");
                gotoPrintText(136, 28, "=>");
                gotoxy(138, 28);
                rupiah(r.gaji);
                gotoPrintText(136, 30, "G A J I  T E R B A R U");
                gotoPrintText(136, 31, "=>Rp");
                limitMoneyChar(&r.gaji, 1, 8, 141, 31);
                if(r.gaji == 0){
                    setClearArea(155, 25, 3, 1);
                    setClearArea(136, 27, 23, 5);
                    goto inputIdRole;
                }
                setClearArea(138, 31, 12, 1);
                gotoxy(138, 31);
                rupiah(r.gaji);
                fwrite(&r, sizeof(r), 1, temp);
            }
            else{
                fwrite(&r, sizeof(r), 1, temp);
            }
        }
        fclose(arsRole);
        fclose(temp);

        arsRole = fopen("../Data/Role.dat","wb");
        temp = fopen("../Temp/RoleTemp.dat","rb");
        while (fread(&r, sizeof(r), 1, temp)){
            fwrite(&r, sizeof(r), 1, arsRole);
        }
        fclose(arsRole);
        fclose(temp);

        response = MessageBox(NULL, "Apakah anda ingin mengubah data lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
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
    CRUD_function_role();
}