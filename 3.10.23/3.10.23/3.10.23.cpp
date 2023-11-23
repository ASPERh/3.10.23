
//void SetCursor(int x, int y, Colors color, string text)
//{
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD pos;
//    pos.X = x;
//    pos.Y = y;
//    SetConsoleCursorPosition(h, pos);
//    SetConsoleTextAttribute(h, color);
//    cout << text;
//    cout << "\n";
//}

//void SetCursor(int x, int y) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD pos;
//    pos.X = x;
//    pos.Y = y;
//    SetConsoleCursorPosition(h, pos);
//}

//void SetCursor(int x, int y, Colors color, string text) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD pos;
//    pos.X = x;
//    pos.Y = y;
//    SetConsoleCursorPosition(h, pos);
//    SetConsoleTextAttribute(h, color);
//    cout << text;
//    cout << "\n";
//}

//void SetCursor(string text) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
//    cout << text;
//    cout << "\n";
//}