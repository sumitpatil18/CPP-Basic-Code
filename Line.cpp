#include <graphics.h>
#include <conio.h> // For getch()

int main() {
    int gd = DETECT, gm; // gd: graphics driver, gm: graphics mode

    // Initialize graphics mode
    // The third argument is the path to the BGI directory (e.g., "C:\\TC\\BGI")
    initgraph(&gd, &gm, "C:\\TC\\BGI"); 

    // Draw a line from (x1, y1) to (x2, y2)
    // Example: Drawing a line from (100, 100) to (200, 200)
    line(100, 100, 200, 200);

    getch(); // Wait for a key press before closing the graphics window

    closegraph(); // Close the graphics mode

    return 0;
}
