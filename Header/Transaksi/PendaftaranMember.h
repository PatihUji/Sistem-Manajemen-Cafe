void formTransaksiMember();
void tambahTransaksiMember();
void lihatTransaksiMember();

void formTransaksiMember(){
    desain_form_transaksi();
    setColorBlock(0, 6);
    gotoPrintText(65, 12, "T R A N S A K S I");
    gotoPrintText(68, 14, "M E M B E R");
    gotoPrintText(45, 18, "ID TRANSAKSI      : PDF-");
    gotoPrintText(45, 20, "TANGGAL TRANSAKSI :   /  /");
    gotoPrintText(45, 22, "NAMA KASIR        : ");
    gotoPrintText(45, 24, "NO. TELEPON       : ");
    gotoPrintText(45, 26, "HARGA             : ");
    gotoPrintText(45, 28, "UANG PEMBAYARAN   : ");
    gotoPrintText(45, 30, "KEMBALIAN         : ");

    //-----Memberikan garis pada form-----
    for(int i = 65; i <= 98; i++){
        gotoPrintASCII(i, 25, 196);
        gotoPrintASCII(i, 27, 196);
        gotoPrintASCII(i, 29, 196);
        gotoPrintASCII(i, 31, 196);
    }
}

void tambahTransaksiMember(){
    int response;
    do{
        //-----Fungsi auto increament ID-----
        pmb.id_pendaftaran = 1;
        arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "a+b");

        if (arsPendaftaranMember != NULL) {
            while (fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)) {
                pmb.id_pendaftaran += 1;
            }
        }

        //-----Menampilkan id transaksi-----
        gotoxy(69, 18);
        printf("%03d", pmb.id_pendaftaran);

        //-----Menampilkan tanggal transaksi berlangsung------
        gotoxy(65, 20);
        hariIni(&pmb.tanggalBergabung.hari);
        gotoxy(68, 20);
        bulanIni(&pmb.tanggalBergabung.bulan);
        gotoxy(71, 20);
        tahunIni(&pmb.tanggalBergabung.tahun);

        //-----Menampilkan nama kasir sesuai dengan fungsi login-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        while(fread(&p, sizeof(p), 1, arsPegawai)){
            if(strcmp(username, p.username)==0){
                strcpy(pmb.nama_kasir, p.nama);
            }
        }
        fclose(arsPegawai);

        gotoxy(65, 22);
        printf("%s", pmb.nama_kasir);

        inputPhoneNumber:
        gotoxy(65, 24);
        limitPhoneChar(pmb.no_telpon,15);

        if (strlen(pmb.no_telpon) < 4){
            MessageBox(NULL, "Nomor telepon harus lebih dari 3 digit!", "Nomor Telepon Tidak Valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(65,24,3,1);
            goto inputPhoneNumber;
        }

        if (strcmp(pmb.no_telpon, "0000")==0){
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

        gotoxy(65, 26);
        pmb.harga = 50000;
        rupiah(pmb.harga);


        money uangPembayaran;
        inputUangPembayaran:
        gotoPrintText(65, 28, "Rp");
        limitMoneyChar(&uangPembayaran, 3, 8, 68, 28);
        if(uangPembayaran < pmb.harga){
            MessageBox(NULL, "Uang tidak cukup", "Jumlah Error", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(68, 28,8, 1);
            goto inputUangPembayaran;
        }

        setClearArea(65, 28, 15, 1);
        gotoxy(65, 28);
        rupiah(uangPembayaran);

        money uangKembalian;
        uangKembalian = uangPembayaran - pmb.harga;
        gotoxy(65, 30);
        rupiah(uangKembalian);

        fwrite(&pmb, sizeof(pmb), 1, arsPendaftaranMember);
        fclose(arsPendaftaranMember);
        response = MessageBox(NULL, "Apakah Anda ingin melakukan transaksi lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        if(response == IDYES){
            setClearArea(65, 24, 15, 1);
            setClearArea(65, 26, 15, 1);
            setClearArea(65, 28, 15, 1);
            setClearArea(65, 30, 15, 1);
        }
    }while(response == IDYES);
}

void lihatTransaksiMember(){
    //-----Membuat kolom bagian atas-----
    for(int i = 37; i <= 111; i++){
        setColorBlock(7, 0);
        gotoPrintASCII(i, 10, 220);
        gotoPrintASCII(i, 12, 223);
        setColorBlock(6, 0);
        gotoPrintASCII(i, 11, 219);
    }

    setColorBlock(0, 6);
    gotoPrintText(37, 11, "   ID TRANSAKSI     TANGGAL TRANSAKSI        NAMA KASIR       TOTAL HARGA");
    arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
    int i = 1;
    while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
        if(i % 25 == 1 && i != 1){
            getch();
            for (int j = 37; j <= 131; j++){
                for(int k = 13; k <= 38; k++){
                    setColorBlock(0, 0);
                    gotoPrintText(j, k, " ");
                }
            }
            i = 1;
        }
        if(i % 2 == 1){
            setColorBlock(0, 6);
            gotoxy(37, 12+i);
            printf("     PDF-%03d           %02d/%02d/%d        %-18s                ", pmb.id_pendaftaran, pmb.tanggalBergabung.hari, pmb.tanggalBergabung.bulan, pmb.tanggalBergabung.tahun, pmb.nama_kasir);
            gotoxy(97, 12+i);
            rupiah(pmb.harga);
        }
        else if(i % 2 == 0){
            setColorBlock(0, 14);
            gotoxy(37, 12+i);
            printf("     PDF-%03d           %02d/%02d/%d        %-18s                ", pmb.id_pendaftaran, pmb.tanggalBergabung.hari, pmb.tanggalBergabung.bulan, pmb.tanggalBergabung.tahun, pmb.nama_kasir);
            gotoxy(97, 12+i);
            rupiah(pmb.harga);
        }
        i++;
    }
    fclose(arsPendaftaranMember);

    int id_transaksi;
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

    //-----Menginput ID Pendaftaran Member untuk divalidasi-----
    do{//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Pembuka)
        showCursor();
        found = 0;
        setColorBlock(0, 6);
        gotoPrintText(127, 43, "Input [0] pada ID Transaksi untuk batal");
        gotoPrintText(130, 41,"I D  T R A N S A K S I : PDF-");
        gotoxy(159, 41);
        limitIntChar(&id_transaksi, 3);

        arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
        while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
            if(pmb.id_pendaftaran == id_transaksi){
                found = 1;
                break;
            }
            else if(id_transaksi == 0){
                hideCursor();
                //-----Menghapus layar-----
                setColorBlock(0, 0);
                for (int panjang = 37; panjang <= 166; panjang++){
                    for (int lebar = 9; lebar <=45; lebar++){
                        gotoPrintText(panjang, lebar, " ");
                    }
                }
                transaksi_option();
                transaksiMemberFunction();
            }
        }
        fclose(arsPendaftaranMember);

        if(found == 0){
            MessageBox(NULL, "ID Transaksi tidak ditemukan", "ID Transaksi tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            hideCursor();
            //-----Menghapus angka id Paket menu yang diinput sebelumnya-----
            setClearArea(159, 41, 3, 1);
        }
    }while(found == 0);//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Penutup)

    hideCursor();
    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 9; lebar <= 45; lebar++){
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
    gotoPrintText(94, 13, "T R A N S A K S I");
    gotoPrintText(81, 19, "ID TRANSAKSI          : PDF-");
    gotoPrintText(81, 21, "TANGGAL TRANSAKSI     :   /  /");
    gotoPrintText(81, 23, "NAMA  KASIR           : ");
    gotoPrintText(81, 25, "NO. TELEPON           : ");
    gotoPrintText(81, 27, "HARGA                 : ");


    arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
    while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
        if(id_transaksi == pmb.id_pendaftaran){
            gotoxy(109, 19);
            printf("%03d", pmb.id_pendaftaran);

            gotoxy(105, 21);
            printf("%02d/%02d/%d", pmb.tanggalBergabung.hari,pmb.tanggalBergabung.bulan,pmb.tanggalBergabung.tahun);

            gotoxy(105, 23);
            printf("%-18s",pmb.nama_kasir);


            gotoxy(105, 25);
            printf("%s",pmb.no_telpon);

            gotoxy(105, 27);
            rupiah(pmb.harga);

        }
        fclose(arsPenjualanMerchandise);
    }
    getch();

    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 9; lebar <= 45; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    lihatTransaksiMember();
}