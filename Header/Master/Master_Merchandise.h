void desain_tabel_merchandise();
void formMerchandise();
void insertMerchandise();
void showMerchandise();
void deleteMerchandise();
void update_option_merchandise();
void buttonUpdateMerchandiseTransition(int optional);
void update_function_merchandise();
void update_nama_merchandise();
void update_harga_merchandise();
void update_stock_merchandise();

void desain_tabel_merchandise(){
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
    for (int i = 48;i <= 70;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas pertama
    gotoPrintASCII(71, 10, 203);

    // Frame atas kedua
    for (int i = 72;i <= 94;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas kedua
    gotoPrintASCII(95, 10, 203);

    // Frame atas ketiga
    for (int i = 96;i <= 108;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //pembatas atribut bagian atas ketiga
    gotoPrintASCII(109, 10, 203);

    // Frame atas keempat
    for (int i = 110;i <= 120;i++){
        gotoPrintASCII(i, 10, 205);
    }

    //Frame kanan atas
    gotoPrintASCII(121, 10, 187);


    //Frame kiri
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(47, i, 186);
    }

    //Frame kanan
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(121, i, 186);
    }

    // Frame vertikal 1
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(71, i, 186);
    }

    // Frame vertikal 2
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(95, i, 186);
    }

    // Frame vertikal 3
    for (int i = 11;i <= 13;i++){
        gotoPrintASCII(109, i, 186);
    }

    //Frame kiri bawah
    gotoPrintASCII(47, 14, 204);

    //Frame kanan bawah
    gotoPrintASCII(121, 14, 185);

    //Frame bawah pertama
    for (int i = 48;i <= 70;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah pertama
    gotoPrintASCII(71, 14, 206);

    //Frame bawah kedua
    for (int i = 72;i <= 94;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah kedua
    gotoPrintASCII(95, 14, 206);

    //Frame bawah ketiga
    for (int i = 96;i <= 108;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //pembatas atribut bagian bawah ketiga
    gotoPrintASCII(109, 14, 206);

    //Frame bawah keempat
    for (int i = 110;i <= 120;i++){
        gotoPrintASCII(i, 14, 205);
    }

    //-----Atribut Tabel-----
    gotoPrintText(57, 11, "I D");
    gotoPrintText(49, 13, "M E R C H A N D I S E");
    gotoPrintText(80, 11, "N A M A");
    gotoPrintText(73, 13, "M E R C H A N D I S E");
    gotoPrintText(98, 12, "H A R G A");
    gotoPrintText(111, 12, "S T O C K");
}

void formMerchandise(){
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
    gotoPrintText(92, 13, "M E R C H A N D I S E");
    gotoPrintText(81, 19, "I D  M E R C H A N D I S E : MCH-");
    gotoPrintText(81, 21, "N A M A  M E R C H         : ");
    gotoPrintText(81, 23, "H A R G A                  : Rp");
    gotoPrintText(81, 25, "S T O C K                  : ");
}

void insertMerchandise(){
    int response;
    do
    {//Konfiramsi apakah ingin menambah data lagi (Pembuka)
        gotoPrintText(80, 40, "-Input [x] pada Nama Merchandise untuk batal-");
        mc.id_merchandise = 1;
        arsMerchandise = fopen("../Data/Merchandise.dat", "a+b");

        if (arsMerchandise != NULL) {
            while (fread(&mc, sizeof(mc), 1, arsMerchandise)) {
                mc.id_merchandise += 1;
            }
        }

        //-----Fungsi input ID merchandise-----
        gotoxy(114, 19);
        printf("%03d", mc.id_merchandise);

        //-----Fungsi input nama merchandise-----
        gotoxy(110, 21);
        fflush(stdin);
        limitStrChar(mc.nama_merchandise, 15);
        if(strcmpi("x", mc.nama_merchandise)==0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            CRUD_option();
            CRUD_function_merchandise();
        }

        //Validasi harga
        do{
            //-----Fungsi input harga merchandise-----
            limitMoneyChar(&mc.harga, 4, 6, 113, 23);
            setClearArea(110, 23, 13, 1);
            gotoxy(110, 23);
            rupiah(mc.harga);
            if (mc.harga < 5000) {
                setClearArea(110, 23, 13, 1);
                MessageBox(NULL, "Harga tidak valid, silahkan input kembali", "Harga Minimal Rp5000", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            }
        }while (mc.harga < 5000);

        //Validasi stock
        do
        {
            //------Fungsi input stock merchandise------
            gotoxy(110, 25);
            limitIntChar(&mc.stock, 3);
            if(mc.stock < 1){
                setClearArea(110, 25, 3, 1);
                MessageBox(NULL, "Stock harus lebih dari 0", "Stock tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            }
        }while (mc.stock < 1);

        fwrite(&mc, sizeof(mc), 1, arsMerchandise);
        fclose(arsMerchandise);

        response = MessageBox(NULL, "Apakah Anda ingin menambahkan merchandise lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        setClearArea(114, 19, 3, 1);
        setClearArea(110, 21, 15, 1);
        setClearArea(110, 23, 15, 1);
        setClearArea(110, 25, 15, 1);
    }while (response == IDYES);//Konfirmasi apakah ingin menambah data lagi (Penutup)
}

void showMerchandise(){
    int i = 0;
    arsMerchandise = fopen("../Data/Merchandise.dat","rb");
    while(fread(&mc,sizeof(mc),1,arsMerchandise)){
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
            gotoPrintASCII(71, j, 186);
            gotoPrintASCII(95, j, 186);
            gotoPrintASCII(109, j, 186);
            gotoPrintASCII(121, j, 186);
        }

        //Buat frame pojok kiri bawah
        gotoPrintASCII(47, 15+i+1, 200);

        //Buat frame pembatas bawah atribut pertama
        gotoPrintASCII(71, 15+i+1, 202);

        //Buat frame pembatas bawah atribut kedua
        gotoPrintASCII(95, 15+i+1, 202);

        //Buat frame pembatas bawah atribut ketiga
        gotoPrintASCII(109, 15+i+1, 202);

        //Buat frame pojok kanan bawah
        gotoPrintASCII(121, 15+i+1, 188);

        //Buat frame bawah pertama
        for (int j = 48;j <= 70;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah kedua
        for (int j = 72;j <= 94;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah ketiga
        for (int j = 96;j <= 108;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //Buat frame bawah keempat
        for (int j = 110;j <= 120;j++){
            gotoPrintASCII(j, 15+i+1, 205);
        }

        //-----Memperlihatkan data yang telah diinput-----
        gotoxy(55, 15+i);
        printf("MCH-%03d", mc.id_merchandise);

        gotoxy(73, 15+i);
        printf("%s", mc.nama_merchandise);

        gotoxy(97, 15+i);
        rupiah(mc.harga);

        gotoxy(114, 15+i);
        printf("%d", mc.stock);

        i++;
    }
    fclose(arsMerchandise);
}

void update_option_merchandise(){
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
    gotoPrintText(94, 19, "M E R C H A N D I S E");
    gotoPrintText(100, 22, "H A R G A");
    gotoPrintText(100, 25, "S T O C K");
    gotoPrintText(98, 32, " K E L U A R");
    update_function_merchandise();
}

void buttonUpdateMerchandiseTransition(int optional){
    switch (optional){
    case 1:
        button(93, 16, 22, 4, 0, 6);
        hapusButton(93, 21, 22, 2, 6, 6);
        hapusButton(93, 24, 22, 2, 6, 6);
        hapusButton(93, 31, 22, 2, 6, 6);
        break;
    case 2:
        hapusButton(93, 16, 22, 4, 6, 6);
        button(93, 21, 22, 2, 0, 6);
        hapusButton(93, 24, 22, 2, 6, 6);
        hapusButton(93, 31, 22, 2, 6, 6);
        break;
    case 3:
        hapusButton(93, 16, 22, 4, 6, 6);
        hapusButton(93, 21, 22, 2, 6, 6);
        button(93, 24, 22, 2, 0, 6);
        hapusButton(93, 31, 22, 2, 6, 6);
        break;
    case 4:
        hapusButton(93, 16, 22, 4, 6, 6);
        hapusButton(93, 21, 22, 2, 6, 6);
        hapusButton(93, 24, 22, 2, 6, 6);
        button(93, 31, 22, 2, 0, 6);
        break;
    }
}

void update_function_merchandise(){
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
                buttonUpdateMerchandiseTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonUpdateMerchandiseTransition(optional);
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
        update_nama_merchandise();
    }
    if(found == 3){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_harga_merchandise();
    }
    if(found == 4){
        //-----Menghapus opsi update-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        update_stock_merchandise();
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
        CRUD_function_merchandise();
    }
}

void update_nama_merchandise(){
    int id_merchandise;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_merchandise();
        showMerchandise();
        desain_box();
        inputIdMerchandise:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(132, 13, "N A M A  M E R C H A N D I S E");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        if(!arsMerchandise){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_merchandise();
        }
        fclose(arsMerchandise);

        //-----Menginput ID Merchandise untuk divalidasi-----
        do{//Memvalidasi apakah ID Merchandise yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Merch untuk batal-");
            gotoPrintText(128, 25,"I D  M E R C H A N D I S E : MCH-");
            gotoxy(161, 25);
            limitIntChar(&id_merchandise, 3);

            arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
            while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
                if(mc.id_merchandise == id_merchandise){
                    found = 1;
                    break;
                }
                else if(id_merchandise == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_merchandise();
                }
            }
            fclose(arsMerchandise);

            if(found == 0){
                MessageBox(NULL, "ID Merchandise tidak ditemukan", "ID Merchandise tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Merchandise yang diinput sebelumnya-----
                setClearArea(161, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Merchandise yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        temp = fopen("../Temp/MerchandiseTemp.dat", "wb");
        while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
            if(mc.id_merchandise == id_merchandise){
                gotoPrintText(128, 27, "N A M A  S A A T  I N I");
                gotoPrintText(128, 28, "=>");
                gotoxy(130, 28);
                printf("%s", mc.nama_merchandise);
                gotoPrintText(128, 30, "N A M A  T E R B A R U");
                gotoPrintText(128, 31, "=>");
                gotoxy(130, 31);
                limitStrChar(mc.nama_merchandise, 15);
                if(strcmpi(mc.nama_merchandise, "x")==0){
                    setClearArea(161, 25, 3, 1);
                    setClearArea(128, 27, 24, 5);
                    goto inputIdMerchandise;
                }
                fwrite(&mc, sizeof(mc), 1, temp);
            }
            else{
                fwrite(&mc, sizeof(mc), 1, temp);
            }
        }
        fclose(arsMerchandise);
        fclose(temp);

        arsMerchandise = fopen("../Data/Merchandise.dat","wb");
        temp = fopen("../Temp/MerchandiseTemp.dat","rb");
        while (fread(&mc, sizeof(mc), 1, temp)){
            fwrite(&mc, sizeof(mc), 1, arsMerchandise);
        }
        fclose(arsMerchandise);
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

    update_option_merchandise();
}

void update_harga_merchandise(){
    int id_merchandise;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_merchandise();
        showMerchandise();
        desain_box();
        inputIdMerchandise:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(131, 13, "H A R G A  M E R C H A N D I S E");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        if(!arsMerchandise){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_merchandise();
        }
        fclose(arsMerchandise);

        //-----Menginput ID Merchandise untuk divalidasi-----
        do{//Memvalidasi apakah ID Merchandise yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Merch untuk batal-");
            gotoPrintText(128, 25,"I D  M E R C H A N D I S E : MCH-");
            gotoxy(161, 25);
            limitIntChar(&id_merchandise, 3);

            arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
            while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
                if(mc.id_merchandise == id_merchandise){
                    found = 1;
                    break;
                }
                else if(id_merchandise == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_merchandise();
                }
            }
            fclose(arsMerchandise);

            if(found == 0){
                MessageBox(NULL, "ID Merchandise tidak ditemukan", "ID Merchandise tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Merchandise yang diinput sebelumnya-----
                setClearArea(161, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Merchandise yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        temp = fopen("../Temp/MerchandiseTemp.dat", "wb");
        while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
            if(mc.id_merchandise == id_merchandise){
                gotoPrintText(128, 27, "H A R G A  S A A T  I N I");
                gotoPrintText(128, 28, "=>");
                gotoxy(130, 28);
                rupiah(mc.harga);
                inputHargaMerch:
                gotoPrintText(128, 30, "H A R G A  T E R B A R U");
                gotoPrintText(128, 31, "=>");
                gotoPrintText(130, 31, "Rp");
                limitMoneyChar(&mc.harga, 1, 6, 133, 31);
                if(mc.harga == 0){
                    setClearArea(161, 25, 3, 1);
                    setClearArea(128, 27, 26, 5);
                    goto inputIdMerchandise;
                }
                if(mc.harga > 0 && mc.harga < 5000){
                    setClearArea(133, 31, 13, 1);
                    MessageBox(NULL, "Harga tidak valid, silahkan input kembali", "Harga Minimal Rp5000", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                    goto inputHargaMerch;
                }
                setClearArea(130, 31, 12, 1);
                rupiah(mc.harga);
                fwrite(&mc, sizeof(mc), 1, temp);
            }
            else{
                fwrite(&mc, sizeof(mc), 1, temp);
            }
        }
        fclose(arsMerchandise);
        fclose(temp);

        arsMerchandise = fopen("../Data/Merchandise.dat","wb");
        temp = fopen("../Temp/MerchandiseTemp.dat","rb");
        while (fread(&mc, sizeof(mc), 1, temp)){
            fwrite(&mc, sizeof(mc), 1, arsMerchandise);
        }
        fclose(arsMerchandise);
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
    update_option_merchandise();
}

void update_stock_merchandise(){
    int id_merchandise;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_merchandise();
        showMerchandise();
        desain_box();
        inputIdMerchandise:
        gotoPrintText(143, 11, "E D I T");
        gotoPrintText(131, 13, "S T O C K  M E R C H A N D I S E");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        if(!arsMerchandise){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_merchandise();
        }
        fclose(arsMerchandise);

        //-----Menginput ID Merchandise untuk divalidasi-----
        do{//Memvalidasi apakah ID Merchandise yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Merch untuk batal-");
            gotoPrintText(128, 25,"I D  M E R C H A N D I S E : MCH-");
            gotoxy(161, 25);
            limitIntChar(&id_merchandise, 3);

            arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
            while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
                if(mc.id_merchandise == id_merchandise){
                    found = 1;
                    break;
                }
                else if(id_merchandise == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    update_option_merchandise();
                }
            }
            fclose(arsMerchandise);

            if(found == 0){
                MessageBox(NULL, "ID Merchandise tidak ditemukan", "ID Merchandise tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Merchandise yang diinput sebelumnya-----
                setClearArea(161, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Merchandise yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        temp = fopen("../Temp/MerchandiseTemp.dat", "wb");
        while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
            if(mc.id_merchandise == id_merchandise){
                gotoPrintText(128, 27, "S T O C K  S A A T  I N I");
                gotoPrintText(128, 28, "=>");
                gotoxy(130, 28);
                printf("%d", mc.stock);
                gotoPrintText(128, 30, "S T O C K  T E R B A R U");
                gotoPrintText(128, 31, "=>");
                gotoxy(130, 31);
                limitIntChar(&mc.stock, 3);
                if(mc.stock == 0){
                    setClearArea(161, 25, 3, 1);
                    setClearArea(128, 27, 28, 5);
                    goto inputIdMerchandise;
                }
                fwrite(&mc, sizeof(mc), 1, temp);
            }
            else{
                fwrite(&mc, sizeof(mc), 1, temp);
            }
        }
        fclose(arsMerchandise);
        fclose(temp);

        arsMerchandise = fopen("../Data/Merchandise.dat","wb");
        temp = fopen("../Temp/MerchandiseTemp.dat","rb");
        while (fread(&mc, sizeof(mc), 1, temp)){
            fwrite(&mc, sizeof(mc), 1, arsMerchandise);
        }
        fclose(arsMerchandise);
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

    update_option_merchandise();
}

void deleteMerchandise(){
    int id_merchandise;
    int found;
    int response;

    do{//Konfirmasi untuk ingin mengubah data lagi atau tidak (Pembuka)
        //Menampilkan data yang sudah diinput dan desain dari menu update
        desain_tabel_merchandise();
        showMerchandise();
        desain_box();
        gotoPrintText(143, 11, "H A P U S");
        gotoPrintText(131, 13, "M E R C H A N D I S E");

        //-----Memvalidasi apakah ada file berisi atau tidak-----
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        if(!arsMerchandise){
            hideCursor();
            getch();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 166; panjang++){
                for (int lebar = 10; lebar <=44; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            update_option_merchandise();
        }
        fclose(arsMerchandise);

        //-----Menginput ID Merchandise untuk divalidasi-----
        do{//Memvalidasi apakah ID Merchandise yang diinput sesuai dengan yang ada (Pembuka)
            showCursor();
            found = 0;
            gotoPrintText(128, 40, "-Input [0] pada ID Merch untuk batal-");
            gotoPrintText(128, 25,"I D  M E R C H A N D I S E : MCH-");
            gotoxy(161, 25);
            limitIntChar(&id_merchandise, 3);

            arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
            while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
                if(mc.id_merchandise == id_merchandise){
                    found = 1;
                    break;
                }
                else if(id_merchandise == 0){
                    hideCursor();
                    //-----Menghapus layar-----
                    setColorBlock(0, 0);
                    for (int panjang = 37; panjang <= 166; panjang++){
                        for (int lebar = 10; lebar <=44; lebar++){
                            gotoPrintText(panjang, lebar, " ");
                        }
                    }
                    CRUD_option();
                    CRUD_function_merchandise();
                }
            }
            fclose(arsMerchandise);

            if(found == 0){
                MessageBox(NULL, "ID Merchandise tidak ditemukan", "ID Merchandise tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                hideCursor();
                //-----Menghapus angka id Merchandise yang diinput sebelumnya-----
                setClearArea(161, 25, 3, 1);
            }
        }while(found == 0);//Memvalidasi apakah ID Merchandise yang diinput sesuai dengan yang ada (Penutup)

        //-----Menginput data baru-----
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        temp = fopen("../Temp/MerchandiseTemp.dat", "wb");
        while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
            if(mc.id_merchandise != id_merchandise){
                fwrite(&mc, sizeof(mc), 1, temp);
            }
        }
        fclose(arsMerchandise);
        fclose(temp);

        arsMerchandise = fopen("../Data/Merchandise.dat","wb");
        temp = fopen("../Temp/MerchandiseTemp.dat","rb");
        while (fread(&mc, sizeof(mc), 1, temp)){
            fwrite(&mc, sizeof(mc), 1, arsMerchandise);
        }
        fclose(arsMerchandise);
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

    CRUD_option();
    CRUD_function_merchandise();
}