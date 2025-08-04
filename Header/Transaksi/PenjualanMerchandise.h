void desain_tabel_transaksi(char mode[2]);
void desain_form_transaksi();
void formTransaksiMerchandise();
void tambahTransaksiMerchandise();
void desain_tampilan_item_saat_ini();
void lihatTransaksiMerchandise();

//-----Menampilkan Tabel disebelah kanan-----
void desain_tabel_transaksi(char mode[2]){
    setColorBlock(7, 0);
    for(int i = 9; i <= 45; i++){
        gotoPrintASCII(110, i, 219);
    }

    for(int i = 114; i <= 164; i++){
        setColorBlock(7, 0);
        gotoPrintASCII(i, 11, 220);
        gotoPrintASCII(i, 13, 223);
        setColorBlock(6, 0);
        gotoPrintASCII(i, 12, 219);
    }

    //-----Tabel Merchandise-----
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);

    if(strcmp(mode, "MC")==0){
        setColorBlock(0, 6);
        gotoPrintText(114, 12, "   ID      NAMA MERCHANDISE       HARGA     STOK");
        arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
        int i = 1;
        while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
            if(i % 25 == 1 && i != 1){
                getch();
                for(int j = 114; j <= 164; j++){
                    for (int k = 14; k <= 39; k++){
                        setColorBlock(0, 0);
                        gotoPrintText(j, k, " ");
                    }
                }
                i = 1;
            }
            if(i % 2 == 1){
                setColorBlock(0, 6);
                gotoxy(114, 13+i);
                printf(" MCH-%03d   %-15s                         ", mc.id_merchandise, mc.nama_merchandise);
                gotoxy(143, 13+i);
                rupiah(mc.harga);
                gotoxy(159, 13+i);
                printf("%d", mc.stock);
            }
            else if(i % 2 == 0){
                setColorBlock(0, 14);
                gotoxy(114, 13+i);
                printf(" MCH-%03d   %-15s                         ", mc.id_merchandise, mc.nama_merchandise);
                gotoxy(143, 13+i);
                rupiah(mc.harga);
                gotoxy(159, 13+i);
                printf("%d", mc.stock);
            }
            i++;
        }
        fclose(arsMerchandise);
    }

    //-----Tabel Menu-----
    if(strcmp(mode, "M")==0){
        setColorBlock(0, 6);
        gotoPrintText(114, 12, "   ID             NAMA MENU              HARGA");
        arsMenu = fopen("../Data/Menu.dat", "rb");
        int i = 1;
        while(fread(&m, sizeof(m), 1, arsMenu)){
            if(i % 25 == 1 && i != 1){
                getch();
                for(int j = 114; j <= 164; j++){
                    for (int k = 14; k <= 39; k++){
                        setColorBlock(0, 0);
                        gotoPrintText(j, k, " ");
                    }
                }
                i = 1;
            }
            if(i % 2 == 1){
                setColorBlock(0, 6);
                gotoxy(114, 13+i);
                printf(" MNU-%03d       %-18s                  ", m.id_menu, m.nama_menu);
                gotoxy(152, 13+i);
                rupiah(m.hargaMenu);
            }
            else if(i % 2 == 0){
                setColorBlock(0, 14);
                gotoxy(114, 13+i);
                printf(" MNU-%03d       %-18s                  ", m.id_menu, m.nama_menu);
                gotoxy(152, 13+i);
                rupiah(m.hargaMenu);
            }
            i++;
        }
        fclose(arsMenu);
    }

    //-----Tabel Paket Menu-----
    if(strcmp(mode, "PM")==0){
        setColorBlock(0, 6);
        gotoPrintText(114, 12, "   ID          NAMA PAKET MENU           HARGA");
        arsPktMenu = fopen("../Data/Paket Menu.dat", "rb");
        int i = 1;
        while(fread(&pm, sizeof(pm), 1, arsPktMenu)){
            if(i % 25 == 1 && i != 1){
                getch();
                for(int j = 114; j <= 164; j++){
                    for (int k = 14; k <= 39; k++){
                        setColorBlock(0, 0);
                        gotoPrintText(j, k, " ");
                    }
                }
                i = 1;
            }
            if(i % 2 == 1){
                setColorBlock(0, 6);
                gotoxy(114, 13+i);
                printf(" PKT-%03d       %-18s                  ", pm.id_paket, pm.nama_paket);
                gotoxy(152, 13+i);
                rupiah(pm.harga);
            }
            else if(i % 2 == 0){
                setColorBlock(0, 14);
                gotoxy(114, 13+i);
                printf(" PKT-%03d       %-18s                  ", pm.id_paket, pm.nama_paket);
                gotoxy(152, 13+i);
                rupiah(pm.harga);
            }
            i++;
        }
        fclose(arsPktMenu);
    }

    //-----Tabel Diskon-----
    if(strcmp(mode, "D")==0){
        setColorBlock(0, 6);
        gotoPrintText(114, 12, "   ID              NAMA DISKON       BESAR DISKON");
        arsDiskon = fopen("../Data/Diskon.dat", "rb");
        int i = 1;

        while(fread(&d, sizeof(d), 1, arsDiskon)){
            // if((d.tanggal_mulai.tahun == local->tm_year + 1900 && d.tanggal_mulai.bulan == local->tm_mon + 1 && d.tanggal_mulai.hari >= local->tm_mday) && (d.tanggal_akhir.tahun > local->tm_year + 1900 || (d.tanggal_akhir.tahun == local->tm_year + 1900 && d.tanggal_akhir.bulan > local->tm_mon + 1) || (d.tanggal_akhir.tahun == local->tm_year + 1900 && d.tanggal_akhir.bulan == local->tm_mon + 1 && d.tanggal_akhir.hari >= local->tm_mday))){
            if ((d.tanggal_mulai.tahun < local->tm_year + 1900 || (d.tanggal_mulai.tahun == local->tm_year + 1900 && d.tanggal_mulai.bulan < local->tm_mon + 1) || (d.tanggal_mulai.tahun == local->tm_year + 1900 && d.tanggal_mulai.bulan == local->tm_mon + 1 && d.tanggal_mulai.hari <= local->tm_mday)) && (d.tanggal_akhir.tahun > local->tm_year + 1900 || (d.tanggal_akhir.tahun == local->tm_year + 1900 && d.tanggal_akhir.bulan > local->tm_mon + 1) || (d.tanggal_akhir.tahun == local->tm_year + 1900 && d.tanggal_akhir.bulan == local->tm_mon + 1 && d.tanggal_akhir.hari >= local->tm_mday))){
                if(i % 25 == 1 && i != 1){
                    getch();
                    for(int j = 114; j <= 164; j++){
                        for (int k = 14; k <= 39; k++){
                            setColorBlock(0, 0);
                            gotoPrintText(j, k, " ");
                        }
                    }
                    i = 1;
                }
                if(i % 2 == 1){
                    setColorBlock(0, 6);
                    gotoxy(114, 13+i);
                    printf(" DSK-%03d       %-18s                  ", d.id_diskon, d.nama_diskon);
                    gotoxy(154, 13+i);
                    printf("%.f%%", d.besar_diskon);
                }
                else if(i % 2 == 0){
                    setColorBlock(0, 14);
                    gotoxy(114, 13+i);
                    printf(" DSK-%03d       %-18s                  ", d.id_diskon, d.nama_diskon);
                    gotoxy(154, 13+i);
                    printf("%.f%%", d.besar_diskon);
                }
                i++;
            }
        }
        fclose(arsDiskon);
    }

    //-----Tabel Ruangan-----
    if(strcmp(mode, "R")==0){
        setColorBlock(0, 6);
        gotoPrintText(114, 12, "   ID             NAMA RUANGAN           HARGA");
        arsRuangan = fopen("../Data/Ruangan.dat", "rb");
        int i = 1;

        while (fread(&rg, sizeof(rg), 1, arsRuangan)) {
            if(i % 25 == 1 && i != 1){
                getch();
                for(int j = 114; j <= 164; j++){
                    for (int k = 14; k <= 39; k++){
                        setColorBlock(0, 0);
                        gotoPrintText(j, k, " ");
                    }
                }
                i = 1;
            }
            if (i % 2 == 1) {
                setColorBlock(0, 6);
                gotoxy(114, 13 + i);
                printf(" RGN-%03d       %-18s                  ", rg.id_ruangan, rg.nama_ruangan);
                gotoxy(152, 13 + i);
                rupiah(rg.harga_per_jam);
            } else if (i % 2 == 0) {
                setColorBlock(0, 14);
                gotoxy(114, 13 + i);
                printf(" RGN-%03d       %-18s                  ", rg.id_ruangan, rg.nama_ruangan);
                gotoxy(152, 13 + i);
                rupiah(rg.harga_per_jam);
            }
                i++;
            }
        fclose(arsRuangan);
        }

    //--Tabel Transaksi Booking Ruangan
    if(strcmp(mode, "BKG")==0){
        setColorBlock(0, 6);
        gotoPrintText(114, 12, "   ID          NAMA                  TGL_BOOKING");
        arsBookingRuangan = fopen("../Data/Booking Ruangan.dat", "rb");
        int i = 1;

        while (fread(&br, sizeof(br), 1, arsBookingRuangan)) {
            if(i % 25 == 1 && i != 1){
                getch();
                for(int j = 114; j <= 164; j++){
                    for (int k = 14; k <= 39; k++){
                        setColorBlock(0, 0);
                        gotoPrintText(j, k, " ");
                    }
                }
                i = 1;
            }
            if (i % 2 == 1) {
                setColorBlock(0, 6);
                gotoxy(114, 13 + i);
                printf(" BKG-%03d       %-18s       /  /       ", br.id_booking, br.nama_pelanggan);
                gotoxy(152, 13 + i);
                printf("%02d",br.tanggal_booking.hari);
                gotoxy(155, 13 + i);
                printf("%02d",br.tanggal_booking.bulan);
                gotoxy(158, 13 + i);
                printf("%d",br.tanggal_booking.tahun);
            } else if (i % 2 == 0) {
                setColorBlock(0, 14);
                gotoxy(114, 13 + i);
                printf(" BKG-%03d       %-18s      /  /        ", br.id_booking, br.nama_pelanggan);
                gotoxy(152, 13 + i);
                printf("%02d",br.tanggal_booking.hari);
                gotoxy(155, 13 + i);
                printf("%02d",br.tanggal_booking.bulan);
                gotoxy(158, 13 + i);
                printf("%d",br.tanggal_booking.tahun);
            }
            i++;
        }
        fclose(arsBookingRuangan);
    }
}

