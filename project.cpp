#include <ncurses.h>
#include <windows.h>

// Fungsi animasi teks 
void print_slow(int y, int x, const char* text) {
    move(y, x);
    for (int i = 0; text[i] != '\0'; i++) {
        addch(text[i]);
        refresh();
        Sleep(50); // kecepatan animasi
    }
}

int main() {
    initscr();     // mulai ncurses
    noecho();      // tidak menampilkan input user
    clear();

    print_slow(2, 5, "Welcome to the Text Animation Demo!");
    print_slow(4, 5, "Loading...");
    print_slow(6, 5, "Please wait...");

    getch();       // menunggu  user menekan tombol
    endwin();      // keluar ncurses
    return 0;
}
