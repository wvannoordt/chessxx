#ifndef CHESSXX_CHESS_PIECE_H
#define CHESSXX_CHESS_PIECE_H
#include "Screen.h"
#include "ChessTeams.h"
namespace chessxx
{
    class ChessPiece
    {
        public:
            ChessPiece(int team_in, int materialValue_in, std::string name_in)
            {
                team = team_in;
                materialValue = materialValue_in;
                isKing = false;
                name = name_in;
            }
            
            std::string SimpleDisplayString(void)
            {
                return BufStr(name + "_" + std::to_string(team), ' ', 12);
            }
            
            ~ChessPiece(void) {}
        protected:
            int team;
            int materialValue;
            bool isKing;
            std::string name;
    };
}

#endif