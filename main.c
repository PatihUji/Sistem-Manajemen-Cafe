#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <unistd.h>
#include <time.h>

typedef char string[MAXCHAR];
#define ESC 27
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 32
#define TAB 9
#define ENTER 13
#define BACKSPACE 8

#include "Header/lib.h"
#include "Header/Struct.h"
#include "Header/Master/Master_Pegawai.h"
#include "Header/Master/Master_Role.h"
#include "Header/Master/Master_JenisMenu.h"
#include "Header/Master/Master_Diskon.h"
#include "Header/Master/Master_Merchandise.h"
#include "Header/Master/Master_Menu.h"
#include "Header/Master/Master_PaketMenu.h"
#include "Header/Master/Master_Ruangan.h"
#include "Header/LaporanTransaksi.h"
#include "Header/Transaksi/PendaftaranMember.h"
#include "Header/Transaksi/PenjualanMerchandise.h"
#include "Header/Transaksi/BookingRuangan.h"
#include "Header/Transaksi/PesananMakanandanMinuman.h"
#include "Header/KasirMenu.h"
#include "Header/AdminMenu.h"
#include "Header/OwnerMenu.h"
#include "Header/LoginScreen.h"
#include "Header/LoadingScreen.h"

int main(){
    hideCursor();
    disableScrollBar();
    fullscreen();
    system("color 60");
    tampilanLoadingScreen();
}