#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
    const int w = 10;
    const int h = 10;
    int arr[h][w];

    time_t seconds = std::time(NULL);
    tm* timeinfo = std::localtime(&seconds);

    int today = timeinfo->tm_mday;

    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            arr[y][x] = x + y;
            std::cout << arr[y][x] << "\t";
        }
        std::cout << "\n";
    }

    for(int y = 0; y < h; y++) {
        if(y == (today % h)) {
            int sum = 0;
            for(int x = 0; x < w; x++) {
                sum += arr[y][x];
            }
            std::cout << "Row: " << y << " - " << sum << "\n";
        }
    }
}

