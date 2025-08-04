void formTransaksiRuangan();
void tambahTransaksiRuangan();
void lihatTransaksiRuangan();


void formTransaksiRuangan()
{
    desain_form_transaksi();
    setColorBlock(0, 6);
    gotoPrintText(65, 12, "T R A N S A K S I");
    gotoPrintText(60, 14, "B O O K I N G  R U A N G A N");
    gotoPrintText(45, 17, "ID TRANSAKSI      : BKG-");
    gotoPrintText(45, 19, "TANGGAL TRANSAKSI :   /  /");
    gotoPrintText(45, 21, "NAMA KASIR        : ");
    gotoPrintText(45, 23, "NAMA PELANGGAN    : ");
    gotoPrintText(45, 25, "TANGGAL BOOKING   :   /  / ");
    gotoPrintText(45, 27, "WAKTU MULAI       :   :");
    gotoPrintText(45, 29, "WAKTU AKHIR       :   :");
    gotoPrintText(45, 31, "ID RUANGAN        : RGN-");
    gotoPrintText(45, 33, "NAMA RUANGAN      : ");
    gotoPrintText(45, 35, "ID MEMBER         : PDF-");
    gotoPrintText(45, 37, "TOTAL HARGA       : ");
    gotoPrintText(45, 39, "UANG PEMBAYARAN   : ");
    gotoPrintText(45, 41, "KEMBALIAN         : ");

    //-----Memberikan garis pada form-----
    for(int i = 65; i <= 98; i++){
        gotoPrintASCII(i, 24, 196);
        gotoPrintASCII(i, 26, 196);
        gotoPrintASCII(i, 28, 196);
        gotoPrintASCII(i, 30, 196);
        gotoPrintASCII(i, 32, 196);
        gotoPrintASCII(i, 34, 196);
        gotoPrintASCII(i, 36, 196);
        gotoPrintASCII(i, 38, 196);
        gotoPrintASCII(i, 40, 196);
        gotoPrintASCII(i, 42, 196);
    }
}

