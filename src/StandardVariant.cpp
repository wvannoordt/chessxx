#include "StandardVariant.h"
#include "Screen.h"

namespace chessxx
{
    StandardVariant::StandardVariant(void)
    {
        board = new Board(8, 8);
        board->Piece(0,0) = new Rook  (ChessTeam::White);
        board->Piece(1,0) = new Knight(ChessTeam::White);
        board->Piece(2,0) = new Bishop(ChessTeam::White);
        board->Piece(3,0) = new Queen (ChessTeam::White);
        board->Piece(4,0) = new King  (ChessTeam::White);
        board->Piece(5,0) = new Bishop(ChessTeam::White);
        board->Piece(6,0) = new Knight(ChessTeam::White);
        board->Piece(7,0) = new Rook  (ChessTeam::White);
        for (int i = 0; i < 8; i++) board->Piece(i,1) = new Pawn(ChessTeam::White);
        
        board->Piece(0,7) = new Rook  (ChessTeam::Black);
        board->Piece(1,7) = new Knight(ChessTeam::Black);
        board->Piece(2,7) = new Bishop(ChessTeam::Black);
        board->Piece(3,7) = new Queen (ChessTeam::Black);
        board->Piece(4,7) = new King  (ChessTeam::Black);
        board->Piece(5,7) = new Bishop(ChessTeam::Black);
        board->Piece(6,7) = new Knight(ChessTeam::Black);
        board->Piece(7,7) = new Rook  (ChessTeam::Black);
        for (int i = 0; i < 8; i++) board->Piece(i,6) = new Pawn(ChessTeam::Black);
        
        board->DebugPrint();
    }
    
    StandardVariant::~StandardVariant(void)
    {
        delete board;
    }
}