void desain_form_transaksi(){
    setColorBlock(6, 6);
    for (int i = 43; i <= 102; i++){
        for(int j = 11; j <= 43; j++){
            gotoPrintASCII(i, j, 219);
        }
    }

    setColorBlock(7, 6);
    for(int i = 43; i <= 102; i++){
        gotoPrintASCII(i, 11, 223);
        gotoPrintASCII(i, 15, 220);
        gotoPrintASCII(i, 43, 220);
    }

    for(int i = 11; i <= 43; i++){
        gotoPrintASCII(43, i, 219);
        gotoPrintASCII(102, i, 219);
    }
}

void formTransaksiMerchandise(){
    desain_form_transaksi();
    setColorBlock(0, 6);
    gotoPrintText(65, 12, "T R A N S A K S I");
    gotoPrintText(63, 14, "M E R C H A N D I S E");
    gotoPrintText(45, 18, "ID TRANSAKSI      : PBL-");
    gotoPrintText(45, 20, "TANGGAL TRANSAKSI :   /  /");
    gotoPrintText(45, 22, "NAMA KASIR        : ");
    gotoPrintText(45, 24, "ID MERCHANDISE    : MCH-");
    gotoPrintText(45, 26, "NAMA MERCHANDISE  : ");
    gotoPrintText(45, 28, "JUMLAH            : ");
    gotoPrintText(45, 30, "ID MEMBER         : PDF-");
    gotoPrintText(45, 32, "TOTAL HARGA       : ");
    gotoPrintText(45, 34, "UANG PEMBAYARAN   : ");
    gotoPrintText(45, 36, "KEMBALIAN         : ");

    //-----Memberikan garis pada form-----
    for(int i = 65; i <= 98; i++){
        gotoPrintASCII(i, 25, 196);
        gotoPrintASCII(i, 27, 196);
        gotoPrintASCII(i, 29, 196);
        gotoPrintASCII(i, 31, 196);
        gotoPrintASCII(i, 33, 196);
        gotoPrintASCII(i, 35, 196);
        gotoPrintASCII(i, 37, 196);
    }
}