void tambahTransaksiRuangan()
{
    int response;
    setColorBlock(7, 0);
    for(int i = 9; i <= 45; i++){
        gotoPrintASCII(110, i, 219);
    }
    setColorBlock(0, 6);
    do{
        gotoPrintText(45, 35, "ID MEMBER         : PDF-");

        //-----Fungsi auto increament ID-----
        br.id_booking = 1;
        arsBookingRuangan = fopen("../Data/Booking Ruangan.dat", "a+b");
        date tanggal_booking[999];
        waktu waktu_mulai[999];
        waktu waktu_akhir[999];
        int id_ruanganTemp[999];

        if (arsBookingRuangan != NULL) {
            int i = 0;
            while (fread(&br, sizeof(br), 1, arsBookingRuangan)) {
                br.id_booking += 1;
                tanggal_booking[i].tahun= br.tanggal_booking.tahun;
                tanggal_booking[i].bulan= br.tanggal_booking.bulan;
                tanggal_booking[i].hari = br.tanggal_booking.hari;
                waktu_mulai[i].jam = br.waktu_mulai.jam;
                waktu_akhir[i].jam = br.waktu_akhir.jam;
                waktu_mulai[i].menit = br.waktu_mulai.menit;
                waktu_akhir[i].menit = br.waktu_akhir.menit;
                id_ruanganTemp[i] = br.id_ruangan;
                i++;
            }
        }

        //-----Menampilkan id transaksi-----
        gotoxy(69, 17);
        printf("%03d", br.id_booking);

        //-----Menampilkan tanggal transaksi berlangsung------
        gotoxy(65, 19);
        hariIni(&br.tanggal_transaksi.hari);
        gotoxy(68, 19);
        bulanIni(&br.tanggal_transaksi.bulan);
        gotoxy(71, 19);
        tahunIni(&br.tanggal_transaksi.tahun);

        //-----Menampilkan nama kasir sesuai dengan fungsi login-----
        arsPegawai = fopen("../Data/Pegawai.dat", "rb");
        while(fread(&p, sizeof(p), 1, arsPegawai)){
            if(strcmp(username, p.username)==0){
                strcpy(br.nama_kasir, p.nama);
            }
        }
        fclose(arsPegawai);

        gotoxy(65, 21);
        printf("%s", br.nama_kasir);

        gotoxy(65, 23);
        limitStrChar(br.nama_pelanggan, 18);
        if(strcmpi(br.nama_pelanggan, "x")==0){
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

        //-----input tanggal booking-----

        //validasi input hari
        int error = 0;
        //Validasi input tanggal
        hariBooking:
        do{
            gotoxy(65, 25);
            limitDateChar(&br.tanggal_booking.hari, 2);
            if(br.tanggal_booking.hari == 0 || br.tanggal_booking.hari > 31){
                setClearArea(65, 25, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan tanggal anda", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                error = 1;
            }
            else
            {
                error = 0;
            }
        }while(error == 1);

        //validasi input bulan
        do{
            gotoxy(68, 25);
            limitDateChar(&br.tanggal_booking.bulan, 2);
            if(br.tanggal_booking.bulan == 0 || br.tanggal_booking.bulan > 12){
                setClearArea(68, 25, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                error = 1;
            }
            else if(br.tanggal_booking.hari > 29  && br.tanggal_booking.bulan == 2){
                setClearArea(68, 25, 2, 1);
                setClearArea(65, 25, 2, 1);
                MessageBox(NULL, "Silahkan periksa kembali penulisan bulan anda", "bulan tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariBooking;
            }
            else{
                error = 0;
            }
        }while (error == 1);

        //validasi input tahun
        do{
            time_t now;
            time(&now);

            struct tm *local = localtime(&now);

            gotoxy(71, 25);
            limitDateChar(&br.tanggal_booking.tahun, 4);
            //-----validasi tidak boleh kurang dari tanggal, bulan dan tahun saat ini-----
            if(br.tanggal_booking.tahun < local->tm_year + 1900 || (br.tanggal_booking.tahun == local->tm_year + 1900 && br.tanggal_booking.bulan < local->tm_mon + 1) || (br.tanggal_booking.tahun == local->tm_year + 1900 && br.tanggal_booking.bulan == local->tm_mon + 1 && br.tanggal_booking.hari < local->tm_mday)) {
                setClearArea(71, 25, 4, 1);
                setClearArea(68, 25, 2, 1);
                setClearArea(65, 25, 2, 1);
                MessageBox(NULL, "Waktu reservasi tidak boleh kurang dari tanggal saat ini", "Waktu reser tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariBooking;;
            }

            //-----Validasi tahun kabisat-----
            else if (br.tanggal_booking.bulan == 2 && br.tanggal_booking.hari > 28 && kabisat(br.tanggal_booking.tahun) == false){
                setClearArea(71, 25, 4, 1);
                setClearArea(68, 25, 2, 1);
                setClearArea(65, 25, 2, 1);
                MessageBox(NULL, "Bukan Tahun Kabisat, silahkan masukkan ulang tanggal", "Tanggal tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                goto hariBooking;
            }
            else{
                error = 0;
            }
        }while (error == 1);

        //-----input waktu mulai booking----
        //Input jam booking
        time_t now;
        time(&now);
        struct tm *local = localtime(&now);
        inputWaktuMulaiJam:
        gotoxy(65, 27);
        limitIntChar(&br.waktu_mulai.jam, 2);

        //Validasi jam mulai
        if(br.waktu_mulai.jam > 23){
            MessageBox(NULL, "Jam tidak boleh melebihi 23, silahkan masukkan ulang jam", "jam tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(65, 27, 2, 1);
            goto inputWaktuMulaiJam;
        }
        else if(br.tanggal_booking.tahun == local->tm_year && br.tanggal_booking.bulan == local->tm_mon && br.tanggal_booking.hari == local->tm_mday && br.waktu_mulai.jam < local->tm_hour + 1){
            MessageBox(NULL, "Jam tidak boleh kurang dari waktu saat ini, silahkan masukkan ulang jam", "Jam tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(65, 27, 2, 1);
            goto inputWaktuMulaiJam;
        }

        //Validasi menit mulai
        inputWaktuMulaiMenit:
        gotoxy(68, 27);
        limitFloatChar(&br.waktu_mulai.menit, 2);
        if(br.waktu_mulai.menit > 59){
            MessageBox(NULL, "Menit tidak boleh melebihi 59, silahkan masukkan ulang menit", "menit tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(68, 27, 2, 1);
            goto inputWaktuMulaiJam;
        }

        else if(br.tanggal_transaksi.tahun == br.tanggal_booking.tahun && br.tanggal_transaksi.bulan == br.tanggal_booking.bulan && br.tanggal_booking.hari == br.tanggal_transaksi.hari){
            if(br.waktu_mulai.jam == local->tm_hour + 1 && br.waktu_mulai.menit < local->tm_min){
                MessageBox(NULL, "Menit tidak boleh kurang dari waktu saat ini, silahkan masukkan ulang menit", "Menit tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(68, 27, 2, 1);
                goto inputWaktuMulaiMenit;
            }
        }

        //-----input waktu berakhir booking----
        //Input jam berakhir
        inputWaktuBerakhirJam:
        gotoxy(65, 29);
        limitIntChar(&br.waktu_akhir.jam, 2);

        //Validasi jam berakhir
        if(br.waktu_akhir.jam > 23){
            MessageBox(NULL, "Jam tidak boleh melebihi 23, silahkan masukkan ulang jam", "jam tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(65, 29, 2, 1);
            goto inputWaktuBerakhirJam;
        }
        else if(br.waktu_akhir.jam < br.waktu_mulai.jam){
            MessageBox(NULL, "Waktu berakhir tidak boleh kurang dari waktu mulai booking, silahkan masukkan ulang jam", "jam tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(65, 33, 2, 1);
            goto inputWaktuBerakhirJam;
        }

        //Validasi menit berakhir
        inputWaktuBerakhirMenit:
        gotoxy(68, 29);
        limitFloatChar(&br.waktu_akhir.menit, 2);
        if(br.waktu_akhir.menit > 59){
            MessageBox(NULL, "Menit tidak boleh melebihi 59, silahkan masukkan ulang menit", "menit tidak valid", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(68, 29, 2, 1);
            goto inputWaktuBerakhirMenit;
        }

        money harga = 0;
        br.totalHarga = 0;

        desain_tabel_transaksi("R");
        setColorBlock(0, 6);

        //-----Input id ruangan-----
        inputIdRuangan:
        gotoxy(69, 31);
        limitIntChar(&br.id_ruangan, 3);

        //Validasi id Ruangan
        int found = 0;
        do
        {
            arsRuangan = fopen("../Data/Ruangan.dat", "rb");
            while(fread(&rg, sizeof(rg), 1, arsRuangan)){
                if(br.id_ruangan == rg.id_ruangan){
                    // Cek apakah ada bentrok waktu
                    int waktu_mulai_baru = br.waktu_mulai.jam * 60 + br.waktu_mulai.menit;
                    int waktu_akhir_baru = br.waktu_akhir.jam * 60 + br.waktu_akhir.menit;

                    for(int i = 0;i < 999; i++){
                        if (id_ruanganTemp[i] == br.id_ruangan){
                            // Bandingkan tanggal terlebih dahulu
                            if (tanggal_booking[i].hari == br.tanggal_booking.hari && tanggal_booking[i].bulan == br.tanggal_booking.bulan && tanggal_booking[i].tahun == br.tanggal_booking.tahun){
                                // Konversi waktu yang sudah tersimpan ke menit
                                int waktu_mulai_tersimpan = waktu_mulai[i].jam * 60 + waktu_mulai[i].menit;
                                int waktu_akhir_tersimpan = waktu_akhir[i].jam * 60 + waktu_akhir[i].menit;

                                // Cek apakah ada bentrok waktu
                                if ((waktu_mulai_baru >= waktu_mulai_tersimpan && waktu_mulai_baru < waktu_akhir_tersimpan) || (waktu_akhir_baru > waktu_mulai_tersimpan && waktu_akhir_baru <= waktu_akhir_tersimpan) || (waktu_mulai_baru <= waktu_mulai_tersimpan && waktu_akhir_baru >= waktu_akhir_tersimpan)) {
                                    MessageBox(NULL, "Ruangan tidak tersedia! Silahkan cari ruangan lain!", "Validasi Ruangan", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                                    setClearArea(69, 31, 3, 1);
                                    goto inputIdRuangan;
                                }
                            }
                        }
                    }
                    found = 1;
                    strcpy(br.nama_ruangan, rg.nama_ruangan);
                    harga = rg.harga_per_jam;
                }
            }
            fclose(arsRuangan);

            if(found == 0){
                MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(69, 31, 3, 1);
                goto inputIdRuangan;
            }

        }while(found == 0);

        //-----Menampilkan Ruangan sesuai dengan id yang diinput-----
        gotoxy(65, 33);
        printf("%s", br.nama_ruangan);

            //-----Menampilkan kamar yang dipesan sampai saat ini-----
            desain_tampilan_item_saat_ini();
            gotoxy(116, 20);
            printf("N A M A  R U A N G A N     : %s", br.nama_ruangan);
            gotoxy(116, 22);
            printf("W A K T U  B O O K I N G   : %02d:%02.f", br.waktu_mulai.jam, br.waktu_mulai.menit);
            gotoxy(116, 24);
            float durasi = (br.waktu_akhir.jam - br.waktu_mulai.jam) + ((br.waktu_akhir.menit - br.waktu_mulai.menit)/60.0);
            printf("D U R A S I  B O O K I N G : %.2f jam",  durasi);

            br.totalHarga = harga*durasi;

            fclose(arsRuangan);
            gotoxy(116, 26);
            printf("H A R G A  P E R - J A M   :");
            gotoxy(145, 26);
            rupiah(harga);


        //-----input id member-----
        int id_pendaftaran;
        found = 0;
        do
        {
            gotoxy(69, 35);
            limitIntChar(&id_pendaftaran, 3);

            arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
            while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
                //validasi jika tidak mempunyai id member
                if(id_pendaftaran == 0){
                    setClearArea(65, 35, 7, 1);
                    gotoPrintText(65, 35, "-");
                    br.id_pendaftaran = NULL;
                    found = 2;
                }
                else if(id_pendaftaran == pmb.id_pendaftaran){
                    found = 1;
                }
            }
            fclose(arsPendaftaranMember);

            if(found == 0){
                MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(69, 35, 3, 1);
            }
            if(found == 1){
                pmc.id_pendaftaran = id_pendaftaran;
                for (int i = 114; i <= 164; i++){
                    for(int j = 10; j <= 43; j++){
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
                    arsDiskon = fopen("../Data/Diskon.dat", "rb");
                    while(fread(&d, sizeof(d), 1, arsDiskon)){
                        if(id_diskon == 0){
                            yes = 2;
                        }
                        else if(id_diskon == d.id_diskon){
                            yes = 1;
                        }
                    }
                    fclose (arsDiskon);
                    if(yes == 0)
                    {
                        MessageBox(NULL, "ID tidak tersedia! Mohon masukkan ID yang tersedia!", "ID ERROR", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
                        setClearArea(118, 10, 3, 1);
                    }
                    if(yes == 1){
                        br.totalHarga = br.totalHarga - (br.totalHarga * (d.besar_diskon/100.0));
                    }
                }while(yes == 0);
                break;
            }

        }while(found == 0);

        gotoxy(65, 37);
        rupiah(br.totalHarga);

        inputUangPembayaran:
        money uangPembayaran = 0;
        gotoPrintText(65, 39, "Rp");
        limitMoneyChar(&uangPembayaran, 3, 8, 68, 39);
        if(uangPembayaran < br.totalHarga){
            MessageBox(NULL, "Uang tidak cukup", "Jumlah Error", MB_OK|MB_ICONERROR|MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(68, 34, 8, 1);
            goto inputUangPembayaran;
        }

        setClearArea(65, 39, 15, 1);
        gotoxy(65, 39);
        rupiah(uangPembayaran);

        money uangKembalian;
        uangKembalian = uangPembayaran - br.totalHarga;
        gotoxy(65, 41);
        rupiah(uangKembalian);

        fwrite(&br, sizeof(br), 1, arsBookingRuangan);
        fclose(arsBookingRuangan);
        response = MessageBox(NULL, "Apakah Anda ingin melakukan transaksi lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        if(response == IDYES){
            setClearArea(65, 23, 18, 1);
            setClearArea(65, 25, 2, 1);
            setClearArea(68, 25, 2, 1);
            setClearArea(71, 25, 4, 1);
            setClearArea(65, 27, 2, 1);
            setClearArea(68, 27, 2, 1);
            setClearArea(65, 29, 2, 1);
            setClearArea(68, 29, 2, 1);
            setClearArea(69, 31, 3, 1);
            setClearArea(65, 33, 18, 1);
            setClearArea(65, 35, 7, 1);
            setClearArea(65, 37, 15, 1);
            setClearArea(65, 39, 15, 1);
            for (int i = 114; i <= 164; i++){
                for(int j = 10; j <= 43; j++){
                    gotoPrintASCII(i, j, 219);
                }
            }
        }
    }while(response == IDYES);
}

void lihatTransaksiRuangan()
{
    for(int i = 37; i <= 131; i++){
        setColorBlock(7, 0);
        gotoPrintASCII(i, 10, 220);
        gotoPrintASCII(i, 12, 223);
        setColorBlock(6, 0);
        gotoPrintASCII(i, 11, 219);
    }

    setColorBlock(0, 6);
    gotoPrintText(37, 11, "   ID TRANSAKSI     TANGGAL TRANSAKSI        NAMA KASIR         ID MEMBER         TOTAL HARGA");
    arsBookingRuangan= fopen("../Data/Booking Ruangan.dat", "rb");
    int i = 1;
    while(fread(&br, sizeof(br), 1, arsBookingRuangan)){
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
            if(br.id_pendaftaran == 0){
                setColorBlock(0, 6);
                gotoxy(37, 12+i);
                printf("     BKG-%03d           %02d/%02d/%d        %-18s         -                          ", br.id_booking, br.tanggal_transaksi.hari, br.tanggal_transaksi.bulan, br.tanggal_transaksi.tahun, br.nama_kasir);
                gotoxy(117, 12+i);
                rupiah(br.totalHarga);
            }
            else{
                setColorBlock(0, 6);
                gotoxy(37, 12+i);
                printf("     BKG-%03d           %02d/%02d/%d        %-18s      PDF-%03d                       ", br.id_booking, br.tanggal_transaksi.hari, br.tanggal_transaksi.bulan, br.tanggal_transaksi.tahun, br.nama_kasir, br.id_pendaftaran);
                gotoxy(117, 12+i);
                rupiah(br.totalHarga);
            }
        }
        else if(i % 2 == 0){
            if(br.id_pendaftaran == 0){
                setColorBlock(0, 14);
                gotoxy(37, 12+i);
                printf("     BKG-%03d           %02d/%02d/%d        %-18s         -                          ", br.id_booking, br.tanggal_transaksi.hari, br.tanggal_transaksi.bulan, br.tanggal_transaksi.tahun, br.nama_kasir);
                gotoxy(117, 12+i);
                rupiah(br.totalHarga);
            }
            else{
                setColorBlock(0, 14);
                gotoxy(37, 12+i);
                printf("     BKG-%03d           %02d/%02d/%d        %-18s      PDF-%03d                       ", br.id_booking, br.tanggal_transaksi.hari, br.tanggal_transaksi.bulan, br.tanggal_transaksi.tahun, br.nama_kasir, br.id_pendaftaran);
                gotoxy(117, 12+i);
                rupiah(br.totalHarga);
            }
        }
        i++;
    }
    fclose(arsBookingRuangan);

    getch();

    //-----Menghapus layar-----
    setColorBlock(0, 0);
    for (int panjang = 37; panjang <= 166; panjang++){
        for (int lebar = 9; lebar <= 45; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    transaksi_option();
    transaksiBookingFunction();
}


