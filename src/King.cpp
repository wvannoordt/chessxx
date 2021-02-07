#include "King.h"

namespace chessxx
{
    King::King(int team_in) : ChessPiece(team_in, 10, "king")
    {
        isKing = true;
    }
    
    King::~King(void)
    {
        
    }
}