typedef int money;
string username;
string password;

//-----Tanggal-----
typedef struct date{    int hari;
                        int bulan;
                        int tahun;
}date;

//-----jam-----
typedef struct waktu{   int jam;
                        float menit;
}waktu;

//-----Table Master Pegawai-----
typedef struct pegawai{ int id_pegawai;
                        int id_role;
                        char nama[18];
                        char username[12];
                        char password[12];
                        date tanggal_lahir;
}pegawai;
pegawai p;
FILE *arsPegawai;
FILE *temp;

//-----Table Master Role-----
typedef struct role{    int id_role;
                        char nama_role[18];
                        money gaji;
}role;
role r;
FILE *arsRole;

//-----Table Master Jenis Menu-----
typedef struct jenisMenu{   int id_jenisMenu;
                            char nama_jenisMenu[15];
} JenisMenu;
JenisMenu jm;
FILE *arsJenisMenu;

//-----Table Master Menu-----
typedef struct menu{    int id_menu;
                        char nama_menu[18];
                        money hargaMenu;
                        int id_jenisMenu;
}menu;
menu m;
FILE *arsMenu;

//-----Table Master diskon-----
typedef struct diskon{  int id_diskon;
                        char nama_diskon[18];
                        float besar_diskon;
                        date tanggal_mulai;
                        date tanggal_akhir;
}diskon;
diskon d;
FILE *arsDiskon;

//-----Table Master merchandise-----
typedef struct merchandise{ int id_merchandise;
                            char nama_merchandise[15];
                            money harga;
                            int stock;
}merchandise;
merchandise mc;
FILE *arsMerchandise;

//-----Table Master paket menu-----
typedef struct pktMenu{ int id_paket;
                        char nama_paket[18];
                        money harga;
                        int id_menu[5];
}pktMenu;
pktMenu pm;
FILE *arsPktMenu;

//-----Table Master ruangan-----
typedef struct ruangan{ int id_ruangan;
                        char nama_ruangan[18];
                        money harga_per_jam;
                        int kapasitas_ruangan;
}ruangan;
ruangan rg;
FILE *arsRuangan;

//-----Table Transaksi Penjualan Merchandise-----
typedef struct PenjualanMerchandise{    int id_penjualanMerchandise;
                                        int jumlah[999];
                                        money totalHarga;
                                        date tanggalTransaksi;
                                        char nama_kasir[18];
                                        int id_merchandise[999];
                                        char nama_merchandise[15][999];
                                        int id_pendaftaran;
                                        int jumlah_item;
}penjualanMerchandise;
penjualanMerchandise pmc;
FILE *arsPenjualanMerchandise;

//-----Table Transaksi Pendaftaran Member-----
typedef struct pendaftaranMember{   int id_pendaftaran;
                                    char no_telpon[15];
                                    money harga;
                                    date tanggalBergabung;
                                    char nama_kasir[18];
}pendaftaranMember;
pendaftaranMember pmb;
FILE *arsPendaftaranMember;

//-----Table Transaksi Pendaftaran Member-----
typedef struct BookingRuangan  {    int id_booking;
                                    int id_ruangan;
                                    char nama_kasir[18];
                                    money totalHarga;
                                    char nama_pelanggan [18];
                                    date tanggal_booking;
                                    date tanggal_transaksi;
                                    waktu waktu_mulai;
                                    waktu waktu_akhir;
                                    char nama_ruangan[18];
                                    int id_pendaftaran;
}BookingRuangan;
BookingRuangan br;
FILE* arsBookingRuangan;

//-----Table Transaksi Pesanan Makan dan Minum-----
typedef struct {
    int id_pesanan;
    char nama_pelanggan[18];
    int id_menu[999];
    char nama_menu[15][999];
    int id_paket[999];
    char nama_paket[15][999];
    int jumlah[999];
    int jumlah_item;
    money total_harga;
    date tanggal_transaksi;
    int id_pegawai;
    char nama_kasir[18];
    int id_pendaftaran;
    int id_booking;
}trs_pesanan_makan_minum;
trs_pesanan_makan_minum pmm;
FILE *arsPesananMakandanMinum;