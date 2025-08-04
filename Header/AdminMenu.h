void dashboardAdminDisplay();
void dashboardAdminMenuOption();
void buttonAdminMenuTransition(int optional);
void adminMenuFunction();
void profilePegawai();
void CRUD_function_jenisMenu();
void CRUD_function_menu();
void CRUD_function_paketMenu();
void CRUD_function_merchandise();
void CRUD_function_ruangan();
void CRUD_function_diskon();

void dashboardAdminDisplay(){
    system("color 06");
    dashboardDesign();
    printPicture(44, 2, "../Picture/Dashboard Admin - Text.txt");
    dashboardAdminMenuOption();
}

void dashboardAdminMenuOption(){
    setColorBlock(0, 6);
    gotoPrintText(12, 11, "P R O F I L E");
    for(int i = 12; i<= 24; i++){
        gotoPrintASCII(i, 12, 196);
    }

    gotoPrintText(14, 15, "J E N I S");
    gotoPrintText(15, 17, "M E N U");
    for(int i = 14; i<= 22; i++){
        gotoPrintASCII(i, 18, 196);
    }

    gotoPrintText(15, 21, "M E N U");
    for(int i = 15; i<= 21; i++){
        gotoPrintASCII(i, 22, 196);
    }
    gotoPrintText(14, 25, "P A K E T");
    gotoPrintText(15, 27, "M E N U");
    for(int i = 14; i<= 22; i++){
        gotoPrintASCII(i, 28, 196);
    }
    gotoPrintText(8, 31, "M E R C H A N D I S E");
    for(int i = 8; i<= 28; i++){
        gotoPrintASCII(i, 32, 196);
    }

    gotoPrintText(12, 35, "R U A N G A N");
    for(int i = 12; i<= 24; i++){
        gotoPrintASCII(i, 36, 196);
    }

    gotoPrintText(13, 39, "D I S K O N");
    for(int i = 13; i<= 24; i++){
        gotoPrintASCII(i, 40, 196);
    }

    gotoPrintText(13, 43, "K E L U A R");
    for(int i = 13; i<= 23; i++){
        gotoPrintASCII(i, 44, 196);
    }

    adminMenuFunction();
}

void buttonAdminMenuTransition(int optional){
    switch (optional){
    case 1:
        button(6, 10, 24, 2, 0, 6);
        hapusButton(6, 14, 24, 4, 6, 6);
        hapusButton(6, 20, 24, 2, 6, 6);
        hapusButton(6, 24, 24, 4, 6, 6);
        hapusButton(6, 30, 24, 2, 6, 6);
        hapusButton(6, 34, 24, 2, 6, 6);
        hapusButton(6, 38, 24, 2, 6, 6);
        hapusButton(6, 42, 24, 2, 6, 6);
        break;
    case 2:
        hapusButton(6, 10, 24, 2, 6, 6);
        button(6, 14, 24, 4, 0, 6);
        hapusButton(6, 20, 24, 2, 6, 6);
        hapusButton(6, 24, 24, 4, 6, 6);
        hapusButton(6, 30, 24, 2, 6, 6);
        hapusButton(6, 34, 24, 2, 6, 6);
        hapusButton(6, 38, 24, 2, 6, 6);
        hapusButton(6, 42, 24, 2, 6, 6);
        break;
    case 3:
        hapusButton(6, 10, 24, 2, 6, 6);
        hapusButton(6, 14, 24, 4, 6, 6);
        button(6, 20, 24, 2, 0, 6);
        hapusButton(6, 24, 24, 4, 6, 6);
        hapusButton(6, 30, 24, 2, 6, 6);
        hapusButton(6, 34, 24, 2, 6, 6);
        hapusButton(6, 38, 24, 2, 6, 6);
        hapusButton(6, 42, 24, 2, 6, 6);
        break;
    case 4:
        hapusButton(6, 10, 24, 2, 6, 6);
        hapusButton(6, 14, 24, 4, 6, 6);
        hapusButton(6, 20, 24, 2, 6, 6);
        button(6, 24, 24, 4, 0, 6);
        hapusButton(6, 30, 24, 2, 6, 6);
        hapusButton(6, 34, 24, 2, 6, 6);
        hapusButton(6, 38, 24, 2, 6, 6);
        hapusButton(6, 42, 24, 2, 6, 6);
        break;
    case 5:
        hapusButton(6, 10, 24, 2, 6, 6);
        hapusButton(6, 14, 24, 4, 6, 6);
        hapusButton(6, 20, 24, 2, 6, 6);
        hapusButton(6, 24, 24, 4, 6, 6);
        button(6, 30, 24, 2, 0, 6);
        hapusButton(6, 34, 24, 2, 6, 6);
        hapusButton(6, 38, 24, 2, 6, 6);
        hapusButton(6, 42, 24, 2, 6, 6);
        break;
    case 6:
        hapusButton(6, 10, 24, 2, 6, 6);
        hapusButton(6, 14, 24, 4, 6, 6);
        hapusButton(6, 20, 24, 2, 6, 6);
        hapusButton(6, 24, 24, 4, 6, 6);
        hapusButton(6, 30, 24, 2, 6, 6);
        button(6, 34, 24, 2, 0, 6);
        hapusButton(6, 38, 24, 2, 6, 6);
        hapusButton(6, 42, 24, 2, 6, 6);
        break;
    case 7:
        hapusButton(6, 10, 24, 2, 6, 6);
        hapusButton(6, 14, 24, 4, 6, 6);
        hapusButton(6, 20, 24, 2, 6, 6);
        hapusButton(6, 24, 24, 4, 6, 6);
        hapusButton(6, 30, 24, 2, 6, 6);
        hapusButton(6, 34, 24, 2, 6, 6);
        button(6, 38, 24, 2, 0, 6);
        hapusButton(6, 42, 24, 2, 6, 6);
        break;
    case 8:
        hapusButton(6, 10, 24, 2, 6, 6);
        hapusButton(6, 14, 24, 4, 6, 6);
        hapusButton(6, 20, 24, 2, 6, 6);
        hapusButton(6, 24, 24, 4, 6, 6);
        hapusButton(6, 30, 24, 2, 6, 6);
        hapusButton(6, 34, 24, 2, 6, 6);
        hapusButton(6, 38, 24, 2, 6, 6);
        button(6, 42, 24, 2, 0, 6);
        break;
    }
}

void adminMenuFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(6, 10, 24, 2, 0, 6);
    profilePegawai();
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 8){
                optional +=1;
                buttonAdminMenuTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonAdminMenuTransition(optional);
            }break;
        case ENTER:
            switch(optional){
        case 1:
            found = 1;break;
        case 2:
            found = 2;break;
        case 3:
            found = 3;break;
        case 4:
            found = 4;break;
        case 5:
            found = 5;break;
        case 6:
            found = 6;break;
        case 7:
            found = 7;break;
        case 8:
            found = 8;break;
            }
        }
    }
    if(found == 2){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_jenisMenu();
    }
    if(found == 3){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_menu();
    }
    if(found == 4){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_paketMenu();
    }
    if(found == 5){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_merchandise();
    }
    if(found == 6){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_ruangan();
    }
    if(found == 7){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_diskon();
    }
    if (found == 8){
        system("cls");
        system("color 06");
        tampilanLoginScreen();
    }
}

void profilePegawai(){
    FILE *file1;
    FILE *file2;

    //-----Desain tampilan data pegawai-----

    //Memberikan warna fill box kuning
    setColorBlock(0, 6);
    for (int panjang = 51; panjang <= 116; panjang++){
        for (int lebar = 15; lebar <= 38; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //Memberikan warna box-outline putih
    setColorBlock(0, 7);
    for (int panjang = 53; panjang <= 118; panjang++){
        for (int lebar = 14; lebar <= 39; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //Memberikan warna fill box kuning
    setColorBlock(0, 6);
    for (int panjang = 55; panjang <= 120; panjang++){
        for (int lebar = 13; lebar <= 40; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //Memberikan frame
    //Frame pojok kiri atas
    gotoPrintASCII(56, 13, 201);
    for (int i = 57; i <= 58; i++){
        gotoPrintASCII(i, 13, 205);
    }
    gotoPrintASCII(56, 14, 186);

    //Frame pojok kanan atas
    gotoPrintASCII(119, 13, 187);
    for (int i = 117; i <= 118; i++){
        gotoPrintASCII(i, 13, 205);
    }
    gotoPrintASCII(119, 14, 186);

    //Frame pojok kiri bawah
    gotoPrintASCII(56, 40, 200);
    for(int i = 57; i <= 58; i++){
        gotoPrintASCII(i, 40, 205);
    }
    gotoPrintASCII(56, 39, 186);

    //Frame pojok kanan bawah
    gotoPrintASCII(119, 40, 188);
    for(int i = 117; i <= 118; i++){
        gotoPrintASCII(i, 40, 205);
    }
    gotoPrintASCII(119, 39, 186);

    //Menampilkan tulisan Profile Pegawai
    setColorBlock(0, 6);
    for (int panjang = 58; panjang <= 117; panjang++){
        for (int lebar = 15; lebar <= 21; lebar++){
            gotoPrintASCII(panjang, lebar, 176);
        }
    }

    gotoPrintText(82, 17, "P R O F I L E");
    gotoPrintText(82, 19, "P E G A W A I");

    setColorBlock(0, 6);
    for (int panjang = 58; panjang <= 117; panjang++){
        for (int lebar = 25; lebar <= 35; lebar++){
            gotoPrintASCII(panjang, lebar, 176);
        }
    }

    setColorBlock(7, 0);
    printPicture(124, 17, "../Picture/Profile Icon.txt");

    //-----Menampilkan data pegawai-----
    setColorBlock(0, 6);
    file1 = fopen("../Data/Pegawai.dat", "rb");
    file2 = fopen("../Data/Role.dat", "rb");

    while(fread(&p, sizeof(p), 1, file1)){
            if(strcmp(username, p.username) == 0){
                gotoxy(60, 27);
                printf("N A M A\t\t\t : %s", p.nama);

                gotoxy(60, 29);
                printf("T A N G G A L  L A H I R\t : %02d/%02d/%04d", p.tanggal_lahir.hari, p.tanggal_lahir.bulan, p.tanggal_lahir.tahun);
                while(fread(&r, sizeof(r), 1, file2)){
                    if(p.id_role == r.id_role){
                        gotoxy(60, 31);
                        printf("R O L E\t\t\t : %s", r.nama_role);

                        gotoxy(60, 33);
                        printf("G A J I\t\t\t : "); rupiah(r.gaji);
                    }
                }
                fclose(file2);
            }
    }
    fclose(file1);
}

void CRUD_function_jenisMenu(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 16, 21, 2, 7, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonCRUDTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonCRUDTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formJenisMenu();
        showCursor();
        insertJenisMenu();
        hideCursor();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_jenisMenu();
    }
    if(found == 3){
        setClearArea(85, 14, 40, 22);
        updateJenisMenu();
    }
    if(found == 4){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_jenisMenu();
        showJenisMenu();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_jenisMenu();
    }
    if(found == 5){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_jenisMenu();
        deleteJenisMenu();
    }
    if(found == 6){
        hapusButton(6, 14, 24, 4, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardAdminMenuOption();
    }
}

void CRUD_function_diskon(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 16, 21, 2, 7, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonCRUDTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonCRUDTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formDiskon();
        showCursor();
        insertDiskon();
        hideCursor();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_diskon();
    }
    if(found == 3){
        setClearArea(85, 14, 40, 22);
        update_option_diskon();
    }
    if(found == 4){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_diskon();
        showDiskon();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_diskon();
    }
    if(found == 5){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_diskon();
        deleteDiskon();
    }
    if(found == 6){
        hapusButton(6, 38, 24, 2, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardAdminMenuOption();
    }
}

void CRUD_function_merchandise(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 16, 21, 2, 7, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonCRUDTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonCRUDTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formMerchandise();
        showCursor();
        insertMerchandise();
        hideCursor();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_merchandise();
    }
    if(found == 3){
        setClearArea(85, 14, 40, 22);
        update_option_merchandise();
    }
    if(found == 4){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_merchandise();
        showMerchandise();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_merchandise();
    }
    if(found == 5){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_merchandise();
        deleteMerchandise();
    }
    if(found == 6){
        hapusButton(6, 30, 24, 2, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardAdminMenuOption();
    }
}

void CRUD_function_menu(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 16, 21, 2, 7, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonCRUDTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonCRUDTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formMenu();
        showCursor();
        insertMenu();
        hideCursor();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_menu();
    }
    if(found == 3){
        setClearArea(85, 14, 40, 22);
        update_option_menu();
    }
    if(found == 4){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_menu();
        showMenu();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_menu();
    }
    if(found == 5){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_menu();
        deleteMenu();
    }
    if(found == 6){
        hapusButton(6, 20, 24, 2, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardAdminMenuOption();
    }
}

void CRUD_function_paketMenu(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 16, 21, 2, 7, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonCRUDTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonCRUDTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formPaket();
        showCursor();
        insertPaket();
        hideCursor();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_paketMenu();
    }
    if(found == 3){
        setClearArea(85, 14, 40, 22);
        update_option_paket();
    }
    if(found == 4){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        tabel_detail_paket();
        showPaket();
    }
    if(found == 5){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        deletePaket();
    }
    if(found == 6){
        hapusButton(6, 24, 24, 4, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardAdminMenuOption();
    }
}

void CRUD_function_ruangan(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 16, 21, 2, 7, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonCRUDTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonCRUDTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formRuangan();
        showCursor();
        insertRuangan();
        hideCursor();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_ruangan();
    }
    if(found == 3){
        setClearArea(85, 14, 40, 22);
        update_option_ruangan();
    }
    if(found == 4){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_ruangan();
        showRuangan();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_ruangan();
    }
    if(found == 5){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        desain_tabel_ruangan();
        deleteRuangan();
    }
    if(found == 6){
        hapusButton(6, 34, 24, 2, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardAdminMenuOption();
    }
}