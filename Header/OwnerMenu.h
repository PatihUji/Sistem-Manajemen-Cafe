void dashboardOwnerDisplay();
void dashboardDesign();
void dashboardMenuOption();
void buttonOwnerMenuTransition(int optional);
void ownerMenuFunction();
void CRUD_option();
void buttonCRUDTransition(int optional);
void CRUD_function_pegawai();
void CRUD_function_role();
void designHomeOwner();
void laporanOption();
void buttonLaporanTransition(int optional);
void laporanFunction();

//-----Mengumpulkan semua procedure yang berkaitan dengan Owner pada header ini untuk ditampilkan (pengganti int main)-----
void dashboardOwnerDisplay(){
    system("color 06");
    dashboardDesign();
    printPicture(42, 2, "../Picture/Dashboard Owner - Text.txt");
    dashboardMenuOption();
}

//-----Desain dashboard menu akses owner-----
void dashboardDesign(){
    //-----Memberikan warna dashboard-----
    //Memberikan warna fill box bagian kiri pada dashboard
    setColorBlock(0, 6);
    for (int panjang = 2; panjang <= 35; panjang++){
        for (int lebar = 1; lebar <= 46; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //Memberikan warna fill box bagian atas pada dashboard
    setColorBlock(0, 6);
    for (int panjang = 36; panjang <= 168; panjang++){
        for (int lebar = 1; lebar <= 8; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Membuat frame bagian dalam-----
    setColorBlock(0, 7);
    //Frame bagian pojok kiri atas bagian kepala
    gotoPrintASCII(2, 1, 201);

    //Frame bagian atas kepala
    for(int i = 3; i <= 167; i++){
        gotoPrintASCII(i, 1, 205);
    }

    //Frame bagian pojok kanan atas bagian kepala
    gotoPrintASCII(168, 1, 187);

    //Frame bagian kanan bagian kepala
    for(int i = 2; i <= 7; i++){
        gotoPrintASCII(168, i, 186);
    }

    //Frame bagian pojok kanan bawah bagian kepala
    gotoPrintASCII(168, 8, 185);

    //Frame bagian bawah bagian kepala
    for(int i = 167; i >= 36 && i <= 169; i--){
        gotoPrintASCII(i, 8, 205);
    }

    //Frame penyambung kepala dan badan berbentuk T
    gotoPrintASCII(35, 8, 203);

    //Frame bagian bawah bagian kepala
    for(int i = 34; i >= 3 && i <= 34; i--){
        gotoPrintASCII(i, 8, 205);
    }

    //Frame penyambung kepala dan badan berbentuk T
    gotoPrintASCII(2, 8, 204);

    //Frame bagian kiri bagian kepala
    for(int i = 2; i <= 7; i++){
        gotoPrintASCII(2, i, 186);
    }

    //Frame bagian pojok kiri bawah badan
    gotoPrintASCII(2, 46, 200);

    //Frame bagian bawah badan
    for(int i = 34; i >= 3 && i <= 34; i--){
        gotoPrintASCII(i, 46, 205);
    }

    //Frame penyambung navigasi dan display berbentuk T terbalik
    gotoPrintASCII(35, 46, 202);

    //Frame bagian bawah badan
    for(int i = 167; i >= 36 && i <= 169; i--){
        gotoPrintASCII(i, 46, 205);
    }

    //Frame bagian pojok kanan bawah bagian badan
    gotoPrintASCII(168, 46, 188);

    //Frame bagian kanan bagian badan
    for(int i = 9; i <= 45; i++){
        gotoPrintASCII(168, i, 186);
    }

    //Frame bagian tengah bagian badan
    for(int i = 9; i <= 45; i++){
        gotoPrintASCII(35, i, 186);
    }
    //Frame bagian kiri bagian badan
    for(int i = 9; i <= 45; i++){
        gotoPrintASCII(2, i, 186);
    }

    setColorBlock(0, 6);
    //-----Pembuatan fungsi tanggal realtime----
    Tanggal();

    //Pembuatan pembatas antara tulisan dashboard dengan tanggal
    for(int i = 2; i <= 7; i++){
        gotoPrintText(143, i, "|");
    }

    //Pembuatan pembatas antara tulisan Cafe Alfarani dan dashboard
    for(int i = 2; i <= 7; i++){
        gotoPrintText(35, i, "|");
    }

    //Pembuatan tulisan Cafe Alfarani
    gotoPrintText(15, 3, "C A F E");
    gotoPrintText(11, 5, "A L F A R A N I");
    for(int i = 11; i <= 25; i++){
        gotoPrintASCII(i, 6, 196);
    }
}

void designHomeOwner(){
    setColorBlock(6, 0);
    printPicture(80, 12, "../Picture/Owner Icon.txt");
    setColorBlock(7, 0);
    printPicture(76, 34, "../Picture/Owner Text.txt");
}

//-----Menampilkan Menu pada dashboard-----
void dashboardMenuOption(){
    setColorBlock(0, 6);
    gotoPrintText(15, 13, "H O M E");
    for(int i = 15; i<= 21; i++){
        gotoPrintASCII(i, 14, 196);
    }
    gotoPrintText(15, 17, "D A T A");
    gotoPrintText(12, 19, "P E G A W A I");
    for(int i = 12; i<= 24; i++){
        gotoPrintASCII(i, 20, 196);
    }
    gotoPrintText(15, 23, "R O L E");
    gotoPrintText(12, 25, "P E G A W A I");
    for(int i = 12; i<= 24; i++){
        gotoPrintASCII(i, 26, 196);
    }
    gotoPrintText(12, 29, "L A P O R A N");
    gotoPrintText(10, 31, "T R A N S A K S I");
    for(int i = 10; i<= 26; i++){
        gotoPrintASCII(i, 32, 196);
    }
    gotoPrintText(13, 40, "K E L U A R");
    for(int i = 13; i<= 23; i++){
        gotoPrintASCII(i, 41, 196);
    }
    ownerMenuFunction();
}

//-----Fungsi pemberi dan penghapus frame tombol-----
void buttonOwnerMenuTransition(int optional){
    switch (optional){
    case 1:
        button(9, 12, 18, 2, 0, 6);
        hapusButton(9, 16, 18, 5, 6, 6);
        hapusButton(9, 22, 18, 5, 6, 6);
        hapusButton(9, 28, 18, 5, 6, 6);
        hapusButton(9, 39, 18, 2, 6, 6);
        break;
    case 2:
        button(9, 16, 18, 5, 0, 6);
        hapusButton(9, 12, 18, 2, 6, 6);
        hapusButton(9, 22, 18, 5, 6, 6);
        hapusButton(9, 28, 18, 5, 6, 6);
        hapusButton(9, 39, 18, 2, 6, 6);
        break;
    case 3:
        hapusButton(9, 16, 18, 5, 6, 6);
        hapusButton(9, 12, 18, 2, 6, 6);
        button(9, 22, 18, 5, 0, 6);
        hapusButton(9, 28, 18, 5, 6, 6);
        hapusButton(9, 39, 18, 2, 6, 6);
        break;
    case 4:
        hapusButton(9, 16, 18, 5, 6, 6);
        hapusButton(9, 12, 18, 2, 6, 6);
        hapusButton(9, 22, 18, 5, 6, 6);
        button(9, 28, 18, 5, 0, 6);
        hapusButton(9, 39, 18, 2, 6, 6);
        break;
    case 5:
        hapusButton(9, 16, 18, 5, 6, 6);
        hapusButton(9, 12, 18, 2, 6, 6);
        hapusButton(9, 22, 18, 5, 6, 6);
        hapusButton(9, 28, 18, 5, 6, 6);
        button(9, 39, 18, 2, 0, 6);
        break;
    }
}

//-----Fungsi tombol-----
void ownerMenuFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(9, 12, 18, 2, 0, 6);
    while(found == 1){
        if(found == 1){
            designHomeOwner();
        }
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonOwnerMenuTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonOwnerMenuTransition(optional);
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
            }
        }
    }
    if(found == 2){
        setClearArea(37, 10, 121, 36);
        CRUD_option();
        CRUD_function_pegawai();
    }
    if(found == 3){
        setClearArea(37, 10, 121, 36);
        CRUD_option();
        CRUD_function_role();
    }
    if(found == 4){
        setClearArea(37, 10, 121, 36);
        laporanOption();
        laporanFunction();
        getch();
    }
    if (found == 5){
        system("cls");
        system("color 06");
        tampilanLoginScreen();
    }
}

//-----Menampilkan menu CRUD-----
void CRUD_option(){
    //Frame Opsi
    setColorBlock(6, 0);

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

    setColorBlock(7, 0);
    gotoPrintText(95, 17, "T A M B A H  D A T A");
    gotoPrintText(97, 20, "E D I T  D A T A");
    gotoPrintText(96, 23, "L I H A T  D A T A");
    gotoPrintText(96, 26, "H A P U S  D A T A");
    gotoPrintText(99, 32, " K E L U A R");
}

//-----Fungsi pemberi dan penghapus frame tombol-----
void buttonCRUDTransition(int optional){
    switch (optional){
    case 1:
        button(94, 16, 21, 2, 7, 0);
        hapusButton(94, 19, 21, 2, 0, 0);
        hapusButton(94, 22, 21, 2, 0, 0);
        hapusButton(94, 25, 21, 2, 0, 0);
        hapusButton(94, 31, 21, 2, 0, 0);
        break;
    case 2:
        hapusButton(94, 16, 21, 2, 0, 0);
        button(94, 19, 21, 2, 7, 0);
        hapusButton(94, 22, 21, 2, 0, 0);
        hapusButton(94, 25, 21, 2, 0, 0);
        hapusButton(94, 31, 21, 2, 0, 0);
        break;
    case 3:
        hapusButton(94, 16, 21, 2, 0, 0);
        hapusButton(94, 19, 21, 2, 0, 0);
        button(94, 22, 21, 2, 7, 0);
        hapusButton(94, 25, 21, 2, 0, 0);
        hapusButton(94, 31, 21, 2, 0, 0);
        break;
    case 4:
        hapusButton(94, 16, 21, 2, 0, 0);
        hapusButton(94, 19, 21, 2, 0, 0);
        hapusButton(94, 22, 21, 2, 0, 0);
        button(94, 25, 21, 2, 7, 0);
        hapusButton(94, 31, 21, 2, 0, 0);
        break;
    case 5:
        hapusButton(94, 16, 21, 2, 0, 0);
        hapusButton(94, 19, 21, 2, 0, 0);
        hapusButton(94, 22, 21, 2, 0, 0);
        hapusButton(94, 25, 21, 2, 0, 0);
        button(94, 31, 21, 2, 7, 0);
        break;
    }
}

//-----Fungsi tombol Master Pegawai-----
void CRUD_function_pegawai(){
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
    if (found == 2){
        setClearArea(85, 14, 40, 22);
        formPegawai();
        showCursor();
        insertPegawai();
        hideCursor();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_pegawai();
    }
    else if (found == 3){
        setClearArea(85, 14, 40, 22);
        update_option_pegawai();
    }
    else if(found == 4){
        setClearArea(85, 14, 40, 22);
        desain_tabel_pegawai();
        showPegawai();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_pegawai();
    }
    else if (found == 5){
        setClearArea(85, 14, 40, 22);
        desain_tabel_pegawai();
        hapusPegawai();
    }
    else if(found == 6){
        setClearArea(85, 14, 40, 22);
        hapusButton(9, 16, 18, 5, 6, 6);
        dashboardMenuOption();
    }
}

void CRUD_function_role(){
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
    if (found == 2){
        setClearArea(85, 14, 40, 22);
        formRole();
        showCursor();
        insertRole();
        hideCursor();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_role();
    }
    else if (found == 3){
        setClearArea(85, 14, 40, 22);
        updateRole();
    }
    else if(found == 4){
        setClearArea(85, 14, 40, 22);
        desain_tabel_role();
        showRole();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        CRUD_option();
        CRUD_function_role();
    }
    else if (found == 5){
        setClearArea(85, 14, 40, 22);
        desain_tabel_role();
        deleteRole();
    }
    else if(found == 6){
        setClearArea(85, 14, 40, 22);
        hapusButton(9, 22, 18, 5, 6, 6);
        dashboardMenuOption();
    }
}

void laporanOption(){
    //Frame Opsi
    setColorBlock(6, 0);

    //Frame pojok kiri atas
    gotoPrintASCII(85, 14, 201);

    //Frame atas
    for(int i = 86; i<= 122; i++){
        gotoPrintASCII(i, 14, 205);
    }

    //Frame pojok kanan atas
    gotoPrintASCII(123, 14, 187);

    //Frame kiri
    for (int i = 15;i <= 40; i++){
        gotoPrintASCII(85, i, 186);
    }

    //Frame pojok kiri bawah
    gotoPrintASCII(85, 40, 200);

    //Frame kanan
    for (int i = 15;i <= 40; i++){
        gotoPrintASCII(123, i, 186);
    }

    //Frame pojok kanan bawah
    gotoPrintASCII(123, 40, 188);

    //Frame bawah
    for (int i = 86;i <= 122; i++){
        gotoPrintASCII(i, 40, 205);
    }

    setColorBlock(7, 0);
    gotoPrintText(96, 17, "P E M E S A N A N");
    gotoPrintText(93, 19, "M A K A N  &  M I N U M");
    gotoPrintText(96, 22, "P E N J U A L A N");
    gotoPrintText(94, 24, "M E R C H A N D I S E");
    gotoPrintText(91, 27, "B O O K I N G  R U A N G A N");
    gotoPrintText(94, 30, "P E N D A F T A R A N");
    gotoPrintText(99, 32, "M E M B E R");
    gotoPrintText(99, 36, "K E L U A R");
}

void buttonLaporanTransition(int optional){
    switch (optional){
    case 1:
        button(90, 16, 29, 4, 7, 0);
        hapusButton(90, 21, 29, 4, 0, 0);
        hapusButton(90, 26, 29, 2, 0, 0);
        hapusButton(90, 29, 29, 4, 0, 0);
        hapusButton(90, 35, 29, 2, 0, 0);
        break;
    case 2:
        hapusButton(90, 16, 29, 4, 0, 0);
        button(90, 21, 29, 4, 7, 0);
        hapusButton(90, 26, 29, 2, 0, 0);
        hapusButton(90, 29, 29, 4, 0, 0);
        hapusButton(90, 35, 29, 2, 0, 0);
        break;
    case 3:
        hapusButton(90, 16, 29, 4, 0, 0);
        hapusButton(90, 21, 29, 4, 0, 0);
        button(90, 26, 29, 2, 7, 0);
        hapusButton(90, 29, 29, 4, 0, 0);
        hapusButton(90, 35, 29, 2, 0, 0);
        break;
    case 4:
        hapusButton(90, 16, 29, 4, 0, 0);
        hapusButton(90, 21, 29, 4, 0, 0);
        hapusButton(90, 26, 29, 2, 0, 0);
        button(90, 29, 29, 4, 7, 0);
        hapusButton(90, 35, 29, 2, 0, 0);
        break;
    case 5:
        hapusButton(90, 16, 29, 4, 0, 0);
        hapusButton(90, 21, 29, 4, 0, 0);
        hapusButton(90, 26, 29, 2, 0, 0);
        hapusButton(90, 29, 29, 4, 0, 0);
        button(90, 35, 29, 2, 7, 0);
        break;
    }
}

void laporanFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(90, 16, 29, 4, 7, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 5){
                optional +=1;
                buttonLaporanTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonLaporanTransition(optional);
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
    if (found == 2){
        setClearArea(85, 14, 40, 27);
        opsiWaktuLaporan();
        laporanMenuFunction();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        laporanOption();
        laporanFunction();
    }
    else if (found == 3){
        setClearArea(85, 14, 40, 27);
        opsiWaktuLaporan();
        laporanMerchandiseFunction();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        laporanOption();
        laporanFunction();
    }
    else if(found == 4){
        setClearArea(85, 14, 40, 27);
        opsiWaktuLaporan();
        laporanBookingFunction();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        laporanOption();
        laporanFunction();
    }
    else if (found == 5){
        setClearArea(85, 14, 40, 27);
        opsiWaktuLaporan();
        laporanMemberFunction();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        laporanOption();
        laporanFunction();
    }
    else if(found == 6){
        setClearArea(85, 14, 45, 22);
        hapusButton(9, 28, 18, 5, 6, 6);
        dashboardMenuOption();
    }
}

