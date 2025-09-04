#include <iostream>
#include <string>

// Define the URL class
class URL {
private:
    std::string protocol;       /* Store the protocol (e.g., "http") */
    std::string resource;       /* Store the resource (e.g., "www.example.com/index.html") */

public:
    URL(const std::string& prot, const std::string& res) {
        protocol = prot;
        resource = res;
    }

    void display() const {
        std::cout << protocol << "://" << resource << std::endl;
    }
};

int main() {
    URL url("http", "www.example.com/index.html");

    url.display();

    return 0;
}