#include "king.h"

King::King(Color _color, int _x, int _y):Piece(_color, _x, _y)
{
    moved=false;
}

bool King::generatePossibilities()
{

}

void King::move(int _x, int _y)
{

}

bool King::isMoved()
{
    return moved;
}

void King::setMoved()
{
    moved = true;
}

bool King::isInCheck()
{
    bool inCheck = false;

}
