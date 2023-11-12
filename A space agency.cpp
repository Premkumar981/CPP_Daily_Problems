#include <iostream>

template <typename T>
bool checkWeather(T weather) {
    if (weather >= 0 && weather <= 69) {
        std::cout << "Weather conditions are favorable for the launch." << std::endl;
        return true;
    } else if (weather < 0 || weather >= 70) {
        std::cout << "Weather conditions are not suitable for the launch. Launch postponed." << std::endl;
        return false;
    }
}

template <typename T>
bool runPreLaunchTests(T) {
    std::cout << "Pre-launch tests are successful." << std::endl;
    return true;
}

void fuelRocket() {
    std::cout << "Rocket has been fueled up." << std::endl;
}

template <typename T>
bool performFinalChecks(T) {
    std::cout << "Final checks are complete." << std::endl;
    return true;
}

void launchSatellite() {
    std::cout << "Satellite launch successful!" << std::endl;
}

int main() {
    int weather;
    std::cin >> weather;
    
    if (checkWeather(weather)) {
        runPreLaunchTests(weather);
        fuelRocket();
        performFinalChecks(weather);
        launchSatellite();
    }
    
    return 0;
}
