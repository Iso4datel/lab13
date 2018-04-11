#include <print.hpp>
#include <cstdlib>

int main(int argc, char** argv) {
std::string text;
while(std::cin >> text) {

std::ofstream out(log_path, std::ios_base::app);
std::string log_path = std::getenv("LOG_PATH");
print(text, out);
out << std::endl;
}
}
