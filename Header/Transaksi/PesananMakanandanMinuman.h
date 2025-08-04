void desain_form_transaksi_pesanan_makan_minum();
void formTransaksiPesananMakandanMinum();
void tambahTransaksiPesananMakandanMinum();
void lihatTransaksiPesananMakandanMinum();

void desain_form_transaksi_pesanan_makan_minum() {
    setColorBlock(6, 6);
    for (int i = 43; i <= 102; i++){
        for(int j = 10; j <= 44; j++){
            gotoPrintASCII(i, j, 219);
        }
    }

    setColorBlock(7, 6);
    for(int i = 43; i <= 102; i++){
        gotoPrintASCII(i, 10, 223);
        gotoPrintASCII(i, 13, 220);
        gotoPrintASCII(i, 44, 220);
    }

    for(int i = 10; i <= 44; i++){
        gotoPrintASCII(43, i, 219);
        gotoPrintASCII(102, i, 219);
    }
}

void formTransaksiPesananMakandanMinum() {
    desain_form_transaksi_pesanan_makan_minum();
    setColorBlock(0, 6);
    gotoPrintText(65, 11, "T R A N S A K S I");
    gotoPrintText(54, 12, "P E S A N A N  M A K A N  &  M I N U M");
    gotoPrintText(45, 14, "ID TRANSAKSI      : PSN-");
    gotoPrintText(45, 15, "TANGGAL TRANSAKSI :   /  /");
    gotoPrintText(45, 16, "NAMA KASIR        : ");
    gotoPrintText(45, 18, "NAMA PELANGGAN    : ");
    gotoPrintText(45,20,  "MENU[M]/PAKET[P]  : ");
    gotoPrintText(45, 22, "ID MENU           : MNU-");
    gotoPrintText(45, 24, "NAMA MENU         :");
    gotoPrintText(45, 26, "JUMLAH            : ");
    gotoPrintText(45, 28, "ID PAKET          : PKT-");
    gotoPrintText(45, 30, "NAMA PAKET        : ");
    gotoPrintText(45, 32, "JUMLAH            : ");
    gotoPrintText(45, 34, "ID MEMBER         : PDF-");
    gotoPrintText(45, 36, "ID BOOKING        : BKG-");
    gotoPrintText(45, 38, "TOTAL HARGA       : Rp");
    gotoPrintText(45, 40, "UANG PEMBAYARAN   : Rp");
    gotoPrintText(45, 42, "KEMBALIAN         : Rp");

    //-----Memberikan garis pada form-----
    for(int i = 65; i <= 98; i++){
        gotoPrintASCII(i, 19, 196);
        gotoPrintASCII(i, 21, 196);
        gotoPrintASCII(i, 23, 196);
        gotoPrintASCII(i, 25, 196);
        gotoPrintASCII(i, 27, 196);
        gotoPrintASCII(i, 29, 196);
        gotoPrintASCII(i, 31, 196);
        gotoPrintASCII(i, 33, 196);
        gotoPrintASCII(i, 35, 196);
        gotoPrintASCII(i, 37, 196);
        gotoPrintASCII(i, 39, 196);
        gotoPrintASCII(i, 41, 196);
        gotoPrintASCII(i, 43, 196);
    }
}

