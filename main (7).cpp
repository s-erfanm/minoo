#include <iostream>
using namespace std;

void draw_circle() {
  cout << "     ***     \n";
  cout << "   *     *   \n";
  cout << "  *       *  \n";
  cout << "  *       *  \n";
  cout << "   *     *   \n";
  cout << "     ***     \n";
}

void draw_triangle() {
  cout << "      /\\      \n";
  cout << "     /  \\     \n";
  cout << "    /    \\    \n";
  cout << "   /______\\   \n";
}

void draw_rectangle() {
  cout << "  ___________ \n";
  cout << " |           |\n";
  cout << " |           |\n";
  cout << " |           |\n";
  cout << " |           |\n";
  cout << " |___________|\n";
}

int main() {
  draw_circle();
  draw_triangle();
  draw_rectangle();
  cout<<"\n.\n.\n";
  draw_triangle();
  draw_circle();
  draw_rectangle();
  return 0;
}
