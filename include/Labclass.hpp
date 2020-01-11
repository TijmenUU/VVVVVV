#ifndef LABCLASS_H
#define LABCLASS_H

#include <Game.hpp>
#include <Entity.hpp>

#include <vector>
#include <string>

class labclass
{
public:
    std::vector<std::string>  loadlevel(int rx, int ry , Game& game, entityclass& obj);

    std::string roomname;
    int coin, rcol;
};
#endif /* LABCLASS_H */
