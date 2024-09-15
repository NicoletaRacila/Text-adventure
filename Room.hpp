#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <vector>
#include <utility>

class Room {
public:
    Room(const std::string& description);
    void addOption(const std::string& optionText, int nextRoom); 
    std::string getDescription() const;  
    std::vector<std::pair<std::string, int>> getOptions() const; 
    
private:
    std::string description; 
    std::vector<std::pair<std::string, int>> options;  
};

#endif // ROOM_HPP
