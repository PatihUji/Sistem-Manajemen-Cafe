void userpass(char username[], char password[]);
void loginUsername(char username[]);
void loginPassword(char password[]);
void validasiAkun(char username[], char password[]);
void loginDisplay();
void buttonLoginTransition(int optional);
void loginArrowFunction();
void loginBox();

//-----Mengumpulkan semua procedure pada header ini untuk ditampilkan (pengganti int main)-----
void tampilanLoginScreen(){
    system("color 06");
    loginDisplay();
    loginBox();
    userpass(username, password);
    fflush(stdout);
}

//-----Tampilan yang muncul saat memasuki menu login-----
void loginDisplay(){

    //Memberikan warna pattern
    setColorBlock(6, 0);
    printPicture(62, 7, "../Picture/Puzzle Pattern - kiri atas.txt");
    printPicture(62, 24, "../Picture/Puzzle Pattern - kiri tengah.txt");
    printPicture(62, 38, "../Picture/Puzzle Pattern - kiri bawah.txt");
    printPicture(15, 7, "../Picture/Puzzle Pattern - kiri atas.txt");
    printPicture(15, 24, "../Picture/Puzzle Pattern - kiri tengah.txt");
    printPicture(15, 38, "../Picture/Puzzle Pattern - kiri bawah.txt");
    printPicture(153, 7, "../Picture/Puzzle Pattern - kanan atas.txt");
    printPicture(153, 24, "../Picture/Puzzle Pattern - kanan tengah.txt");
    printPicture(153, 38, "../Picture/Puzzle Pattern - kanan bawah.txt");

    //Memberikan warna picture
    setColorBlock(6,0);
    printPicture(90, 7, "../Picture/Coffee Machine.txt");

    //Memberikan warna border
    setColorBlock(7, 0);

    //Border pojok kiri atas
    gotoPrintASCII(5, 3, 201);

    //Border kiri
    for (int i = 4; i <= 44; i++){
        gotoPrintASCII(5, i, 186);
    }

    //Border atas
    for(int i = 6; i <= 164; i++){
        gotoPrintASCII(i, 3, 205);
    }

    //Border pojok kiri bawah
    gotoPrintASCII(5, 45, 200);

    //Border bawah
    for(int i = 6; i <= 164; i++){
        gotoPrintASCII(i, 45, 205);
    }

    //Border pojok kanan bawah
    gotoPrintASCII(165, 45, 188);

    //Border kanan
    for (int i = 4; i <= 44; i++){
        gotoPrintASCII(165, i, 186);
    }

    //Border pojok kanan atas
    gotoPrintASCII(165, 3, 187);
}

//-----Menampilkan username & password untuk diinput-----
void userpass(char username[], char password[]){
    gotoPrintText(37, 16, "U S E R N A M E");
    textBox(36, 17, 0, 6);
    gotoPrintText(37, 21, "P A S S W O R D");
    textBox(36, 22, 0, 6);

    gotoPrintText(40, 27, "K E L U A R");
    gotoPrintText(61, 27, "M A S U K");
    showCursor();
    gotoxy(37, 18);
    loginUsername(username);
    gotoxy(37, 23);
    loginPassword(password);
    hideCursor();
    loginArrowFunction();
    validasiAkun(username, password);
}

//-----Membuat tampilan box kecil pada menu login-----
void loginBox(){
    //-----Memberikan warna fill box kuning-----
    setColorBlock(0, 6);
    for (int panjang = 25; panjang <= 83; panjang++){
        for (int lebar = 10; lebar <= 31; lebar++){
            gotoPrintText(panjang, lebar, " ");
        }
    }

    //-----Memberikan warna box-outline putih-----
    //Mewarnai outline bagian atas
    setColorBlock(0, 7);
    for (int panjang = 24; panjang <= 81; panjang++){
        gotoPrintText(panjang, 9, " ");
    }

    //Mewarnai aoutline bagian kiri
    for (int tinggi = 9; tinggi <= 30; tinggi++){
        for (int panjang = 23; panjang <= 24; panjang++){
            gotoPrintText(panjang, tinggi, " ");
        }
    }

    //-----Memberikan warna hitam pembatas pada box
     setColorBlock(0, 6);
     for (int panjang = 25; panjang <= 83; panjang++){
         gotoPrintASCII(panjang, 10, 223);
     }
    for (int panjang = 25; panjang <= 83; panjang++){
        gotoPrintASCII(panjang, 12, 220);
    }
    for (int tinggi = 10; tinggi <= 31; tinggi++){
        gotoPrintASCII(25, tinggi, 219);
    }

    gotoPrintText(51, 11, "L O G I N");
}

//-----Fungsi pemberi dan penghapus frame tombol-----
void buttonLoginTransition(int optional){
    switch (optional){
        case 1:
            button(58, 26, 14, 2, 0, 6);
            hapusButton(38, 26, 14, 2, 6, 6);
        break;
        case 2:
            hapusButton(58, 26, 14, 2, 6, 6);
            button(38, 26, 14, 2, 0, 6);
        break;
    }
}

//-----Fungsi tombol-----
void loginArrowFunction()
{
    char ch;
    int found = 1;
    int optional = 1;
    button(58, 26, 14, 2, 0, 6);
    while(found){
        ch = getch();
        switch (ch){
            case LEFT:
                if(optional == 1){
                    optional = 2;
                    buttonLoginTransition(optional);
                }break;
            case RIGHT:
                if(optional == 2){
                    optional = 1;
                    buttonLoginTransition(optional);
                }break;
            case ENTER:
                if(optional == 2){
                    exit(0);
                }
                else{
                    found = 0;
                    break;
                }
        }
    }
}

//-----Memngecek apakah akun yang dimasukkan sesuai dengan yang telah dibuat atau tidak-----
void validasiAkun(char username[], char password[]){
    int yes = 0;
    arsPegawai = fopen("../Data/Pegawai.dat", "rb");
    while(fread(&p, sizeof(p), 1, arsPegawai)){
        if(strcmp(username, p.username)==0 && strcmp(password, p.password)==0 && p.id_role == 1){
            yes = 1;
            break;
        }
        else if(strcmp(username, p.username)==0 && strcmp(password, p.password)==0 && p.id_role == 2){
            yes = 2;
            break;
        }
    }
    fclose(arsPegawai);

        if(strcmp(username, "owner") == 0 && strcmp(password, "owner")==0){
            system("cls");
            dashboardOwnerDisplay();
        }
        if(yes == 1){
            system("cls");
            dashboardAdminDisplay();
        }
        if(yes == 2){
            system("cls");
            dashboardKasirDisplay();
        }
        else{
            MessageBox(NULL, "Username / Password tidak valid", "Akun Salah", MB_OK | MB_ICONERROR | MB_DEFAULT_DESKTOP_ONLY);
            tampilanLoginScreen();
        }
}