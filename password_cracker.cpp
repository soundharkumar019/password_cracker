#include <iostream>
#include <fstream>
#include <string>

bool try_password(const std::string& attempt, const std::string& target) {
    return attempt == target;
}

int main() {
    std::string target_password = "hunter2"; // Simulated password
    std::string wordlist_file = "wordlist.txt";
    std::ifstream wordlist(wordlist_file);

    if (!wordlist.is_open()) {
        std::cerr << "Failed to open wordlist file.\n";
        return 1;
    }

    std::string attempt;
    int tries = 0;

    while (std::getline(wordlist, attempt)) {
        tries++;
        if (try_password(attempt, target_password)) {
            std::cout << "[+] Password found: " << attempt << "\n";
            std::cout << "[*] Total attempts: " << tries << "\n";
            return 0;
        }
    }

    std::cout << "[-] Password not found in wordlist.\n";
    std::cout << "[*] Total attempts: " << tries << "\n";
    return 1;
}



wordlist.txt
123456
password
admin
qwerty
hunter2
letmein


#bash
./cracker


SAMPLE OUTPUT
[+] Password found: hunter2
[*] Total attempts: 5

