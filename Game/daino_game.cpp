#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <algorithm> //  include the algorithm library

using namespace std;

bool gameOver;
const int width = 20;
const int height = 10;
int dinoPosY, score;
vector<int> obstacles;
const int obstacleSpeed = 1;

void Setup() {
    gameOver = false;
    dinoPosY = height / 2;
    score = 0;
    obstacles.push_back(width - 1);
}

void Draw() {
    system("cls"); // Clear console

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#"; // Left wall
            if (i == dinoPosY && j == 1)
                cout << "D"; // Dino
            else if (find(obstacles.begin(), obstacles.end(), j) != obstacles.end() && i == height - 1)
                cout << "X"; // Obstacle
            else
                cout << " ";
            if (j == width - 1)
                cout << "#"; // Right wall
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case ' ':
            dinoPosY = (dinoPosY == height / 2) ? height / 2 - 1 : height / 2; // Jump logic
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic() {
    for (int &obstacle : obstacles) {
        obstacle -= obstacleSpeed;
        if (obstacle < 0) {
            obstacle = width - 1;
            score++;
        }
        if (obstacle == 1 && dinoPosY == height - 1)
            gameOver = true;
    }
    if (obstacles.back() < width / 2) {
        obstacles.push_back(width - 1);
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // Sleep for 100ms
    }
    cout << "Game Over!" << endl;
    cout << "Final Score: " << score << endl;
    return 0;
}
