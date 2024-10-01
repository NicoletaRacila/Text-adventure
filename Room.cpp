#include "Room.hpp"

Room::Room(const std::string& description) : description(description) {}

void Room::addOption(const std::string& optionText, int nextRoom) {
    options.emplace_back(optionText, nextRoom);
}

std::string Room::getDescription() const {
    return description;
}

std::vector<std::pair<std::string, int>> Room::getOptions() const {
    return options;
}

