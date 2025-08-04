cmake_minimum_required(VERSION 3.29)
project(PRG_1 C)

set(CMAKE_C_STANDARD 23)

add_executable(PRG_1 main.c
        Header/LoadingScreen.h
        Header/lib.h
        Header/LoginScreen.h
        Header/OwnerMenu.h
        Header/AdminMenu.h
        Header/Struct.h
        Header/Master/Master_Pegawai.h
        Header/Master/Master_Role.h
        Header/Master/Master_JenisMenu.h
        Header/Master/Master_Menu.h
        Header/Master/Master_Diskon.h
        Header/Master/Master_Merchandise.h
        Header/Master/Master_PaketMenu.h
        Header/Master/Master_Ruangan.h
        Header/KasirMenu.h
        Header/Transaksi/PendaftaranMember.h
        Header/Transaksi/PenjualanMerchandise.h
        Header/Transaksi/BookingRuangan.h
        Header/LaporanTransaksi.h
        Header/Transaksi/PesananMakanandanMinuman.h)
