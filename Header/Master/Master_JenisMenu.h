void desain_tabel_jenisMenu();
void formJenisMenu();
void insertJenisMenu();
void showJenisMenu();
void deleteJenisMenu();
void updateJenisMenu();

void desain_tabel_jenisMenu(){
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
    for (int i = 48;i <= 82;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas pertama
    gotoPrintASCII(83, 10, 203);

    // Frame atas kedua
     for (int i = 84;i <= 119;i++){
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
        gotoPrintASCII(83, i, 186);
    }

    //Frame kiri bawah
    gotoPrintASCII(47, 14, 204);

    //Frame kanan bawah
    gotoPrintASCII(120, 14, 185);

    //Frame bawah pertama
    for (int i = 48;i <= 82;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah pertama
    gotoPrintASCII(83, 14, 206);

    //Frame bawah kedua
    for (int i = 84;i <= 119;i++){
        gotoPrintASCII(i, 14, 205);
    }


    //-----Atribut Tabel-----
    gotoPrintText(64, 11, "I D");
    gotoPrintText(56, 13, "J E N I S  M E N U");
    gotoPrintText(98, 11, "N A M A");
    gotoPrintText(93, 13, "J E N I S  M E N U");
}

void formJenisMenu(){
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
    gotoPrintText(94, 13, "J E N I S  M E N U");
    gotoPrintText(81, 19, "I D  J E N I S  M E N U     : JNM-");
    gotoPrintText(81, 21, "N A M A  J E N I S  M E N U : ");
}

void insertJenisMenu(){
    int response;
    do
    {//Konfiramsi apakah ingin menambah data lagi (Pembuka)
        gotoPrintText(80, 40, "-Input [x] pada Nama Jenis Menu untuk batal-");
        jm.id_jenisMenu = 1;
        arsJenisMenu = fopen("../Data/Jenis Menu.dat", "a+b");

        if (arsJenisMenu != NULL) {
            while (fread(&jm, sizeof(jm), 1, arsJenisMenu)) {
                jm.id_jenisMenu += 1;
            }
        }

        //-----Fungsi input ID jenis menu-----
        gotoxy(115, 19);
        printf("%03d", jm.id_jenisMenu);

        //-----Fungsi input nama jenis menu-----
        gotoxy(111, 21);
        fflush(stdin);
        limitStrChar(jm.nama_jenisMenu, 15);
        if(strcmpi("x", jm.nama_jenisMenu)==0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_jenisMenu();
        }

        fwrite(&jm, sizeof(jm), 1, arsJenisMenu);
        fclose(arsJenisMenu);
        
        response = MessageBox(NULL, "Apakah Anda ingin menambahkan jenis menu lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        setClearArea(115, 19, 3, 1);
        setClearArea(111, 21, 15, 1);
    }while (response == IDYES);//Konfirmasi apakah ingin menambah data lagi (Penutup)
}

void showJenisMenu(){
    int i = 0;
    arsJenisMenu = fopen("../Data/Jenis Menu.dat","rb");
    while(fread(&jm,sizeof(jm),1,arsJenisMenu)){
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
        for (int panjang = 47; panjang <= 120; panjang++){
            for (int lebar = 15+i; lebar <= 15+i+1; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        //Buat frame vertikal tabel
        for(int j = 11; j <= 15+i; j++){
            gotoPrintASCII(47, j, 186);
            gotoPrintASCII(120, j, 186);
            gotoPrintASCII(83, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(47, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(83, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(120, 15+i+1, 188);

        //Buat frame bawah pertama
        for (int j = 48;j <= 82;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 84;j <= 119;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //-----Memperlihatkan data yang telah diinput-----
        gotoxy(62, 15+i);
        printf("JNM-%03d", jm.id_jenisMenu);

        gotoxy(95, 15+i);
        printf("%s", jm.nama_jenisMenu);

        i++;
    }
    fclose(arsJenisMenu);
}

void deleteJenisMenu(){
    int id_jenisMenu;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_jenisMenu();
        showJenisMenu();
        desain_box();
        gotoPrintText(143, 11, "H A P U S");
        gotoPrintText(139, 13, "J E N I S  M E N U");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsJenisMenu = fopen("../Data/Jenis Menu.dat", "rb");
        if(!arsJenisMenu){
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 168; panjang++){
                for (int lebar = 10; lebar <=46; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_jenisMenu();
        }
        fclose(arsJenisMenu);

        //-----Menginput ID jenis menu untuk divalidasi-----
        do{//Memvalidasi apakah ID jenis menu yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "Input[0] pada ID Jenis Menu untuk batal");
            gotoPrintText(131, 25,"I D  J E N I S  M E N U : JNM-");
            id_jenisMenu :
            gotoxy(161, 25);
            limitIntChar(&id_jenisMenu, 3);

            arsMenu = fopen("../Data/Menu.dat", "rb");
            while(fread(&m,sizeof(m),1,arsMenu)){
                if(id_jenisMenu == m.id_jenisMenu){
                    MessageBox(NULL, "Tidak didapat dihapus karena terikat dengan data lain", "Foreign Key Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    setClearArea(161, 25, 3, 1);
                    goto id_jenisMenu;
                }
            }

            arsJenisMenu = fopen("../Data/Jenis Menu.dat", "rb");
            while(fread(&jm, sizeof(jm), 1, arsJenisMenu)){
                if(jm.id_jenisMenu == id_jenisMenu){
                    found = 1;
                    break;
                }
                else if(id_jenisMenu == 0){
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
            fclose(arsJenisMenu);

            if(found == 0){
                MessageBox(NULL, "ID Jenis Menu tidak ditemukan", "ID Jenis Menu tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id jenis menu yang diinput sebelumnya-----
                setClearArea(161, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID jenis menu yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsJenisMenu = fopen("../Data/Jenis Menu.dat", "rb");
        temp = fopen("../Temp/JenisMenuTemp.dat", "wb");
        while(fread(&jm, sizeof(jm), 1, arsJenisMenu)){
            if(jm.id_jenisMenu != id_jenisMenu){
                fwrite(&jm, sizeof(jm), 1, temp);
            }
        }
        fclose(arsJenisMenu);
        fclose(temp);

        arsJenisMenu = fopen("../Data/Jenis Menu.dat","wb");
        temp = fopen("../Temp/JenisMenuTemp.dat","rb");
        while (fread(&jm, sizeof(jm), 1, temp)){
            fwrite(&jm, sizeof(jm), 1, arsJenisMenu);
        }
        fclose(arsJenisMenu);
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
    CRUD_function_jenisMenu();
}
void updateJenisMenu(){
    int id_jenisMenu;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_jenisMenu();
        showJenisMenu();
        desain_box();
        inputIdJenisMenu:
        gotoPrintText(139, 11, "E D I T  N A M A");
        gotoPrintText(138, 13, "J E N I S  M E N U");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsJenisMenu = fopen("../Data/Jenis Menu.dat", "rb");
        if(!arsJenisMenu){
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
            CRUD_function_jenisMenu();
        }
        fclose(arsJenisMenu);

        //-----Menginput ID jenis menu untuk divalidasi-----
        do{//Memvalidasi apakah ID jenis menu yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(127, 40, "Input[0] pada ID Jenis Menu untuk batal");
            gotoPrintText(131, 25,"I D  J E N I S  M E N U : JNM-");
            gotoxy(161, 25);
            limitIntChar(&id_jenisMenu, 3);

            arsJenisMenu = fopen("../Data/Jenis Menu.dat", "rb");
            while(fread(&jm, sizeof(jm), 1, arsJenisMenu)){
                if(jm.id_jenisMenu == id_jenisMenu){
                    found = 1;
                    break;
                }
                else if(id_jenisMenu == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_jenisMenu();
                }
            }
            fclose(arsJenisMenu);

            if(found == 0){
                MessageBox(NULL, "ID Jenis Menu tidak ditemukan", "ID Jenis Menu tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id jenis menu yang diinput sebelumnya-----
                setClearArea(161, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID jenis menu yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsJenisMenu = fopen("../Data/Jenis Menu.dat", "rb");
        temp = fopen("../Temp/JenisMenuTemp.dat", "wb");
        while(fread(&jm, sizeof(jm), 1, arsJenisMenu)){
            if(jm.id_jenisMenu == id_jenisMenu){
                gotoPrintText(131, 27, "J E N I S  M E N U  L A M A : ");
                gotoPrintText(131, 28, "=>");
                gotoxy(133, 28);
                printf("%s", jm.nama_jenisMenu);
                gotoPrintText(131, 30, "J E N I S  M E N U  B A R U : ");
                gotoPrintText(131, 31, "=>");
                gotoxy(133, 31);
                limitStrChar(jm.nama_jenisMenu, 15);
                if(strcmpi(jm.nama_jenisMenu, "x")==0){
                    setClearArea(161, 25, 3, 1);
                    setClearArea(131, 27, 30, 5);
                    goto inputIdJenisMenu;
                }
                fwrite(&jm, sizeof(jm), 1, temp);
            }
            else{
                fwrite(&jm, sizeof(jm), 1, temp);
            }
        }
        fclose(arsJenisMenu);
        fclose(temp);

        arsJenisMenu = fopen("../Data/Jenis Menu.dat","wb");
        temp = fopen("../Temp/JenisMenuTemp.dat","rb");
        while (fread(&jm, sizeof(jm), 1, temp)){
            fwrite(&jm, sizeof(jm), 1, arsJenisMenu);
        }
        fclose(arsJenisMenu);
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

    CRUD_option();
    CRUD_function_jenisMenu();
}