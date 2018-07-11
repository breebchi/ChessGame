#ifndef PAWN_H
#define PAWN_H

#include "piece.h"



class Pawn : public Piece
{
    bool moved;
    bool enPassant;
public:
    Pawn(Color _color, int _x, int _y);
    void generatePossibilities();
    void move(int _x, int _y);
    bool isMoved();
    void setMoved();
    bool isEnPassant();
    void setEnPassant(bool _enPassant);
};

#endif // PAWN_H
