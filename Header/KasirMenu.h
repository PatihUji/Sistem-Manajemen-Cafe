void dashboardKasirDisplay();
void dashboardKasirMenuOption();
void buttonKasirMenuTransition(int optional);
void kasirMenuFunction();
void transaksi_option();
void buttonTransaksiTransition(int optional);
void transaksiMerchandiseFunction();
void transaksiMemberFunction();
void transaksiBookingFunction();
void transaksiMenuFunction();

void dashboardKasirDisplay(){
    system("color 06");
    dashboardDesign();
    printPicture(44, 2, "../Picture/Dashboard Kasir - Text.txt");
    dashboardKasirMenuOption();
}

dashboardKasirMenuOption(){
    setColorBlock(0, 6);
    gotoPrintText(12, 13, "P R O F I L E");
    for(int i = 12; i<= 24; i++){
        gotoPrintASCII(i, 14, 196);
    }
    gotoPrintText(14, 17, "P E S A N");
    gotoPrintText(7, 19, "M A K A N  &  M I N U M");
    for(int i = 7; i<= 29; i++){
        gotoPrintASCII(i, 20, 196);
    }
    gotoPrintText(11, 23, "P E N J U A L A N");
    gotoPrintText(9, 25, "M E R C H A N D I S E");
    for(int i = 9; i<= 29; i++){
        gotoPrintASCII(i, 26, 196);
    }
    gotoPrintText(12, 29, "B O O K I N G");
    gotoPrintText(12, 31, "R U A N G A N");
    for(int i = 12; i<= 24; i++){
        gotoPrintASCII(i, 32, 196);
    }
    gotoPrintText(8, 35, "P E N D A F T A R A N");
    gotoPrintText(13, 37, "M E M B E R");
    for(int i = 8; i<= 28; i++){
        gotoPrintASCII(i, 38, 196);
    }
    gotoPrintText(13, 41, "K E L U A R");
    for(int i = 13; i<= 23; i++){
        gotoPrintASCII(i, 42, 196);
    }

    kasirMenuFunction();
}

void buttonKasirMenuTransition(int optional){
    switch (optional){
    case 1:
        button(6, 12, 24, 2, 0, 6);
        hapusButton(6, 16, 24, 5, 6, 6);
        hapusButton(6, 22, 24, 5, 6, 6);
        hapusButton(6, 28, 24, 5, 6, 6);
        hapusButton(6, 34, 24, 5, 6, 6);
        hapusButton(6, 40, 24, 2, 6, 6);
        break;
    case 2:
        hapusButton(6, 12, 24, 2, 6, 6);
        button(6, 16, 24, 5, 0, 6);
        hapusButton(6, 22, 24, 5, 6, 6);
        hapusButton(6, 28, 24, 5, 6, 6);
        hapusButton(6, 34, 24, 5, 6, 6);
        hapusButton(6, 40, 24, 2, 6, 6);
        break;
    case 3:
        hapusButton(6, 12, 24, 2, 6, 6);
        hapusButton(6, 16, 24, 5, 6, 6);
        button(6, 22, 24, 5, 0, 6);
        hapusButton(6, 28, 24, 5, 6, 6);
        hapusButton(6, 34, 24, 5, 6, 6);
        hapusButton(6, 40, 24, 2, 6, 6);
        break;
    case 4:
        hapusButton(6, 12, 24, 2, 6, 6);
        hapusButton(6, 16, 24, 5, 6, 6);
        hapusButton(6, 22, 24, 5, 6, 6);
        button(6, 28, 24, 5, 0, 6);
        hapusButton(6, 34, 24, 5, 6, 6);
        hapusButton(6, 40, 24, 2, 6, 6);
        break;
    case 5:
        hapusButton(6, 12, 24, 2, 6, 6);
        hapusButton(6, 16, 24, 5, 6, 6);
        hapusButton(6, 22, 24, 5, 6, 6);
        hapusButton(6, 28, 24, 5, 6, 6);
        button(6, 34, 24, 5, 0, 6);
        hapusButton(6, 40, 24, 2, 6, 6);
        break;
    case 6:
        hapusButton(6, 12, 24, 2, 6, 6);
        hapusButton(6, 16, 24, 5, 6, 6);
        hapusButton(6, 22, 24, 5, 6, 6);
        hapusButton(6, 28, 24, 5, 6, 6);
        hapusButton(6, 34, 24, 5, 6, 6);
        button(6, 40, 24, 2, 0, 6);
        break;
    }
}

void kasirMenuFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(6, 12, 24, 2, 0, 6);
    profilePegawai();
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 6){
                optional +=1;
                buttonKasirMenuTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonKasirMenuTransition(optional);
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

        transaksi_option();
        transaksiMenuFunction();
    }
    if(found == 3){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        transaksi_option();
        transaksiMerchandiseFunction();
    }
    if(found == 4){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        transaksi_option();
        transaksiBookingFunction();
    }
    if(found == 5){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        transaksi_option();
        transaksiMemberFunction();
    }
    if (found == 6){
        system("cls");
        system("color 06");
        tampilanLoginScreen();
    }
}

void transaksi_option(){
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
    gotoPrintText(100, 18, "T A M B A H");
    gotoPrintText(97, 20, "T R A N S A K S I");
    gotoPrintText(100, 24, "D E T A I L");
    gotoPrintText(97, 26, "T R A N S A K S I");
    gotoPrintText(99, 32, " K E L U A R");
}
void buttonTransaksiTransition(int optional){
    switch (optional){
    case 1:
        button(95, 17, 20, 5, 6, 0);
        hapusButton(95, 23, 20, 5, 0, 0);
        hapusButton(95, 31, 20, 2, 0, 0);
        break;
    case 2:
        hapusButton(95, 17, 20, 5, 0, 0);
        button(95, 23, 20, 5, 6, 0);
        hapusButton(95, 31, 20, 2, 0, 0);
        break;
    case 3:
        hapusButton(95, 17, 20, 5, 0, 0);
        hapusButton(95, 23, 20, 5, 0, 0);
        button(95, 31, 20, 2, 6, 0);
        break;
    }
}

void transaksiMerchandiseFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(95, 17, 20, 5, 6, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 3){
                optional +=1;
                buttonTransaksiTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonTransaksiTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formTransaksiMerchandise();
        showCursor();
        tambahTransaksiMerchandise();
        hideCursor();

        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        transaksi_option();
        transaksiMerchandiseFunction();
    }
    if(found == 3){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        lihatTransaksiMerchandise();
    }
    if(found == 4){
        hapusButton(6, 22, 24, 5, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardKasirMenuOption();
    }
}

void transaksiMemberFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(95, 17, 20, 5, 6, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 3){
                optional +=1;
                buttonTransaksiTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonTransaksiTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formTransaksiMember();
        showCursor();
        tambahTransaksiMember();
        hideCursor();

        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        transaksi_option();
        transaksiMemberFunction();
    }
    if(found == 3){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        lihatTransaksiMember();
    }
    if(found == 4){
        hapusButton(6, 34, 24, 5, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardKasirMenuOption();
    }
}

void transaksiBookingFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(95, 17, 20, 5, 6, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 3){
                optional +=1;
                buttonTransaksiTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonTransaksiTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formTransaksiRuangan();
        showCursor();
        tambahTransaksiRuangan();
        hideCursor();

        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        transaksi_option();
        transaksiBookingFunction();
    }
    if(found == 3){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        lihatTransaksiRuangan();
    }
    if(found == 4){
        hapusButton(6, 28, 24, 5, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardKasirMenuOption();
    }
}

void transaksiMenuFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(95, 17, 20, 5, 6, 0);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 3){
                optional +=1;
                buttonTransaksiTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonTransaksiTransition(optional);
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
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        formTransaksiPesananMakandanMinum();
        showCursor();
        tambahTransaksiPesananMakandanMinum();
        hideCursor();

        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        transaksi_option();
        transaksiMenuFunction();
    }
    if(found == 3){
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }

        lihatTransaksiPesananMakandanMinum();
    }
    if(found == 4){
        hapusButton(6, 16, 24, 5, 6, 6);
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 166; panjang++){
            for (int lebar = 10; lebar <= 44; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        dashboardKasirMenuOption();
    }
}