//-----Mengatur tata letak-----
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//-----Memberikan tampilan layar penuh-----
void fullscreen(){
    keybd_event(VK_MENU,0x39,0,0);
    keybd_event(VK_RETURN,0x1c,0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x39,KEYEVENTF_KEYUP,0);

    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
}

//-----Mengatur tata letak text-----
void gotoPrintText(int x, int y, string text){
    gotoxy(x, y);
    printf("%s",text);
}

//-----Mengatur tata letak ASCII-----
void gotoPrintASCII(int x, int y, int code){
    gotoxy(x,y);
    printf("%c",code);
}

//-----Mengatur tata letak gambar-----
void printPicture(int x, int y, string file){
    FILE *fp;
    char gambar[MAXCHAR];

    fp = fopen(file,"r");

    if(fp == NULL){
        printf("File Not Found\n");
    }

    while(fgets(gambar, MAXCHAR, fp) != NULL){
        gotoxy(x,y++);
        printf("%s",gambar);
    }
    fclose(fp);
}

//-----Memberikan warna pada karakter-----
void setColorBlock(int foreground, int background){
    int color = foreground + (background << 4);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

//-----Menyembunyikan Kursor-----
void hideCursor(){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

//-----Menampilkan kursor-----
void showCursor(){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = TRUE;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

//-----Men-non aktifkan scroll bar-----
void disableScrollBar(){
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    // Mendapatkan informasi tentang jendela console
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hOut, &csbi);

    // Menyusun atribut baru untuk mengunci scrollbar
    csbi.dwSize.Y = csbi.dwMaximumWindowSize.Y;

    // Menyetel ukuran jendela console
    SetConsoleScreenBufferSize(hOut, csbi.dwSize);

    // Menonaktifkan scrollbar
    SetConsoleMode(hOut, ENABLE_EXTENDED_FLAGS);
}

//-----Menghapus area tertentu-----
void setClearArea(int x, int y, int panjang, int lebar) {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD topLeft = {(SHORT) x, (SHORT) y};
    DWORD written;

    for (int row = 0; row < lebar; ++row) {
        FillConsoleOutputCharacterA(console, ' ', panjang, topLeft, &written);
        topLeft.Y++;
    }
}

//------Text Box Instan-----
void textBox(int x, int y, int foreground, int background){
    //-----Memberikan warna pada border-----
    setColorBlock(foreground, background);

    //-----Border kiri atas-----
    gotoPrintASCII(x, y, 201);

    //-----Border atas-----
    for (int i = x+1; i < x + 38; i++){
        gotoPrintASCII(i, y, 205);
    }

    //-----Border kanan atas-----
    gotoPrintASCII(x+38, y, 187);

    //-----Border bawah-----
    for (int i = x+1; i < x + 38; i++){
        gotoPrintASCII(i, y+2, 205);
    }

    //-----Border kanan bawah-----
    gotoPrintASCII(x+38, y+2, 188);

    //-----Border kiri bawah-----
    gotoPrintASCII(x, y+2, 200);

    //-----Border kiri-----
    gotoPrintASCII(x, y+1, 186);

    //-----Border kanan-----
    gotoPrintASCII(x+38, y+1, 186);
}

//-----Menampilkan tanggal secara realtime-----
void Tanggal(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char *wday[] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};


    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    gotoxy(145,4);printf("Waktu Masuk : %02d:%02d:%02d\n",timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);


    gotoxy(145, 5); printf("%s, %02d-%02d-%d", wday[tm.tm_wday],tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);
}

void rupiah(int money){
    if(money < 1000){
        printf("Rp%d,00", money);
    }
    else if(money < 1000000){
        printf("Rp%d.%03d,00", money/1000, money % 1000);
    }
    else if(money < 1000000000){
        printf("Rp%d.%03d.%03d,00", money/1000000, (money % 1000000)/1000, money % 1000);
    }
    else{
        printf("Rp%d.%03d.%03d.%03d,00", money/1000000000, (money % 1000000000)/1000,(money % 1000000)/1000, money % 1000);
    }
}

//-----Membuat frame button-----
void button(int x, int y, int panjang, int lebar, int foreground, int background){
    setColorBlock(foreground, background);
    //Frame kiri atas
    gotoPrintASCII(x, y, 201);

    //Frame kiri bawah
    gotoPrintASCII(x, y+lebar, 200);

    //Frame kanan atas
    gotoPrintASCII(x+panjang, y, 187);

    //Frame kanan bawah
    gotoPrintASCII(x+panjang, y+lebar, 188);
}

//-----Menghapus frame button-----
void hapusButton(int x, int y, int panjang, int lebar, int foreground, int background){
    setColorBlock(foreground, background);
    //Frame kiri atas
    gotoPrintASCII(x, y, 201);

    //Frame kiri bawah
    gotoPrintASCII(x, y+lebar, 200);

    //Frame kanan atas
    gotoPrintASCII(x+panjang, y, 187);

    //Frame kanan bawah
    gotoPrintASCII(x+panjang, y+lebar, 188);
}

//-----Input username beserta validasinya-----
void loginUsername(char username[]){
    fflush(stdin);
    int i = 0;
    char ch;
    while (1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if (ch == BACKSPACE){
            if (i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if (ch == ENTER){
            break;
        }
        else if (i < 12 && ch != SPACE && ch != TAB && (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')){
            username[i] = ch;
            printf("%c", username[i]);
            i++;
        }
    }
    username[i] = '\0';
}

//-----Input password beserta validasinya-----
void loginPassword(char password[]){
    fflush(stdin);
    int i = 0;
    char ch;
    while(1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if(ch == BACKSPACE){
            if(i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if(ch == ENTER){
            break;
        }
        else if(i < 12 && ch != SPACE && ch != TAB ){
            password[i] = ch;
            printf("*");
            i++;
        }
    }
    password[i] = '\0';
    // printf("%s", password);
}

limitDateChar(int *date, int maxChar){
    fflush(stdin);
    char dateChar[maxChar];
    int i = 0;
    char ch;
    while (1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if (ch == BACKSPACE){
            if (i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if (ch == ENTER){
            break;
        }
        else if (i < maxChar && ch != SPACE && ch != TAB && ch >= '0' && ch <= '9'){
            dateChar[i] = ch;
            printf("%c", dateChar[i]);
            i++;
        }
    }
    dateChar[i] = '\0';
    //konversi dari tipe data string menjadi tipe data integer
    *date = atoi(dateChar);
}

//-----Membatasi karakter integer yang dapat diinput-----
void limitIntChar(int *integer, int maxChar){
    fflush(stdin);
    char intChar[maxChar];
    int i = 0;
    char ch;
    while (1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if (ch == BACKSPACE){
            if (i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if (ch == ENTER){
            if(i > 0){
                break;
            }
        }
        else if (i < maxChar && ch != SPACE && ch != TAB && ch >= '0' && ch <= '9'){
            intChar[i] = ch;
            printf("%c", intChar[i]);
            i++;
        }
    }
    intChar[i] = '\0';
    //konversi dari tipe data string menjadi tipe data integer
    *integer = atoi(intChar);
}

//-----Membatasi karakter string yang dapat diinput-----
void limitStrChar(char str[], int maxChar){
    fflush(stdin);
    int i = 0;
    char ch;
    while (1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if (ch == BACKSPACE){
            if (i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if (ch == ENTER){
            if(i > 0){
                break;
            }
        }
        else if (i < maxChar && ch != TAB && (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') || (ch == SPACE && i >0 && i < maxChar)){
            str[i] = ch;
            printf("%c", str[i]);
            i++;
        }
    }
    str[i] = '\0';
}

//-----Memiliki fungsi yang sama dengan limitIntChar tetapi menampilkan dalam bentuk rupiah-----
void limitMoneyChar(int *nilai, int min, int max, int x, int y)
{
    char input[225];
    char inpkey;
    int i, n, m;
    n = 0;

    gotoxy(x, y);
    showCursor();
    do
    {
        inpkey = getch();
        if(inpkey == '\b' && n != 0)
        {
            n--;
            input[n] = '\0';

            m = n % 3;
            if((n - m) % 3 == 0 || n == m){
                printf("\b \b");
                printf("\b \b");
            }else{
                printf("\b \b");
            }
            gotoxy(x,y);
            for(i = 0; i < n; i++){
                if((i + 1) == m || (i + 1 - m) % 3 == 0){
                    printf("%c", input[i]);
                    if(i != (n - 1)){
                        printf(".");
                    }
                }else {
                    printf("%c", input[i]);
                }
            }
        }else if (isprint(inpkey)){
            if(n == max){
                continue;
            }else {
                if (isdigit(inpkey)){
                    gotoxy(x,y);
                    input[n]=inpkey;
                    n++;
                    m = n % 3;
                    for(i = 0; i < n; i++){
                        if((i+1) == m || (i+1-m) % 3 == 0){
                            printf("%c", input[i]);
                            if(i != (n-1)){
                                printf(".");
                            }
                        }else {
                            printf("%c", input[i]);
                        }
                    }
                }
                else printf("\a");
            }
        }
        else if(inpkey == 13)
        {
            if(n < min){
                printf("\a");
                inpkey = 0;
            }
            else input[n]='\0';
        }
    }
    while(inpkey != 13);

    *nilai = atoi(input);
}

//-----Membatasi karakter integer yang dapat diinput-----
void limitFloatChar(float *variabel, int maxChar){
    fflush(stdin);
    char floatChar[maxChar];
    int i = 0;
    char ch;
    while (1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if (ch == BACKSPACE){
            if (i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if (ch == ENTER){
            if(i > 0){
                break;
            }
        }
        else if (i < maxChar && ch != SPACE && ch != TAB && ch >= '0' && ch <= '9'){
            floatChar[i] = ch;
            printf("%c", floatChar[i]);
            i++;
        }
    }
    floatChar[i] = '\0';
    //konversi dari tipe data string menjadi tipe data integer
    *variabel = atof(floatChar);
}

boolean kabisat(int tahun){
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)){
        return true;
    }
    else
    {
        return false;
    }
}

void hariIni(int *hari){
    time_t now;
    time(&now);

    struct tm *local = localtime(&now);
    *hari = local->tm_mday;
    printf("%02d", *hari);
}

void bulanIni(int *bulan){
    time_t now;
    time(&now);

    struct tm *local = localtime(&now);
    *bulan = local->tm_mon + 1;
    printf("%02d", *bulan);
}

void tahunIni(int *tahun){
    time_t now;
    time(&now);

    struct tm *local = localtime(&now);
    *tahun = local->tm_year + 1900;
    printf("%d", *tahun);
}

//-----Membatasi karakter string angka yang dapat diinput-----
void limitPhoneChar(char str[], int maxChar){
    fflush(stdin);
    int i = 0;
    char ch;
    while (1){
        ch = getch();
        if (ch == -32 || ch == 224) {
            getch();
            continue;
        }
        if (ch == BACKSPACE){
            if (i > 0){
                printf("\b \b");
                i--;
            }
        }
        else if (ch == ENTER){
            if(i > 0){
                break;
            }
        }
        else if (i < maxChar && ch != TAB && (ch >= '0' && ch <= '9')){
            str[i] = ch;
            printf("%c", str[i]);
            i++;
        }
    }
    str[i] = '\0';
}