void tambahTransaksiPesananMakandanMinum() {
    int response;
    char pilihan[2];
    do {
        gotoPrintText(45, 34, "ID MEMBER         : PDF-");
        gotoPrintText(45, 36, "ID BOOKING        : BKG-");
        int count = 1;
        //-----Fungsi auto increament ID-----
        arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "a+b");
        pmm.id_pesanan = 1;

        if (arsPesananMakandanMinum != NULL) {
            while (fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)) {
                pmm.id_pesanan += 1;
                count++;
            }
        }

        for (int i = 1; i <= count; i++) {
            pmm.id_menu[i] = NULL;
            pmm.id_paket[i] = NULL;
        }

        //-----Menampilkan id transaksi-----
        gotoxy(69, 14);
        printf("%03d", pmm.id_pesanan);

        //-----Menampilkan tanggal transaksi berlangsung------
        gotoxy(65, 15);
        hariIni(&pmm.tanggal_transaksi.hari);
        gotoxy(68, 15);
        bulanIni(&pmm.tanggal_transaksi.bulan);
        gotoxy(71, 15);
        tahunIni(&pmm.tanggal_transaksi.tahun);

        //-----Menampilkan nama kasir sesuai dengan fungsi login-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        while(fread(&p, sizeof(p), 1, arsPegawai)){
            if(strcmp(username, p.username)==0){
                strcpy(pmm.nama_kasir, p.nama);
            }
        }
        fclose(arsPegawai);

        gotoxy(65, 16);
        printf("%s", pmm.nama_kasir);

        //-----Input nama pelanggan-----
        gotoxy(65, 18);
        limitStrChar(pmm.nama_pelanggan,18);
        if(strcmpi(pmm.nama_pelanggan, "x")==0){
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

        money subTotal = 0;
        money harga;
        count = 1;
        pmm.total_harga = 0;
        pmm.jumlah_item = 0;
        do {
            //-----Pilihan menu atau paket menu-----
            inputpilihan:
            gotoxy(65, 20);
            limitStrChar(&pilihan, 1);

            //-----Validasi inputan-----
            if(strcmpi(pilihan, "M")==0) {
                //-----Menampilkan tabel menu disebelah kanan-----
                desain_tabel_transaksi("M");
                setColorBlock(0, 6);

                //-----Input id menu-----
                inputIdMenu:
                gotoxy(69, 22);
                limitIntChar(&pmm.id_menu[count], 3);

                //-----Validasi id menu-----
                int found = 0;
                arsMenu = fopen("../Data/Menu.dat", "rb");
                while(fread(&m, sizeof(m), 1, arsMenu)) {
                    if(pmm.id_menu[count] == m.id_menu) {
                        found = 1;
                        strcpy(pmm.nama_menu[count], m.nama_menu);
                        harga = m.hargaMenu;
                    }
                }fclose(arsMenu);

                if(found == 0) {
                    MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                    setClearArea(69, 22, 3, 1);
                    goto inputIdMenu;
                }

                //-----Menampilkan nama menu sesuai dengan id yang diinput-----
                gotoxy(65, 24);
                printf("%s", pmm.nama_menu[count]);

                //-----Input jumlah menu-----
                inputJumlahMenu:
                gotoxy(65, 26);
                limitIntChar(&pmm.jumlah[count], 3);
                if(pmm.jumlah[count] == 0){
                    setClearArea(65, 26, 3, 1);
                    MessageBox(NULL, "Jumlah tidak boleh 0!!", "JUMLAH TIDAK VALID!!", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                    goto inputJumlahMenu;
                }
                pmm.total_harga += harga * pmm.jumlah[count];
            }
            else if(strcmpi(pilihan, "P")==0) {
                //-----Menampilkan tabel paket menu disebelah kanan-----
                desain_tabel_transaksi("PM");
                setColorBlock(0, 6);

                //-----Input id paket menu-----
                inputIdPaketMenu:
                gotoxy(69, 28);
                limitIntChar(&pmm.id_paket[count], 3);

                //-----Validasi id paket menu-----
                int found = 0;
                arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
                while(fread(&pm, sizeof(pm), 1, arsPktMenu)) {
                    if(pmm.id_paket[count] == pm.id_paket) {
                        found = 1;
                        strcpy(pmm.nama_paket[count], pm.nama_paket);
                        harga = pm.harga;
                    }
                }fclose(arsPktMenu);

                if(found == 0) {
                    MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                    setClearArea(69, 30, 3, 1);
                    goto inputIdPaketMenu;
                }

                //-----Menampilkan nama paket menu sesuai dengan id yang diinput-----
                gotoxy(65, 30);
                printf("%s", pmm.nama_paket[count]);

                //-----Input jumlah paket menu-----
                inputJumlahPaketMenu:
                gotoxy(65, 32);
                limitIntChar(&pmm.jumlah[count], 3);
                if(pmm.jumlah[count] == 0){
                    setClearArea(65, 26, 3, 1);
                    MessageBox(NULL, "Jumlah tidak boleh 0!!", "JUMLAH TIDAK VALID!!", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                    goto inputJumlahPaketMenu;
                }

                pmm.total_harga += harga * pmm.jumlah[count];
            }
            else {
                MessageBox(NULL, "Pilihan tidak tersedia! Masukkan [M] untuk menu dan [P] untuk paket menu!", "TIDAK VALID!!", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(65, 20, 2, 1);
                goto inputpilihan;
            }

            //-----Menampilkan item yang dibeli sampai saat ini-----
            desain_tampilan_item_saat_ini();
            for(int i = 1; i <= count; i++) {
                gotoxy(116, 17 + i);
                if (pmm.id_menu[i] != 0) { // Menampilkan menu jika ada
                    printf("- %s x %d", pmm.nama_menu[i], pmm.jumlah[i]);
                }
                if (pmm.id_paket[i] != 0) { // Menampilkan paket menu jika ada
                    printf("- Paket %s x %d", pmm.nama_paket[i], pmm.jumlah[i]);
                }
            }

            //-----Konfirmasi apakah ingin menambah item lagi-----
            response = MessageBox(NULL, "Apakah Anda ingin menambahkan item lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);

            //-----Membersihkan line jika ingin menambah data lagi-----
            if(response == IDYES){
                setClearArea(65, 20, 2, 1);
                setClearArea(69, 22, 3, 1);
                setClearArea(65, 24, 15, 1);
                setClearArea(65, 26, 3, 1);
                setClearArea(69, 28, 3, 1);
                setClearArea(65, 30, 15, 1);
                setClearArea(65, 32, 3, 1);
                setColorBlock(0, 0);
                for (int i = 114; i <= 164; i++){
                    for(int j = 11; j <= 43; j++){
                        gotoPrintASCII(i, j, 219);
                    }
                }
                setColorBlock(0, 6);
                count++;
            }
            pmm.total_harga += subTotal;
        }while (response == IDYES);

        pmm.jumlah_item = count;

        int found = 0;
        do {
            //-----input id member-----
            gotoxy(69, 34);
            limitIntChar(&pmm.id_pendaftaran, 3);

            //-----Validasi id member -----
            arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
            while (fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)) {
                if(pmm.id_pendaftaran == 0) {
                    setClearArea(65, 34, 7, 1);
                    gotoPrintText(65, 34, "-");
                    pmm.id_pendaftaran = NULL;
                    found = 2;
                }
                else if(pmm.id_pendaftaran == pmb.id_pendaftaran) {
                    found = 1;
                }
            }fclose(arsPendaftaranMember);

            if(found == 0) {
                MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(69, 34, 3, 1);
            }
        }while (found == 0);

        if(found == 1) {
            //-----Menampilkan tabel diskon disebelah kanan-----
            setColorBlock(0, 0);
            for (int i = 114; i <= 164; i++){
                for(int j = 11; j <= 43; j++){
                    gotoPrintASCII(i, j, 219);
                }
            }
            desain_tabel_transaksi("D");

            int id_diskon = 0;

            //-----Desain kotak id diskon yang ingin dicari-----
            setColorBlock(6, 6);
            for (int i = 114; i <= 164; i++){
                gotoPrintASCII(i, 10, 219);
            }

            setColorBlock(0, 6);
            gotoPrintText(114, 10, "DSK-");
            int cekDiskon = 0;
            do {
                //-----Input Id Diskon-----
                gotoxy(118, 10);
                limitIntChar(&id_diskon, 3);

                //-----Validasi Id Diskon-----
                arsDiskon = fopen("../Data/Diskon.dat", "rb");
                while (fread(&d, sizeof(d), 1, arsDiskon)) {
                    if(id_diskon == 0){
                        cekDiskon = 2;
                    }
                    else if(id_diskon == d.id_diskon) {
                        pmm.total_harga -= pmm.total_harga * (d.besar_diskon/100);
                        cekDiskon = 1;
                    }
                }fclose(arsDiskon);
                if(cekDiskon == 0) {
                    MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                    setClearArea(118, 10, 3, 1);
                }
            } while(cekDiskon == 0);
        }

        // -----Input id booking-----
        setColorBlock(0, 0);
        for (int i = 114; i <= 164; i++){
            for(int j = 11; j <= 43; j++){
                gotoPrintASCII(i, j, 219);
            }
        }
        desain_tabel_transaksi("BKG");
        setColorBlock(0, 6);
         int cekbooking = 0;
         do {
             gotoxy(69, 36);
             limitIntChar(&pmm.id_booking, 3);

             //-----Validasi id booking-----
             arsBookingRuangan = fopen("../Data/Booking Ruangan.dat", "rb");
             while (fread(&br , sizeof(br), 1, arsBookingRuangan)) {
                 if(pmm.id_booking == 0) {
                     cekbooking = 2;
                     setClearArea(65, 36, 7, 1);
                     gotoPrintText(65, 36, "-");
                 }
                 else if(pmm.id_booking == br.id_booking) {
                     cekbooking = 1;
                 }
             }
             fclose(arsBookingRuangan);

             if(cekbooking == 0) {
                 MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                 setClearArea(69, 36, 3, 1);
             }
         }while(cekbooking == 0);

        //-----Menampilkan total harga-----
        gotoxy(65, 38);
        rupiah(pmm.total_harga);

        //-----Input uang yang diberikan pelanggan-----
        inputUangPembayaran:
        money UangPembayaran;
        limitMoneyChar(&UangPembayaran, 3, 8, 68, 40);

        //-----Validasi jumlah uang yang diberikan pelanggan-----
        if(UangPembayaran < pmm.total_harga) {
            MessageBox(NULL, "Uang tidak cukup", "Jumlah Error", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(68, 40, 8, 1);
            goto inputUangPembayaran;
        }
        setClearArea(65, 34, 15, 1);
        gotoxy(65, 40);
        rupiah(UangPembayaran);

        //-----Menampilkan uang kembalian pelanggan-----
        money UangKembalian;
        UangKembalian = UangPembayaran - pmm.total_harga;
        gotoxy(65, 42);
        rupiah(UangKembalian);

        //-----Menyimpan data transaksi-----
        fwrite(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum);
        fclose(arsPesananMakandanMinum);

        //-----Konfirmasi apakah ingin melakukan transaksi lagi-----
        response = MessageBox(NULL, "Apakah Anda ingin melakukan transaksi lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        if(response == IDYES){
            setClearArea(65, 20, 2, 1);
            setClearArea(69, 22, 3, 1);
            setClearArea(65, 24, 18, 1);
            setClearArea(69, 26, 3, 1);
            setClearArea(69, 28, 3, 1);
            setClearArea(65, 30, 18, 1);
            setClearArea(65, 32, 2, 1);
            setClearArea(69, 34, 3, 1);
            setClearArea(69, 36, 3, 1);
            setClearArea(67, 38, 10, 1);
            setClearArea(67, 40, 10, 1);
            setClearArea(67, 42, 10, 1);

            setColorBlock(0, 0);
            for (int i = 114; i <= 164; i++){
                for(int j = 11; j <= 43; j++){
                    gotoPrintASCII(i, j, 219);
                }
            }

            setColorBlock(0, 6);
        }
    }while(response == IDYES);
}

void lihatTransaksiPesananMakandanMinum() {
    //-----Membuat kolom bagian atas-----
    for(int i = 37; i <= 164; i++){
        setColorBlock(7, 0);
        gotoPrintASCII(i, 10, 220);
        gotoPrintASCII(i, 12, 223);
        setColorBlock(6, 0);
        gotoPrintASCII(i, 11, 219);
    }

    setColorBlock(0, 6);
    gotoPrintText(37, 11, " ID TRANSAKSI     NAMA PELANGGAN      TANGGAL TRANSAKSI        NAMA KASIR         ID MEMBER       ID BOOKING       TOTAL HARGA");
    //-----Menampilkan data transaksi-----
    int i = 1;
    arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "rb");
    while(fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)) {
        if(i % 25 == 1 && i != 1){
            getch();
            for (int j = 37; j <= 164; j++){
                for(int k = 13; k <= 38; k++){
                    setColorBlock(0, 0);
                    gotoPrintText(j, k, " ");
                }
            }
            i = 1;
        }
        if(i % 2 == 1){
            if(pmm.id_pendaftaran == 0 && pmm.id_booking == 0) {
                setColorBlock(0, 6);
                gotoxy(37, 12+i);
                printf(" PSN-%03d          %-18s  %02d/%02d/%d               %-18s     -               -                         ", pmm.id_pesanan, pmm.nama_pelanggan, pmm.tanggal_transaksi.hari, pmm.tanggal_transaksi.bulan, pmm.tanggal_transaksi.tahun, pmm.nama_kasir);
                gotoxy(151, 12+i);
                rupiah(pmm.total_harga);
            }
            else if(pmm.id_pendaftaran == 0) {
                setColorBlock(0, 6);
                gotoxy(37, 12+i);
                printf(" PSN-%03d          %-18s  %02d/%02d/%d               %-18s     -            BKG-%03d                      ", pmm.id_pesanan, pmm.nama_pelanggan, pmm.tanggal_transaksi.hari, pmm.tanggal_transaksi.bulan, pmm.tanggal_transaksi.tahun, pmm.nama_kasir, pmm.id_booking);
                gotoxy(151, 12+i);
                rupiah(pmm.total_harga);
            }
            else if(pmm.id_booking == 0) {
                setColorBlock(0, 6);
                gotoxy(37, 12+i);
                printf(" PSN-%03d          %-18s  %02d/%02d/%d               %-18s  PDF-%03d            -                         ", pmm.id_pesanan, pmm.nama_pelanggan, pmm.tanggal_transaksi.hari, pmm.tanggal_transaksi.bulan, pmm.tanggal_transaksi.tahun, pmm.nama_kasir, pmm.id_pendaftaran);
                gotoxy(151, 12+i);
                rupiah(pmm.total_harga);
            }
            else{
                setColorBlock(0, 6);
                gotoxy(37, 12+i);
                printf(" PSN-%03d          %-18s  %02d/%02d/%d               %-18s  PDF-%03d         BKG-%03d                      ", pmm.id_pesanan, pmm.nama_pelanggan, pmm.tanggal_transaksi.hari, pmm.tanggal_transaksi.bulan, pmm.tanggal_transaksi.tahun, pmm.nama_kasir, pmm.id_pendaftaran, pmm.id_booking);
                gotoxy(151, 12+i);
                rupiah(pmm.total_harga);
            }
        }
        else if(i % 2 == 0){
            if(pmm.id_pendaftaran == 0 && pmm.id_booking == 0) {
                setColorBlock(0, 14);
                gotoxy(37, 12+i);
                printf(" PSN-%03d          %-18s  %02d/%02d/%d               %-18s     -               -                         ", pmm.id_pesanan, pmm.nama_pelanggan, pmm.tanggal_transaksi.hari, pmm.tanggal_transaksi.bulan, pmm.tanggal_transaksi.tahun, pmm.nama_kasir);
                gotoxy(151, 12+i);
                rupiah(pmm.total_harga);
            }
            else if(pmm.id_pendaftaran == 0) {
                setColorBlock(0, 14);
                gotoxy(37, 12+i);
                printf(" PSN-%03d          %-18s  %02d/%02d/%d               %-18s     -            BKG-%03d                      ", pmm.id_pesanan, pmm.nama_pelanggan, pmm.tanggal_transaksi.hari, pmm.tanggal_transaksi.bulan, pmm.tanggal_transaksi.tahun, pmm.nama_kasir, pmm.id_booking);
                gotoxy(151, 12+i);
                rupiah(pmm.total_harga);
            }
            else if(pmm.id_booking == 0) {
                setColorBlock(0, 14);
                gotoxy(37, 12+i);
                printf(" PSN-%03d          %-18s  %02d/%02d/%d               %-18s  PDF-%03d            -                         ", pmm.id_pesanan, pmm.nama_pelanggan, pmm.tanggal_transaksi.hari, pmm.tanggal_transaksi.bulan, pmm.tanggal_transaksi.tahun, pmm.nama_kasir, pmm.id_pendaftaran);
                gotoxy(151, 12+i);
                rupiah(pmm.total_harga);
            }
            else{
                setColorBlock(0, 14);
                gotoxy(37, 12+i);
                printf(" PSN-%03d          %-18s  %02d/%02d/%d               %-18s  PDF-%03d         BKG-%03d                      ", pmm.id_pesanan, pmm.nama_pelanggan, pmm.tanggal_transaksi.hari, pmm.tanggal_transaksi.bulan, pmm.tanggal_transaksi.tahun, pmm.nama_kasir, pmm.id_pendaftaran, pmm.id_booking);
                gotoxy(151, 12+i);
                rupiah(pmm.total_harga);
            }
        }
        i++;
    }fclose(arsPesananMakandanMinum);

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

    //-----Menginput ID Paket menu untuk divalidasi-----
    do{//Memvalidasi apakah Id transaksi yang diinput sesuai dengan yang ada (Pembuka)
        showCursor();
        found = 0;
        setColorBlock(0, 6);
        gotoPrintText(127, 43, "Input [0] pada ID Transaksi untuk batal");
        gotoPrintText(130, 41,"I D  T R A N S A K S I : PSN-");
        gotoxy(159, 41);
        limitIntChar(&id_transaksi, 3);

        arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "rb");
        while(fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)){
            if(pmm.id_pesanan == id_transaksi){
                found = 1;
                break;
            }
            else if(id_transaksi == 0){
                hideCursor();
                //-----Menghapus layar-----
                setColorBlock(0, 0);
                for (int panjang = 37; panjang <= 166; panjang++){
                    for (int lebar = 10; lebar <=44; lebar++){
                        gotoPrintText(panjang, lebar, " ");
                    }
                }
                transaksi_option();
                transaksiMenuFunction();
            }
        }
        fclose(arsPesananMakandanMinum);

        if(found == 0){
            MessageBox(NULL, "ID Transaksi tidak ditemukan", "ID Transaksi tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
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
    gotoPrintText(94, 13, "T R A N S A K S I");
    gotoPrintText(81, 16, "ID TRANSAKSI   : PSN-");
    gotoPrintText(81, 18, "NAMA KASIR     : ");
    gotoPrintText(81, 20, "NAMA PELANGGAN : ");
    gotoPrintText(81, 22, "TOTAL HARGA    : ");
    gotoPrintText(81, 24, "DETAIL ITEM    : ");

    arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "rb");
    while(fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)){
        if(id_transaksi == pmm.id_pesanan){
            gotoxy(102, 16);
            printf("%03d", pmm.id_pesanan);

            gotoxy(98, 18);
            printf("%s", pmm.nama_kasir);

            gotoxy(98, 20);
            printf("%s", pmm.nama_pelanggan);

            gotoxy(98, 22);
            rupiah(pmm.total_harga);

            for(int i = 1; i <= pmm.jumlah_item; i++) {
                gotoxy(83, 23+i*2);
                if (pmm.id_menu[i] != 0) { // Menampilkan menu jika ada
                    printf("ITEM KE-%d : %s", i, pmm.nama_menu[i]);
                }
                if (pmm.id_paket[i] != 0) { // Menampilkan paket menu jika ada
                    printf("ITEM KE-%d : %s", i, pmm.nama_paket[i]);
                }
            }
        }
    }
    fclose(arsPesananMakandanMinum);
    getch();

    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 9; lebar <= 45; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    lihatTransaksiPesananMakandanMinum();
}