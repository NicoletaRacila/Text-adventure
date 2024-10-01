#include "Player.hpp"

Player::Player(const std::string& name) : name(name) {}

std::string Player::getName() const {
    return name;
}

void Player::addItem(const std::string& item) {
    inventory.push_back(item);
}

void Player::showInventory() const {
    std::cout << "Inventory: ";
    for (const auto& item : inventory) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}