void tambahTransaksiMerchandise(){
    int response;
    do{
        gotoPrintText(45, 30, "ID MEMBER         : PDF-");
        //-----Fungsi auto increament ID-----
        pmc.id_penjualanMerchandise = 1;
        arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "a+b");

        if (arsPenjualanMerchandise != NULL) {
            while (fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)) {
                pmc.id_penjualanMerchandise += 1;
            }
        }

        //-----Menampilkan id transaksi-----
        gotoxy(69, 18);
        printf("%03d", pmc.id_penjualanMerchandise);

        //-----Menampilkan tanggal transaksi berlangsung------
        gotoxy(65, 20);
        hariIni(&pmc.tanggalTransaksi.hari);
        gotoxy(68, 20);
        bulanIni(&pmc.tanggalTransaksi.bulan);
        gotoxy(71, 20);
        tahunIni(&pmc.tanggalTransaksi.tahun);

        //-----Menampilkan nama kasir sesuai dengan fungsi login-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        while(fread(&p, sizeof(p), 1, arsPegawai)){
            if(strcmp(username, p.username)==0){
                strcpy(pmc.nama_kasir, p.nama);
            }
        }
        fclose(arsPegawai);

        gotoxy(65, 22);
        printf("%s", pmc.nama_kasir);

        int count = 1;
        money harga;
        money subTotal = 0;
        pmc.totalHarga = 0;
        pmc.jumlah_item = 0;
        do
        {
            //-----Menampilkan tabel merchandise disebelah kanan-----
            desain_tabel_transaksi("MC");
            setColorBlock(0, 6);

            //-----Input id merchandise-----
            inputIdMerchandise:
            gotoxy(69, 24);
            limitIntChar(&pmc.id_merchandise[count], 3);

            //Validasi id merchandise
            int found = 0;
            do
            {
                arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
                while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
                    if(pmc.id_merchandise[count] == 0){
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
                    if(pmc.id_merchandise[count] == mc.id_merchandise){
                        found = 1;
                        strcpy(pmc.nama_merchandise[count], mc.nama_merchandise);
                        harga = mc.harga;
                    }
                }
                fclose(arsMerchandise);

                if(found == 0){
                    MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                    setClearArea(69, 24, 3, 1);
                    goto inputIdMerchandise;
                }

            }while(found == 0);

            //-----Menampilkan nama merchandise sesuai dengan id yang diinput-----
            gotoxy(65, 26);
            printf("%s", pmc.nama_merchandise[count]);

            //-----Input jumlah merchandise-----
            inputJumlahMerchandise:
            gotoxy(65, 28);
            limitIntChar(&pmc.jumlah[count], 3);

            //validasi jumlah barang & mengurangi jumlah stok merchandise
            arsMerchandise = fopen("../Data/Merchandise.dat", "rb");
            temp = fopen("../Temp/MerchandiseTemp.dat", "wb");
            while(fread(&mc, sizeof(mc), 1, arsMerchandise)){
                if(pmc.id_merchandise[count] == mc.id_merchandise){
                    if(pmc.jumlah[count] > mc.stock){
                        MessageBox(NULL, "Jumlah melebihi batas stock", "Jumlah Error", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                        setClearArea(65, 28, 3, 1);
                        goto inputJumlahMerchandise;
                    }
                    else if(pmc.jumlah[count] == 0){
                        MessageBox(NULL, "Jumlah harus lebih dari 0", "Jumlah Error", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                        setClearArea(65, 28, 3, 1);
                        goto inputJumlahMerchandise;
                    }
                    else if(pmc.jumlah[count] <= mc.stock){
                        mc.stock = mc.stock - pmc.jumlah[count];
                    }
                    fwrite(&mc, sizeof(mc), 1, temp);
                }
                else{
                    fwrite(&mc, sizeof(mc), 1, temp);
                }
            }
            fclose(arsMerchandise);
            fclose(temp);

            arsMerchandise = fopen("../Data/Merchandise.dat", "wb");
            temp = fopen("../Temp/MerchandiseTemp.dat", "rb");
            while(fread(&mc, sizeof(mc), 1, temp)){
                fwrite(&mc, sizeof(mc), 1, arsMerchandise);
            }
            fclose(arsMerchandise);
            fclose(temp);

            //-----Menampilkan item yang dibeli sampai saat ini-----
            desain_tampilan_item_saat_ini();
            for(int i = 1; i <= count; i++)
            {
                gotoxy(116, 17+i+1);
                printf("- %s x %d", pmc.nama_merchandise[i], pmc.jumlah[i]);
                subTotal = harga * pmc.jumlah[i];
            }

            response = MessageBox(NULL, "Apakah Anda ingin menambahkan item lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
            if(response == IDYES){
                setClearArea(69, 24, 3, 1);
                setClearArea(65, 26, 15, 1);
                setClearArea(65, 28, 3, 1);
                setColorBlock(0, 0);
                for (int i = 114; i <= 164; i++){
                    for(int j = 10; j <= 43; j++){
                        gotoPrintASCII(i, j, 219);
                    }
                }
                count++;
            }
            pmc.totalHarga += subTotal;
        }while(response == IDYES);

        pmc.jumlah_item = count;

        //-----input id member-----
        int id_pendaftaran;
        int found = 0;
        do
        {
            gotoxy(69, 30);
            limitIntChar(&id_pendaftaran, 3);

            arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
            while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
                //validasi jika tidak mempunyai id member
                if(id_pendaftaran == 0){
                    setClearArea(65, 30, 7, 1);
                    gotoPrintText(65, 30, "-");
                    pmc.id_pendaftaran = NULL;
                    found = 2;
                }
                else if(id_pendaftaran == pmb.id_pendaftaran){
                    found = 1;
                }
            }
            fclose(arsPendaftaranMember);

            if(found == 0){
                MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(69, 30, 3, 1);
            }
            if(found == 1){
                pmc.id_pendaftaran = id_pendaftaran;
                //-----Menampilkan tabel diskon disebelah kanan-----
                setColorBlock(0, 0);
                for (int i = 114; i <= 164; i++){
                    for(int j = 11; j <= 43; j++){
                        gotoPrintASCII(i, j, 219);
                    }
                }
                desain_tabel_transaksi("D");

                int id_diskon;

                setColorBlock(6, 6);
                for (int i = 114; i <= 164; i++){
                    gotoPrintASCII(i, 10, 219);
                }

                setColorBlock(0, 6);
                gotoPrintText(114, 10, "DSK-");
                int yes = 0;
                do
                {
                    gotoxy(118, 10);
                    limitIntChar(&id_diskon, 3);
                    float besar_diskon;
                    arsDiskon = fopen("../Data/Diskon.dat", "rb");
                    while(fread(&d, sizeof(d), 1, arsDiskon)){
                        if(id_diskon == 0){
                            yes = 2;
                        }
                        else if(id_diskon == d.id_diskon){
                            yes = 1;
                            besar_diskon = d.besar_diskon;
                        }
                    }
                    fclose (arsDiskon);
                    if(yes == 0)
                    {
                        MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                        setClearArea(118, 10, 3, 1);
                    }
                    if(yes == 1){
                        pmc.totalHarga = pmc.totalHarga - (pmc.totalHarga * (besar_diskon/100.0));
                    }
                }while(yes == 0);
                break;
            }

        }while(found == 0);

        gotoxy(65, 32);
        rupiah(pmc.totalHarga);

        money uangPembayaran;
        inputUangPembayaran:
        gotoPrintText(65, 34, "Rp");
        limitMoneyChar(&uangPembayaran, 3, 8, 68, 34);
        if(uangPembayaran < pmc.totalHarga){
            MessageBox(NULL, "Uang tidak cukup", "Jumlah Error", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(68, 34, 8, 1);
            goto inputUangPembayaran;
        }

        setClearArea(65, 34, 15, 1);
        gotoxy(65, 34);
        rupiah(uangPembayaran);

        money uangKembalian;
        uangKembalian = uangPembayaran - pmc.totalHarga;
        gotoxy(65, 36);
        rupiah(uangKembalian);

        fwrite(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise);
        fclose(arsPenjualanMerchandise);
        response = MessageBox(NULL, "Apakah Anda ingin melakukan transaksi lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        if(response == IDYES){
            setClearArea(69, 24, 3, 1);
            setClearArea(65, 26, 15, 1);
            setClearArea(65, 28, 3, 1);
            setClearArea(69, 30, 3, 1);
            setClearArea(65, 32, 15, 1);
            setClearArea(65, 34, 15, 1);
            setClearArea(65, 36, 15, 1);
            for (int i = 114; i <= 164; i++){
                for(int j = 10; j <= 43; j++){
                    gotoPrintASCII(i, j, 219);
                }
            }
        }
    }while(response == IDYES);
}

void desain_tampilan_item_saat_ini(){
    setColorBlock(6, 6);
    for (int i = 114; i <= 164; i++){
        for(int j = 11; j <= 43; j++){
            gotoPrintASCII(i, j, 219);
        }
    }

    setColorBlock(7, 6);
    for(int i = 114; i <= 164; i++){
        gotoPrintASCII(i, 11, 223);
        gotoPrintASCII(i, 15, 220);
        gotoPrintASCII(i, 43, 220);
    }

    for(int i = 11; i <= 43; i++){
        gotoPrintASCII(114, i, 219);
        gotoPrintASCII(164, i, 219);
    }

    setColorBlock(0, 6);
    gotoPrintText(136, 12, "I T E M");
    gotoPrintText(132, 14, "S A A T  I N I");
}

void lihatTransaksiMerchandise(){
    //-----Membuat kolom bagian atas-----
    for(int i = 37; i <= 131; i++){
        setColorBlock(7, 0);
        gotoPrintASCII(i, 10, 220);
        gotoPrintASCII(i, 12, 223);
        setColorBlock(6, 0);
        gotoPrintASCII(i, 11, 219);
    }

    setColorBlock(0, 6);
    gotoPrintText(37, 11, "   ID TRANSAKSI     TANGGAL TRANSAKSI        NAMA KASIR         ID MEMBER         TOTAL HARGA");
    arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "rb");
    int i = 1;
    while(fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)){
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
            if(pmc.id_pendaftaran == 0){
                setColorBlock(0, 6);
                gotoxy(37, 12+i);
                printf("     PBL-%03d           %02d/%02d/%d        %-18s         -                          ", pmc.id_penjualanMerchandise, pmc.tanggalTransaksi.hari, pmc.tanggalTransaksi.bulan, pmc.tanggalTransaksi.tahun, pmc.nama_kasir);
                gotoxy(117, 12+i);
                rupiah(pmc.totalHarga);
            }
            else{
                setColorBlock(0, 6);
                gotoxy(37, 12+i);
                printf("     PBL-%03d           %02d/%02d/%d        %-18s      PDF-%03d                       ", pmc.id_penjualanMerchandise, pmc.tanggalTransaksi.hari, pmc.tanggalTransaksi.bulan, pmc.tanggalTransaksi.tahun, pmc.nama_kasir, pmc.id_pendaftaran);
                gotoxy(117, 12+i);
                rupiah(pmc.totalHarga);
            }
        }
        else if(i % 2 == 0){
            if(pmc.id_pendaftaran == 0){
                setColorBlock(0, 14);
                gotoxy(37, 12+i);
                printf("     PBL-%03d           %02d/%02d/%d        %-18s         -                          ", pmc.id_penjualanMerchandise, pmc.tanggalTransaksi.hari, pmc.tanggalTransaksi.bulan, pmc.tanggalTransaksi.tahun, pmc.nama_kasir);
                gotoxy(117, 12+i);
                rupiah(pmc.totalHarga);
            }
            else{
                setColorBlock(0, 14);
                gotoxy(37, 12+i);
                printf("     PBL-%03d           %02d/%02d/%d        %-18s      PDF-%03d                       ", pmc.id_penjualanMerchandise, pmc.tanggalTransaksi.hari, pmc.tanggalTransaksi.bulan, pmc.tanggalTransaksi.tahun, pmc.nama_kasir, pmc.id_pendaftaran);
                gotoxy(117, 12+i);
                rupiah(pmc.totalHarga);
            }
        }
        i++;
    }
    fclose(arsPenjualanMerchandise);

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
    do{//Memvalidasi apakah ID Paket menu yang diinput sesuai dengan yang ada (Pembuka)
        showCursor();
        found = 0;
        setColorBlock(0, 6);
        gotoPrintText(127, 43, "Input [0] pada ID Transaksi untuk batal");
        gotoPrintText(130, 41,"I D  T R A N S A K S I : PBL-");
        gotoxy(159, 41);
        limitIntChar(&id_transaksi, 3);

        arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "rb");
        while(fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)){
            if(pmc.id_penjualanMerchandise == id_transaksi){
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
                transaksiMerchandiseFunction();
            }
        }
        fclose(arsPenjualanMerchandise);

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
    gotoPrintText(81, 19, "I D  T R A N S A K S I : PBL-");
    gotoPrintText(81, 21, "N A M A  K A S I R     : ");
    gotoPrintText(81, 23, "T O T A L  H A R G A   : ");
    gotoPrintText(81, 25, "D E T A I L  I T E M   : ");

    arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "rb");
    while(fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)){
        if(id_transaksi == pmc.id_penjualanMerchandise){
            gotoxy(110, 19);
            printf("%03d", pmc.id_penjualanMerchandise);

            gotoxy(106, 21);
            printf("%s", pmc.nama_kasir);

            gotoxy(106, 23);
            rupiah(pmc.totalHarga);

            for(int i = 1; i <= pmc.jumlah_item; i++){
                gotoxy(83, 25+i*2);
                printf("I T E M  K E-%d       : %s", i, pmc.nama_merchandise[i]);
            }
        }
    }
    fclose(arsPenjualanMerchandise);

    getch();

    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 9; lebar <= 45; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    lihatTransaksiMerchandise();
}