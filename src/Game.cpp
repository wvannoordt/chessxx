#include "Game.h"
#include "Screen.h"
namespace chessxx
{
    Game::Game(ChessVariant::ChessVariant variant)
    {
        rules = NULL;
        switch (variant)
        {
            case ChessVariant::Standard: { rules = new StandardVariant(); break; }
            default:
            {
                ChessError("Variant not implemented");
            }
        }
    }
    
    Game::~Game(void)
    {
        if (rules!=NULL) delete rules;
    }
}