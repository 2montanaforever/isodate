#include <ctime>
#include <iostream>

int main(){
    time_t now;
    time(&now);
    char buf[sizeof "0000-00-00T00:00:00Z"];
    strftime(buf, sizeof buf, "%Y-%m-%dT%H:%M:%SZ", gmtime(&now));
    std::cout << buf << "\n";
    return 0;
}