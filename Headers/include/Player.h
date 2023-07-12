#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    int x, y, lastx, lasty;
    Player();
    void CallInput();
    void ResetToSafePosition();

protected:
private:
};
#endif