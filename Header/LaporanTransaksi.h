void laporanTahunan(char mode[2]);
void laporanBulanan(char mode[2]);
void laporanHarian(char mode[2]);
void opsiWaktuLaporan();
void buttonOpsiWaktuLaporanTransition(int optional);
void laporanMenuFunction();
void laporanMerchandiseFunction();
void laporanMemberFunction();
void laporanBookingFunction();

void laporanTahunan(char mode[2]){
    int response = 0;
    do
    {
        int tahunDicari;
        int bulan[12] = {0};
        int totalPemasukan = 0;
        int totalTransaksi = 0;

        setColorBlock(7, 7);
        for(int i = 9; i <= 45; i++){
            gotoPrintASCII(129, i, 219);
        }

        setColorBlock(6, 6);
        for(int i = 130; i <= 167; i++){
            for(int j = 9; j <= 45; j++){
                gotoPrintASCII(i, j, 219);
            }
        }

        setColorBlock(7, 7);
        for(int i = 130; i <= 167; i++){
            gotoPrintASCII(i, 13, 220);
        }

        setColorBlock(0, 6);
        gotoPrintText(138, 11, "C A R I  L A P O R A N");
        gotoPrintText(138, 27, "INPUT TAHUN : ");
        for(int i = 152; i <= 155; i++)
        {
            gotoPrintASCII(i, 28, 196);
        }


        int max = 0;
        gotoxy(152, 27);
        limitIntChar(&tahunDicari, 4);
        if(tahunDicari == 0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 167; panjang++){
                for (int lebar = 9; lebar <= 45; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            opsiWaktuLaporan();
            if(strcmpi(mode, "PMM")==0){
                laporanMenuFunction();
            }
            else if(strcmpi(mode, "PMC")==0){
                laporanMerchandiseFunction();
            }
            else if(strcmpi(mode, "PMB")==0){
                laporanMemberFunction();
            }
            else if(strcmpi(mode, "BR")==0){
                laporanBookingFunction();
            }
        }

        if(strcmpi(mode, "PMC")==0){
            arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "rb");
            while(fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)){
                if(pmc.tanggalTransaksi.tahun == tahunDicari){
                    if(pmc.tanggalTransaksi.bulan == 1){
                        bulan[0]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 2){
                        bulan[1]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 3){
                        bulan[2]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 4){
                        bulan[3]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 5){
                        bulan[4]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 6){
                        bulan[5]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 7){
                        bulan[6]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 8){
                        bulan[7]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 9){
                        bulan[8]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 10){
                        bulan[9]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 11){
                        bulan[10]++;
                    }
                    if(pmc.tanggalTransaksi.bulan == 12){
                        bulan[11]++;
                    }
                    totalPemasukan += pmc.totalHarga;
                }
            }
            fclose(arsPenjualanMerchandise);
        }

        if(strcmpi(mode, "PMM")==0){
            arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "rb");
            while(fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)){
                if(pmm.tanggal_transaksi.tahun == tahunDicari){
                    if(pmm.tanggal_transaksi.bulan == 1){
                        bulan[0]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 2){
                        bulan[1]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 3){
                        bulan[2]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 4){
                        bulan[3]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 5){
                        bulan[4]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 6){
                        bulan[5]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 7){
                        bulan[6]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 8){
                        bulan[7]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 9){
                        bulan[8]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 10){
                        bulan[9]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 11){
                        bulan[10]++;
                    }
                    if(pmm.tanggal_transaksi.bulan == 12){
                        bulan[11]++;
                    }
                    totalPemasukan += pmm.total_harga;
                }
            }
            fclose(arsPesananMakandanMinum);
        }

        if(strcmpi(mode, "PMB")==0){
            arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
            while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
                if(pmb.tanggalBergabung.tahun == tahunDicari){
                    if(pmb.tanggalBergabung.bulan == 1){
                        bulan[0]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 2){
                        bulan[1]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 3){
                        bulan[2]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 4){
                        bulan[3]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 5){
                        bulan[4]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 6){
                        bulan[5]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 7){
                        bulan[6]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 8){
                        bulan[7]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 9){
                        bulan[8]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 10){
                        bulan[9]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 11){
                        bulan[10]++;
                    }
                    if(pmb.tanggalBergabung.bulan == 12){
                        bulan[11]++;
                    }
                    totalPemasukan += pmb.harga;
                }
            }
            fclose(arsPendaftaranMember);
        }

        if(strcmpi(mode, "BR")==0){
            arsBookingRuangan = fopen("../Data/Booking Ruangan.dat", "rb");
            while(fread(&br, sizeof(br), 1, arsBookingRuangan)){
                if(br.tanggal_transaksi.tahun == tahunDicari){
                    if(br.tanggal_transaksi.bulan == 1){
                        bulan[0]++;
                    }
                    if(br.tanggal_transaksi.bulan == 2){
                        bulan[1]++;
                    }
                    if(br.tanggal_transaksi.bulan == 3){
                        bulan[2]++;
                    }
                    if(br.tanggal_transaksi.bulan == 4){
                        bulan[3]++;
                    }
                    if(br.tanggal_transaksi.bulan == 5){
                        bulan[4]++;
                    }
                    if(br.tanggal_transaksi.bulan == 6){
                        bulan[5]++;
                    }
                    if(br.tanggal_transaksi.bulan == 7){
                        bulan[6]++;
                    }
                    if(br.tanggal_transaksi.bulan == 8){
                        bulan[7]++;
                    }
                    if(br.tanggal_transaksi.bulan == 9){
                        bulan[8]++;
                    }
                    if(br.tanggal_transaksi.bulan == 10){
                        bulan[9]++;
                    }
                    if(br.tanggal_transaksi.bulan == 11){
                        bulan[10]++;
                    }
                    if(br.tanggal_transaksi.bulan == 12){
                        bulan[11]++;
                    }
                    totalPemasukan += br.totalHarga;
                }
            }
            fclose(arsBookingRuangan);
        }

        fflush(stdout);
        for (int i = 0; i < 12; i++){
            if(bulan[i] > max){
                max = bulan[i];
            }
            totalTransaksi += bulan[i];
        }
        fflush(stdout);

        //-----Membuat diagram batang-----
        setColorBlock(7, 0);
        for(int i = 40; i <= 90; i++){
            gotoPrintASCII(i, 42, 196);
            fflush(stdout);
        }

        gotoPrintASCII(40, 42, 192);
        fflush(stdout);

        for (int i = 1; i <= max/4; i++){
            gotoPrintASCII(40, 42-i, 179);
            fflush(stdout);
        }

        //batang bulan januari
        gotoxy(42, 40-bulan[0]/4);
        printf("%d", bulan[0]);
        fflush(stdout);
        for (int i = 42; i <= 44; i++){
            for (int j = 1; j <= bulan[0]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(43, 43, "J");
        gotoPrintText(43, 44, "A");
        gotoPrintText(43, 45, "N");

        //batang bulan februari
        gotoxy(46, 40-bulan[1]/4);
        printf("%d", bulan[1]);
        fflush(stdout);
        for (int i = 46; i <= 48; i++){
            for (int j = 1; j <= bulan[1]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(47, 43, "F");
        gotoPrintText(47, 44, "E");
        gotoPrintText(47, 45, "B");

        //batang bulan maret
        gotoxy(50, 40-bulan[2]/4);
        printf("%d", bulan[2]);
        fflush(stdout);
        for (int i = 50; i <= 52; i++){
            for (int j = 1; j <= bulan[2]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(51, 43, "M");
        gotoPrintText(51, 44, "A");
        gotoPrintText(51, 45, "R");

        //batang bulan april
        gotoxy(54, 40-bulan[3]/4);
        printf("%d", bulan[3]);
        fflush(stdout);
        for (int i = 54; i <= 56; i++){
            for (int j = 1; j <= bulan[3]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(55, 43, "A");
        gotoPrintText(55, 44, "P");
        gotoPrintText(55, 45, "R");

        //batang bulan mei
        gotoxy(58, 40-bulan[4]/4);
        printf("%d", bulan[4]);
        fflush(stdout);
        for (int i = 58; i <= 60; i++){
            for (int j = 1; j <= bulan[4]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(59, 43, "M");
        gotoPrintText(59, 44, "E");
        gotoPrintText(59, 45, "I");

        //batang bulan juni
        gotoxy(62, 40-bulan[5]/4);
        printf("%d", bulan[5]);
        fflush(stdout);
        for (int i = 62; i <= 64; i++){
            for (int j = 1; j <= bulan[5]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(63, 43, "J");
        gotoPrintText(63, 44, "U");
        gotoPrintText(63, 45, "N");

        //batang bulan juli
        gotoxy(66, 40-bulan[6]/4);
        printf("%d", bulan[6]);
        fflush(stdout);
        for (int i = 66; i <= 68; i++){
            for (int j = 1; j <= bulan[6]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(67, 43, "J");
        gotoPrintText(67, 44, "U");
        gotoPrintText(67, 45, "L");

        //batang bulan agustus
        gotoxy(70, 40-bulan[7]/4);
        printf("%d", bulan[7]);
        fflush(stdout);
        for (int i = 70; i <= 72; i++){
            for (int j = 1; j <= bulan[7]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(71, 43, "A");
        gotoPrintText(71, 44, "G");
        gotoPrintText(71, 45, "S");

        //batang bulan september
        gotoxy(74, 40-bulan[8]/4);
        printf("%d", bulan[8]);
        fflush(stdout);
        for (int i = 74; i <= 76; i++){
            for (int j = 1; j <= bulan[8]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(75, 43, "S");
        gotoPrintText(75, 44, "E");
        gotoPrintText(75, 45, "P");

        //batang bulan oktober
        gotoxy(78, 40-bulan[9]/4);
        printf("%d", bulan[9]);
        fflush(stdout);
        for (int i = 78; i <= 80; i++){
            for (int j = 1; j <= bulan[9]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(79, 43, "O");
        gotoPrintText(79, 44, "K");
        gotoPrintText(79, 45, "T");

        //batang bulan november
        gotoxy(82, 40-bulan[10]/4);
        printf("%d", bulan[10]);
        fflush(stdout);
        for (int i = 82; i <= 84; i++){
            for (int j = 1; j <= bulan[10]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(83, 43, "N");
        gotoPrintText(83, 44, "O");
        gotoPrintText(83, 45, "V");

        //batang bulan desember
        gotoxy(86, 40-bulan[11]/4);
        printf("%d", bulan[11]);
        fflush(stdout);
        for (int i = 86; i <= 88; i++){
            for (int j = 1; j <= bulan[11]/4; j++){
                gotoPrintASCII(i, 42-j, 219);
                fflush(stdout);
            }
        }
        gotoPrintText(87, 43, "D");
        gotoPrintText(87, 44, "E");
        gotoPrintText(87, 45, "S");

        //Penulisan total pemasukan
        for (int i = 96; i <= 124; i++){
            gotoPrintASCII(i, 18, 196);
            gotoPrintASCII(i, 28, 196);
        }

        for (int i = 18; i <= 27; i++){
            gotoPrintASCII(95, i, 179);
            gotoPrintASCII(125, i, 179);
        }

        gotoPrintText(96, 17, "T O T A L   P E M A S U K A N");
        gotoPrintASCII(95, 18, 218);
        gotoPrintASCII(125, 18, 191);
        gotoPrintASCII(95, 28, 192);
        gotoPrintASCII(125, 28, 217);
        gotoxy(102, 23);
        rupiah(totalPemasukan);
        fflush(stdout);

        //Penulisan total transaksi
        for (int i = 96; i <= 124; i++){
            gotoPrintASCII(i, 32, 196);
            gotoPrintASCII(i, 42, 196);
        }

        for (int i = 33; i <= 41; i++){
            gotoPrintASCII(95, i, 179);
            gotoPrintASCII(125, i, 179);
        }

        gotoPrintText(96, 31, "T O T A L   T R A N S A K S I");
        gotoPrintASCII(95, 32, 218);
        gotoPrintASCII(125, 32, 191);
        gotoPrintASCII(95, 42, 192);
        gotoPrintASCII(125, 42, 217);
        gotoxy(109, 37);
        printf("%d", totalTransaksi);
        fflush(stdout);

        hideCursor();
        getch();
        response = MessageBox(NULL, "Apakah Anda ingin melihat laporan lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        if(response == IDYES){
            //-----hapus dashboard laporan------
            setColorBlock(0, 0);
            for(int i = 37; i <= 128; i++){
                for(int j = 9; j <= 45; j++){
                    gotoPrintASCII(i, j, 219);
                }
            }
        }
        showCursor();
    }while(response == IDYES);
}

void laporanBulanan(char mode[2])
{
    int response = 0;
    do{
        setColorBlock(7, 7);
        for(int i = 9; i <= 45; i++){
            gotoPrintASCII(129, i, 219);
        }

        setColorBlock(6, 6);
        for(int i = 130; i <= 167; i++){
            for(int j = 9; j <= 45; j++){
                gotoPrintASCII(i, j, 219);
            }
        }

        setColorBlock(7, 7);
        for(int i = 130; i <= 167; i++){
            gotoPrintASCII(i, 13, 220);
        }

        for(int i = 45; i <= 81; i++){
            setColorBlock(7, 0);
            gotoPrintASCII(i, 10, 220);
            gotoPrintASCII(i, 12, 223);
            setColorBlock(6, 0);
            gotoPrintASCII(i, 11, 219);
        }

        setColorBlock(0, 6);
        gotoxy(45, 11);
        printf("   ID           TOTAL PEMASUKAN      ");

        int tahunDicari;
        int bulanDicari;
        setColorBlock(0, 6);
        gotoPrintText(138, 11, "C A R I  L A P O R A N");
        gotoPrintText(138, 27, "INPUT TAHUN : ");
        gotoPrintText(138, 29, "INPUT BULAN : ");
        for(int i = 152; i <= 155; i++)
        {
            gotoPrintASCII(i, 28, 196);
            gotoPrintASCII(i, 30, 196);
        }
        inputTahunDicari:
        int totalTransaksi = 0;
        int totalPemasukan = 0;
        gotoxy(152, 27);
        limitIntChar(&tahunDicari, 4);
        if(tahunDicari == 0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 167; panjang++){
                for (int lebar = 9; lebar <= 45; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            opsiWaktuLaporan();
            if(strcmpi(mode, "PMM")==0){
                laporanMenuFunction();
            }
            else if(strcmpi(mode, "PMC")==0){
                laporanMerchandiseFunction();
            }
            else if(strcmpi(mode, "PMB")==0){
                laporanMemberFunction();
            }
            else if(strcmpi(mode, "BR")==0){
                laporanBookingFunction();
            }
        }

        inputbulanDicari:
        int found = 0;
        gotoxy(152, 29);
        limitIntChar(&bulanDicari, 2);
        if(bulanDicari == 0){
            setClearArea(152, 29, 2, 1);
            setClearArea(152, 27, 4, 1);
            goto inputTahunDicari;
        }
        if(bulanDicari > 12){
            MessageBox(NULL, "Bulan tidak valid! Silahkan masukkan ulang!", "Bulan Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(152, 29, 2, 1);
            goto inputbulanDicari;
        }

        if(strcmpi(mode, "PMM")==0){
            arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "rb");
            while(fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)){
                if(tahunDicari == pmm.tanggal_transaksi.tahun && bulanDicari == pmm.tanggal_transaksi.bulan){
                    found = 1;
                    totalPemasukan += pmm.total_harga;
                    totalTransaksi += 1;
                }
            }
            fclose(arsPesananMakandanMinum);
            if(found == 0){
                MessageBox(NULL, "Transaksi tidak ada! Silahkan masukkan ulang!", "Pencarian Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(152, 29, 2, 1);
                setClearArea(152, 27, 4, 1);
                goto inputTahunDicari;
            }
            arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "rb");
            rewind(arsPesananMakandanMinum);
            int i = 1;
            while(fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)){
                if(tahunDicari == pmm.tanggal_transaksi.tahun && bulanDicari == pmm.tanggal_transaksi.bulan){
                    if(i % 25 == 1 && i != 1){
                        getch();
                        for(int j = 45; j <= 81; j++){
                            for(int k = 13; k <= 38; k++){
                                setColorBlock(0, 0);
                                gotoPrintText(j, k, " ");
                            }
                        }
                        i = 1;
                    }
                    if(i % 2 == 1){
                        setColorBlock(0, 6);
                        gotoxy(45, 12+i);
                        printf("PSN-%03d                              ", pmm.id_pesanan);
                        gotoxy(61, 12+i);
                        rupiah(pmm.total_harga);
                    }
                    else if(i % 2 == 0){
                        setColorBlock(0, 14);
                        gotoxy(45, 12+i);
                        printf("PSN-%03d                              ", pmm.id_pesanan);
                        gotoxy(61, 12+i);
                        rupiah(pmm.total_harga);
                    }
                    i++;
                }
            }
        }

        if(strcmpi(mode, "PMC")==0){
            arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "rb");
            rewind(arsPenjualanMerchandise);
            while(fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)){
                if(tahunDicari == pmc.tanggalTransaksi.tahun && bulanDicari == pmc.tanggalTransaksi.bulan){
                    found = 1;
                    totalPemasukan += pmc.totalHarga;
                    totalTransaksi += 1;
                }
            }
            fclose(arsPenjualanMerchandise);
            if(found == 0){
                MessageBox(NULL, "Transaksi tidak ada! Silahkan masukkan ulang!", "Pencarian Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(152, 29, 2, 1);
                setClearArea(152, 27, 4, 1);
                goto inputTahunDicari;
            }

            arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "rb");
            rewind(arsPenjualanMerchandise);
            int i = 1;
            while(fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)){
                if(tahunDicari == pmc.tanggalTransaksi.tahun && bulanDicari == pmc.tanggalTransaksi.bulan){
                    if(i % 25 == 1 && i != 1){
                        getch();
                        for(int j = 45; j <= 81; j++){
                            for(int k = 13; k <= 38; k++){
                                setColorBlock(0, 0);
                                gotoPrintText(j, k, " ");
                            }
                        }
                        i = 1;
                    }
                    if(i % 2 == 1){
                        setColorBlock(0, 6);
                        gotoxy(45, 12+i);
                        printf("PBL-%03d                              ", pmc.id_penjualanMerchandise);
                        gotoxy(61, 12+i);
                        rupiah(pmc.totalHarga);
                    }
                    else if(i % 2 == 0){
                        setColorBlock(0, 14);
                        gotoxy(45, 12+i);
                        printf("PBL-%03d                              ", pmc.id_penjualanMerchandise);
                        gotoxy(61, 12+i);
                        rupiah(pmc.totalHarga);
                    }
                    i++;
                }
            }
        }
        if(strcmpi(mode, "PMB")==0){
            arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
            while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
                if(tahunDicari == pmb.tanggalBergabung.tahun && bulanDicari == pmb.tanggalBergabung.bulan){
                    found = 1;
                    totalPemasukan += pmb.harga;
                    totalTransaksi += 1;
                }
            }
            fclose(arsPendaftaranMember);
            if(found == 0){
                MessageBox(NULL, "Transaksi tidak ada! Silahkan masukkan ulang!", "Pencarian Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(152, 29, 2, 1);
                setClearArea(152, 27, 4, 1);
                goto inputTahunDicari;
            }
            arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
            rewind(arsPendaftaranMember);
            int i = 1;
            while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
                if(tahunDicari == pmb.tanggalBergabung.tahun && bulanDicari == pmb.tanggalBergabung.bulan){
                    if(i % 25 == 1 && i != 1){
                        getch();
                        for(int j = 45; j <= 81; j++){
                            for(int k = 13; k <= 38; k++){
                                setColorBlock(0, 0);
                                gotoPrintText(j, k, " ");
                            }
                        }
                        i = 1;
                    }
                    if(i % 2 == 1){
                        setColorBlock(0, 6);
                        gotoxy(45, 12+i);
                        printf("PDF-%03d                              ", pmb.id_pendaftaran);
                        gotoxy(61, 12+i);
                        rupiah(pmb.harga);
                    }
                    else if(i % 2 == 0){
                        setColorBlock(0, 14);
                        gotoxy(45, 12+i);
                        printf("PDF-%03d                              ", pmb.id_pendaftaran);
                        gotoxy(61, 12+i);
                        rupiah(pmb.harga);
                    }
                }
                i++;
            }
        }
        if(strcmpi(mode, "BR")==0){
            arsBookingRuangan = fopen("../Data/Booking Ruangan.dat", "rb");
            while(fread(&br, sizeof(br), 1, arsBookingRuangan)){
                if(tahunDicari == br.tanggal_transaksi.tahun && bulanDicari == br.tanggal_transaksi.bulan){
                    found = 1;
                    totalPemasukan += br.totalHarga;
                    totalTransaksi += 1;
                }
            }
            fclose(arsBookingRuangan);
            if(found == 0){
                MessageBox(NULL, "Transaksi tidak ada! Silahkan masukkan ulang!", "Pencarian Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(152, 29, 2, 1);
                setClearArea(152, 27, 4, 1);
                goto inputTahunDicari;
            }
            arsBookingRuangan = fopen("../Data/Booking Ruangan.dat", "rb");
            rewind(arsBookingRuangan);
            int i = 1;
            while(fread(&br, sizeof(br), 1, arsBookingRuangan)){
                if(tahunDicari == br.tanggal_transaksi.tahun && bulanDicari == br.tanggal_transaksi.bulan){
                    if(i % 25 == 1 && i != 1){
                        getch();
                        for(int j = 45; j <= 81; j++){
                            for(int k = 13; k <= 38; k++){
                                setColorBlock(0, 0);
                                gotoPrintText(j, k, " ");
                            }
                        }
                        i = 1;
                    }
                    if(i % 2 == 1){
                        setColorBlock(0, 6);
                        gotoxy(45, 12+i);
                        printf("BKG-%03d                              ", br.id_booking);
                        gotoxy(61, 12+i);
                        rupiah(br.totalHarga);
                    }
                    else if(i % 2 == 0){
                        setColorBlock(0, 14);
                        gotoxy(45, 12+i);
                        printf("BKG-%03d                              ", br.id_booking);
                        gotoxy(61, 12+i);
                        rupiah(br.totalHarga);
                    }
                }
                i++;
            }
        }

        setColorBlock(7, 0);

        //Penulisan total pemasukan
        for (int i = 96; i <= 124; i++){
            gotoPrintASCII(i, 18, 196);
            gotoPrintASCII(i, 28, 196);
        }

        for (int i = 18; i <= 27; i++){
            gotoPrintASCII(95, i, 179);
            gotoPrintASCII(125, i, 179);
        }

        gotoPrintText(96, 17, "T O T A L   P E M A S U K A N");
        gotoPrintASCII(95, 18, 218);
        gotoPrintASCII(125, 18, 191);
        gotoPrintASCII(95, 28, 192);
        gotoPrintASCII(125, 28, 217);
        gotoxy(102, 23);
        rupiah(totalPemasukan);
        fflush(stdout);

        //Penulisan total transaksi
        for (int i = 96; i <= 124; i++){
            gotoPrintASCII(i, 32, 196);
            gotoPrintASCII(i, 42, 196);
        }

        for (int i = 33; i <= 41; i++){
            gotoPrintASCII(95, i, 179);
            gotoPrintASCII(125, i, 179);
        }

        gotoPrintText(96, 31, "T O T A L   T R A N S A K S I");
        gotoPrintASCII(95, 32, 218);
        gotoPrintASCII(125, 32, 191);
        gotoPrintASCII(95, 42, 192);
        gotoPrintASCII(125, 42, 217);
        gotoxy(109, 37);
        printf("%d", totalTransaksi);
        fflush(stdout);

        hideCursor();
        getch();
        response = MessageBox(NULL, "Apakah Anda ingin melihat laporan lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        if(response == IDYES){
            //-----hapus dashboard laporan------
            setColorBlock(0, 0);
            for(int i = 37; i <= 128; i++){
                for(int j = 9; j <= 45; j++){
                    gotoPrintASCII(i, j, 219);
                }
            }
        }
        showCursor();

    }while(response == IDYES);
}

void laporanHarian(char mode[2])
{
    int response = 0;
    do{
        setColorBlock(7, 7);
        for(int i = 9; i <= 45; i++){
            gotoPrintASCII(129, i, 219);
        }

        setColorBlock(6, 6);
        for(int i = 130; i <= 167; i++){
            for(int j = 9; j <= 45; j++){
                gotoPrintASCII(i, j, 219);
            }
        }

        setColorBlock(7, 7);
        for(int i = 130; i <= 167; i++){
            gotoPrintASCII(i, 13, 220);
        }

        for(int i = 45; i <= 81; i++){
            setColorBlock(7, 0);
            gotoPrintASCII(i, 10, 220);
            gotoPrintASCII(i, 12, 223);
            setColorBlock(6, 0);
            gotoPrintASCII(i, 11, 219);
        }

        setColorBlock(0, 6);
        gotoxy(45, 11);
        printf("   ID           TOTAL PEMASUKAN      ");

        int tahunDicari;
        int bulanDicari;
        int haridDicari;
        setColorBlock(0, 6);
        gotoPrintText(138, 11, "C A R I  L A P O R A N");
        gotoPrintText(138, 27, "INPUT TAHUN   : ");
        gotoPrintText(138, 29, "INPUT BULAN   : ");
        gotoPrintText(138, 31, "INPUT TANGGAL :");
        for(int i = 154; i <= 157; i++)
        {
            gotoPrintASCII(i, 28, 196);
            gotoPrintASCII(i, 30, 196);
            gotoPrintASCII(i, 32, 196);
        }
        inputTahunDicari:
        int totalTransaksi = 0;
        int totalPemasukan = 0;
        gotoxy(154, 27);
        limitIntChar(&tahunDicari, 4);
        if(tahunDicari == 0){
            hideCursor();
            //-----Menghapus layar-----
            setColorBlock(0, 0);
            for (int panjang = 37; panjang <= 167; panjang++){
                for (int lebar = 9; lebar <= 45; lebar++){
                    gotoPrintText(panjang, lebar, " ");
                }
            }
            opsiWaktuLaporan();
            if(strcmpi(mode, "PMM")==0){
                laporanMenuFunction();
            }
            else if(strcmpi(mode, "PMC")==0){
                laporanMerchandiseFunction();
            }
            else if(strcmpi(mode, "PMB")==0){
                laporanMemberFunction();
            }
            else if(strcmpi(mode, "BR")==0){
                laporanBookingFunction();
            }
        }

        inputbulanDicari:
        int found = 0;
        gotoxy(154, 29);
        limitIntChar(&bulanDicari, 2);
        if(bulanDicari == 0){
            setClearArea(154, 29, 2, 1);
            setClearArea(154, 27, 4, 1);
            goto inputTahunDicari;
        }
        if(bulanDicari > 12){
            MessageBox(NULL, "Bulan tidak valid! Silahkan masukkan ulang!", "Bulan Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(152, 29, 2, 1);
            goto inputbulanDicari;
        }

        inputHariDicari:
        gotoxy(154, 31);
        limitIntChar(&haridDicari, 2);
        if(haridDicari == 0){
            setClearArea(154, 29, 2, 1);
            setClearArea(154, 27, 4, 1);
            setClearArea(154, 31, 2, 1);
            goto inputTahunDicari;
        }
        if(haridDicari > 31){
            MessageBox(NULL, "Tanggal tidak valid! Silahkan masukkan ulang!", "Tanggal Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            setClearArea(152, 29, 2, 1);
            goto inputbulanDicari;
        }

        if(strcmpi(mode, "PMM")==0){
            arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "rb");
            while(fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)){
                if(tahunDicari == pmm.tanggal_transaksi.tahun && bulanDicari == pmm.tanggal_transaksi.bulan && haridDicari == pmm.tanggal_transaksi.hari){
                    found = 1;
                    totalPemasukan += pmm.total_harga;
                    totalTransaksi += 1;
                }
            }
            fclose(arsPesananMakandanMinum);
            if(found == 0){
                MessageBox(NULL, "Transaksi tidak ada! Silahkan masukkan ulang!", "Pencarian Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(154, 31, 2, 1);
                setClearArea(154, 29, 2, 1);
                setClearArea(154, 27, 4, 1);
                goto inputTahunDicari;
            }
            arsPesananMakandanMinum = fopen("../Data/Pesanan Makan dan Minum.dat", "rb");
            rewind(arsPesananMakandanMinum);
            int i = 1;
            while(fread(&pmm, sizeof(pmm), 1, arsPesananMakandanMinum)){
                if(tahunDicari == pmm.tanggal_transaksi.tahun && bulanDicari == pmm.tanggal_transaksi.bulan && haridDicari == pmm.tanggal_transaksi.hari){
                    if(i % 25 == 1 && i != 1){
                        getch();
                        for(int j = 45; j <= 81; j++){
                            for(int k = 13; k <= 38; k++){
                                setColorBlock(0, 0);
                                gotoPrintText(j, k, " ");
                            }
                        }
                        i = 1;
                    }
                    if(i % 2 == 1){
                        setColorBlock(0, 6);
                        gotoxy(45, 12+i);
                        printf("PSN-%03d                              ", pmm.id_pesanan);
                        gotoxy(61, 12+i);
                        rupiah(pmm.total_harga);
                    }
                    else if(i % 2 == 0){
                        setColorBlock(0, 14);
                        gotoxy(45, 12+i);
                        printf("PSN-%03d                              ", pmm.id_pesanan);
                        gotoxy(61, 12+i);
                        rupiah(pmm.total_harga);
                    }
                    i++;
                }
            }
        }

        if(strcmpi(mode, "PMC")==0){
            arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "rb");
            rewind(arsPenjualanMerchandise);
            while(fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)){
                if(tahunDicari == pmc.tanggalTransaksi.tahun && bulanDicari == pmc.tanggalTransaksi.bulan && haridDicari == pmc.tanggalTransaksi.hari){
                    found = 1;
                    totalPemasukan += pmc.totalHarga;
                    totalTransaksi += 1;
                }
            }
            fclose(arsPenjualanMerchandise);
            if(found == 0){
                MessageBox(NULL, "Transaksi tidak ada! Silahkan masukkan ulang!", "Pencarian Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(154, 29, 2, 1);
                setClearArea(154, 27, 4, 1);
                setClearArea(154, 31, 2, 1);
                goto inputTahunDicari;
            }

            arsPenjualanMerchandise = fopen("../Data/Penjualan Merchandise.dat", "rb");
            rewind(arsPenjualanMerchandise);
            int i = 1;
            while(fread(&pmc, sizeof(pmc), 1, arsPenjualanMerchandise)){
                if(tahunDicari == pmc.tanggalTransaksi.tahun && bulanDicari == pmc.tanggalTransaksi.bulan && haridDicari == pmc.tanggalTransaksi.hari){
                    if(i % 25 == 1 && i != 1){
                        getch();
                        for(int j = 45; j <= 81; j++){
                            for(int k = 13; k <= 38; k++){
                                setColorBlock(0, 0);
                                gotoPrintText(j, k, " ");
                            }
                        }
                        i = 1;
                    }
                    if(i % 2 == 1){
                        setColorBlock(0, 6);
                        gotoxy(45, 12+i);
                        printf("PBL-%03d                              ", pmc.id_penjualanMerchandise);
                        gotoxy(61, 12+i);
                        rupiah(pmc.totalHarga);
                    }
                    else if(i % 2 == 0){
                        setColorBlock(0, 14);
                        gotoxy(45, 12+i);
                        printf("PBL-%03d                              ", pmc.id_penjualanMerchandise);
                        gotoxy(61, 12+i);
                        rupiah(pmc.totalHarga);
                    }
                    i++;
                }
            }
        }
        if(strcmpi(mode, "PMB")==0){
            arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
            while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
                if(tahunDicari == pmb.tanggalBergabung.tahun && bulanDicari == pmb.tanggalBergabung.bulan && haridDicari == pmb.tanggalBergabung.hari){
                    found = 1;
                    totalPemasukan += pmb.harga;
                    totalTransaksi += 1;
                }
            }
            fclose(arsPendaftaranMember);
            if(found == 0){
                MessageBox(NULL, "Transaksi tidak ada! Silahkan masukkan ulang!", "Pencarian Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(154, 29, 2, 1);
                setClearArea(154, 27, 4, 1);
                setClearArea(154, 31, 2, 1);
                goto inputTahunDicari;
            }
            arsPendaftaranMember = fopen("../Data/Pendaftaran Member.dat", "rb");
            rewind(arsPendaftaranMember);
            int i = 1;
            while(fread(&pmb, sizeof(pmb), 1, arsPendaftaranMember)){
                if(tahunDicari == pmb.tanggalBergabung.tahun && bulanDicari == pmb.tanggalBergabung.bulan && haridDicari == pmb.tanggalBergabung.hari){
                    if(i % 25 == 1 && i != 1){
                        getch();
                        for(int j = 45; j <= 81; j++){
                            for(int k = 13; k <= 38; k++){
                                setColorBlock(0, 0);
                                gotoPrintText(j, k, " ");
                            }
                        }
                        i = 1;
                    }
                    if(i % 2 == 1){
                        setColorBlock(0, 6);
                        gotoxy(45, 12+i);
                        printf("PDF-%03d                              ", pmb.id_pendaftaran);
                        gotoxy(61, 12+i);
                        rupiah(pmb.harga);
                    }
                    else if(i % 2 == 0){
                        setColorBlock(0, 14);
                        gotoxy(45, 12+i);
                        printf("PDF-%03d                              ", pmb.id_pendaftaran);
                        gotoxy(61, 12+i);
                        rupiah(pmb.harga);
                    }
                i++;
                }
            }
        }
        if(strcmpi(mode, "BR")==0){
            arsBookingRuangan = fopen("../Data/Booking Ruangan.dat", "rb");
            while(fread(&br, sizeof(br), 1, arsBookingRuangan)){
                if(tahunDicari == br.tanggal_transaksi.tahun && bulanDicari == br.tanggal_transaksi.bulan && haridDicari == br.tanggal_transaksi.hari){
                    found = 1;
                    totalPemasukan += br.totalHarga;
                    totalTransaksi += 1;
                }
            }
            fclose(arsBookingRuangan);
            if(found == 0){
                MessageBox(NULL, "Transaksi tidak ada! Silahkan masukkan ulang!", "Pencarian Error", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
                setClearArea(154, 29, 2, 1);
                setClearArea(154, 27, 4, 1);
                setClearArea(154, 31, 2, 1);
                goto inputTahunDicari;
            }
            arsBookingRuangan = fopen("../Data/Booking Ruangan.dat", "rb");
            rewind(arsBookingRuangan);
            int i = 1;
            while(fread(&br, sizeof(br), 1, arsBookingRuangan)){
                if(tahunDicari == br.tanggal_transaksi.tahun && bulanDicari == br.tanggal_transaksi.bulan && haridDicari == br.tanggal_transaksi.hari){
                    if(i % 25 == 1 && i != 1){
                        getch();
                        for(int j = 45; j <= 81; j++){
                            for(int k = 13; k <= 38; k++){
                                setColorBlock(0, 0);
                                gotoPrintText(j, k, " ");
                            }
                        }
                        i = 1;
                    }
                    if(i % 2 == 1){
                        setColorBlock(0, 6);
                        gotoxy(45, 12+i);
                        printf("BKG-%03d                              ", br.id_booking);
                        gotoxy(61, 12+i);
                        rupiah(br.totalHarga);
                    }
                    else if(i % 2 == 0){
                        setColorBlock(0, 14);
                        gotoxy(45, 12+i);
                        printf("BKG-%03d                              ", br.id_booking);
                        gotoxy(61, 12+i);
                        rupiah(br.totalHarga);
                    }
                }
                i++;
            }
        }

        setColorBlock(7, 0);

        //Penulisan total pemasukan
        for (int i = 96; i <= 124; i++){
            gotoPrintASCII(i, 18, 196);
            gotoPrintASCII(i, 28, 196);
        }

        for (int i = 18; i <= 27; i++){
            gotoPrintASCII(95, i, 179);
            gotoPrintASCII(125, i, 179);
        }

        gotoPrintText(96, 17, "T O T A L   P E M A S U K A N");
        gotoPrintASCII(95, 18, 218);
        gotoPrintASCII(125, 18, 191);
        gotoPrintASCII(95, 28, 192);
        gotoPrintASCII(125, 28, 217);
        gotoxy(102, 23);
        rupiah(totalPemasukan);
        fflush(stdout);

        //Penulisan total transaksi
        for (int i = 96; i <= 124; i++){
            gotoPrintASCII(i, 32, 196);
            gotoPrintASCII(i, 42, 196);
        }

        for (int i = 33; i <= 41; i++){
            gotoPrintASCII(95, i, 179);
            gotoPrintASCII(125, i, 179);
        }

        gotoPrintText(96, 31, "T O T A L   T R A N S A K S I");
        gotoPrintASCII(95, 32, 218);
        gotoPrintASCII(125, 32, 191);
        gotoPrintASCII(95, 42, 192);
        gotoPrintASCII(125, 42, 217);
        gotoxy(109, 37);
        printf("%d", totalTransaksi);
        fflush(stdout);

        hideCursor();
        getch();
        response = MessageBox(NULL, "Apakah Anda ingin melihat laporan lagi?", "Konfirmasi", MB_YESNO | MB_ICONQUESTION | MB_DEFAULT_DESKTOP_ONLY);
        if(response == IDYES){
            //-----hapus dashboard laporan------
            setColorBlock(0, 0);
            for(int i = 37; i <= 128; i++){
                for(int j = 9; j <= 45; j++){
                    gotoPrintASCII(i, j, 219);
                }
            }
        }
        showCursor();

    }while(response == IDYES);
}

void opsiWaktuLaporan(){
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
    gotoPrintText(98, 19, " H A R I A N");
    gotoPrintText(97, 23, " B U L A N A N");
    gotoPrintText(97, 27, " T A H U N A N");
    gotoPrintText(98, 32, " K E L U A R");
}

void buttonOpsiWaktuLaporanTransition(int optional){
    switch (optional){
    case 1:
        button(94, 18, 20, 2, 0, 6);
        hapusButton(94, 22, 20, 2, 6, 6);
        hapusButton(94, 26, 20, 2, 6, 6);
        hapusButton(94, 31, 20, 2, 6, 6);
        break;
    case 2:
        hapusButton(94, 18, 20, 2, 6, 6);
        button(94, 22, 20, 2, 0, 6);
        hapusButton(94, 26, 20, 2, 6, 6);
        hapusButton(94, 31, 20, 2, 6, 6);
        break;
    case 3:
        hapusButton(94, 18, 20, 2, 6, 6);
        hapusButton(94, 22, 20, 2, 6, 6);
        button(94, 26, 20, 2, 0, 6);
        hapusButton(94, 31, 20, 2, 6, 6);
        break;
    case 4:
        hapusButton(94, 18, 20, 2, 6, 6);
        hapusButton(94, 22, 20, 2, 6, 6);
        hapusButton(94, 26, 20, 2, 6, 6);
        button(94, 31, 20, 2, 0, 6);
        break;
    }
}

void laporanMenuFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 18, 20, 2, 0, 6);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 4){
                optional +=1;
                buttonOpsiWaktuLaporanTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonOpsiWaktuLaporanTransition(optional);
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
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanHarian("PMM");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMenuFunction();
    }
    if(found == 3){
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanBulanan("PMM");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMenuFunction();
    }
    if(found == 4){
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanTahunan("PMM");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMenuFunction();
    }
    if(found == 5){
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
}

void laporanMerchandiseFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 18, 20, 2, 0, 6);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 4){
                optional +=1;
                buttonOpsiWaktuLaporanTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonOpsiWaktuLaporanTransition(optional);
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
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanHarian("PMC");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMenuFunction();
    }
    if(found == 3){
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanBulanan("PMC");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMerchandiseFunction();
    }
    if(found == 4){
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanTahunan("PMC");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMerchandiseFunction();
    }
    if(found == 5){
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
}

void laporanMemberFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 18, 20, 2, 0, 6);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 4){
                optional +=1;
                buttonOpsiWaktuLaporanTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonOpsiWaktuLaporanTransition(optional);
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
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanHarian("PMB");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMenuFunction();
    }
    if(found == 3){
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanBulanan("PMB");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMemberFunction();
    }
    if(found == 4){
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanTahunan("PMB");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMemberFunction();
    }
    if(found == 5){
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
}
void laporanBookingFunction(){
    char ch;
    int found = 1;
    int optional = 1;
    button(94, 18, 20, 2, 0, 6);
    while(found == 1){
        ch = getch();
        switch (ch){
        case DOWN:
            if(optional < 4){
                optional +=1;
                buttonOpsiWaktuLaporanTransition(optional);
            }break;
        case UP:
            if(optional > 1){
                optional -= 1;
                buttonOpsiWaktuLaporanTransition(optional);
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
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanHarian("BR");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanMenuFunction();
    }
    if(found == 3){
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanBulanan("BR");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanBookingFunction();
    }
    if(found == 4){
        //-----Menghapus opsi waktu laporan-----
        setColorBlock(0, 0);
        for (int panjang = 85; panjang <= 124; panjang++){
            for (int lebar = 14; lebar <= 35; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        showCursor();
        laporanTahunan("BR");
        hideCursor();
        getch();
        //-----Menghapus layar-----
        setColorBlock(0, 0);
        for (int panjang = 37; panjang <= 167; panjang++){
            for (int lebar = 9; lebar <= 45; lebar++){
                gotoPrintText(panjang, lebar, " ");
            }
        }
        opsiWaktuLaporan();
        laporanBookingFunction();
    }
    if(found == 5){
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
}