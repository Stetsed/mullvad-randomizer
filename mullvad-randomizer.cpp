#include <iostream>
#include <string>
#include <array>
#include <random>
#include <unistd.h>

int main() {
  // Array of possible answers
  std::array<std::string, 7> answers = {"ch", "nl", "no", "se", "pl", "gb", "lu"};
  
  // Random number generator
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> dist(0, answers.size() - 1);
  
  // Pick two random answers
  int answer1 = dist(gen);
  int answer2 = dist(gen);
  
  // Make sure the answers are different
  while (answer1 == answer2) {
    answer2 = dist(gen);
  }
  
  // Construct the commands
  std::string command1 = "bash -c 'mullvad relay set location " + answers[answer1] + "'";
  std::string command2 = "bash -c 'mullvad relay set tunnel wireguard --entry-location " + answers[answer2] + "'";
  
  // Execute the commands using the system function
  system(command1.c_str());
  system(command2.c_str());
  
  return 0;
}