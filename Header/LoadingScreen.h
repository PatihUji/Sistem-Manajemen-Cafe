void loadingDisplay();
void tampilanLoadingScreen();
void loadingAnimation(int duration);

//-----Mengumpulkan semua procedure pada header ini untuk ditampilkan (pengganti int main)-----
void tampilanLoadingScreen(){
    loadingDisplay();
    loadingAnimation(18);
    getch();
    setClearArea(5, 3, 162, 43);
    tampilanLoginScreen();
}

//-----Layar yang tampil pada loading screen------
void loadingDisplay(){

    //Gambar Cup Coffee
    printPicture(2, 9, "../Picture/Coffee Cup.txt");

    //Gambar text Cafe Alfarani
    printPicture(55, 9, "../Picture/Cafe Alfarani Text.txt");

    //Gambar Dessert kanan atas
    printPicture(115, 3, "../Picture/Cake 1 - Pojok kanan atas.txt");

    //Gambar Dessert kanan bawah
    printPicture(115, 19, "../Picture/Cake 1 - Pojok kanan bawah.txt");

    //Border pojok kiri atas
    gotoPrintASCII(3, 2, 201);

    //Border kiri
    for (int i = 3; i <= 45; i++){
        gotoPrintASCII(3, i, 186);
    }

    //Border pojok kiri bawah
    gotoPrintASCII(3, 46, 200);

    //Border atas
    for(int i = 4; i <= 166; i++){
        gotoPrintASCII(i, 2, 205);
    }

    //Border pojok kanan atas
    gotoPrintASCII(167, 2, 187);

    //Border kanan
    for (int i = 3; i <= 45; i++){
        gotoPrintASCII(167, i, 186);
    }

    //Border pojok kanan bawah
    gotoPrintASCII(167, 46, 188);

    //Border bawah
    for(int i = 4; i <= 166; i++){
        gotoPrintASCII(i, 46, 205);
    }

    //Border siku kiri atas
    setColorBlock(0, 6);
    gotoPrintASCII(5, 3, 201);
    for (int i = 4; i <= 5; i++){
        gotoPrintASCII(5, i, 186);
    }
    for(int i = 6; i <= 10; i++){
        gotoPrintASCII(i, 3, 205);
    }

    //Border siku kiri bawah
    gotoPrintASCII(5, 45, 200);
    for (int i = 44; i <= 44 && i >= 43; i--){
        gotoPrintASCII(5, i, 186);
    }
    for(int i = 6; i <= 10; i++){
        gotoPrintASCII(i, 45, 205);
    }

    //Border siku kanan bawah
    gotoPrintASCII(165, 45, 188);
    for (int i = 44; i <= 44 && i >= 43; i--){
        gotoPrintASCII(165, i, 186);
    }
    for(int i = 164; i <= 164 && i >= 160; i--){
        gotoPrintASCII(i, 45, 205);
    }

    //Border siku kanan atas
    gotoPrintASCII(165, 3, 187);
    for (int i = 4; i <= 5; i++){
        gotoPrintASCII(165, i, 186);
    }
    for(int i = 164; i <= 164 && i >= 160; i--){
        gotoPrintASCII(i, 3, 205);
    }
}

//-----Animasi loading yang muncul setelah program dijalankan-----
void loadingAnimation(int duration){
    //-----Loading Box-----
    setColorBlock(6, 0);

    //Frame Box pojok kiri atas
    gotoPrintASCII(68, 31, 201);

    //Frame Box atas
    for(int i = 69; i <= 100; i++){
        gotoPrintASCII(i, 31, 205);
    }

    //Frame Box pojok kanan atas
    gotoPrintASCII(101, 31, 187);

    //Frame Box pojok kanan bawah
    gotoPrintASCII(101, 33, 188);

    //Frame Box bawah
    for(int i = 69; i <= 100; i++){
        gotoPrintASCII(i, 33, 205);
    }

    //Frame Box pojok kiri bawah
    gotoPrintASCII(68, 33, 200);

    //Frame Box kiri
    gotoPrintASCII(68, 32, 186);

    //Frame Box kanan
    gotoPrintASCII(101, 32, 186);

    setColorBlock(0, 6);
    gotoPrintText(77, 29, "L O A D I N G . . .");

    //-----Animasi loading-----
    setColorBlock(7, 0);
    for(int i = 69; i <= 100; i++){
        gotoPrintASCII(i, 32, 219);
        Sleep(duration);
    }

    //-----Hapus teks Loading-----
    setClearArea(77, 30, 20, 1);
    setColorBlock(0, 6);
    gotoPrintText(65, 29, "> > Tekan apa saja untuk melanjutkan < <");
}