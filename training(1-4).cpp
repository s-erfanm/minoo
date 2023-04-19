#include <iostream>
using namespace std;
int main() {
    int game_sec;
    cout << "Enter the number of seconds game time : ";
    cin >> game_sec;

    int hours = game_sec / 3600;
    int minutes = (game_sec % 3600) / 60;
    int seconds = game_sec % 60;

    cout << game_sec << "\n seconds is equivalent to " << hours << ":" << minutes << ":" << seconds;

  return 0;
}
