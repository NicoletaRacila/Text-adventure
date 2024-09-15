#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <vector>

class Player {
public:
    Player(const std::string& name);  
    std::string getName() const; 
    void addItem(const std::string& item); 
    void showInventory() const;  
    
private:
    std::string name; 
    std::vector<std::string> inventory; 
};

#endif
