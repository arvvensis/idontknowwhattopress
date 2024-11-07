#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

//игрок
class Player {
public:
    int x, y;
    char sprite;

    Player(int x, int y, char sprite) {
        this->x = x;
        this->y = y;
        this->sprite = sprite;
    }
};

//перемещение
void updatePlayerPosition(Player &player, int moveX) {
    player.x += moveX;
}

//отображение на экране
void drawPlayer(Player &player) {
    sf::Sprite playerSprite(player.sprite);
    playerSprite.setPosition(player.x, player.y);
    SOMETHING.draw(playerSprite); //здесь картиночка
}

int main() {
    Player player(0, 0, 'P');

    while (true) {
        
        //управление кнопками а д
        if (getchar() == 'a') {
            updatePlayerPosition(player, -5);
        } else if (getchar() == 'd') {
            updatePlayerPosition(player, 5);
        }
        drawPlayer(player);

        cout << "игрок тут: " << player.x << ", " << player.y << endl;
        sleep(1000);
    }
    return 0;
}