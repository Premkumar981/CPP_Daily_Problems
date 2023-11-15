#include <iostream>
#include <vector>

std::vector<int> removeElement(std::vector<int> patients, int target) {
    std::vector<int> result;
    for (int i = 0; i < patients.size(); i++) {
        if (patients[i] != target) {
            result.push_back(patients[i]);
        }
    }
    return result;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> patients(N);
    for (int i = 0; i < N; i++) {
        std::cin >> patients[i];
    }
    int M;
    std::cin >> M;
    std::vector<int> updatedPatients = removeElement(patients, M);
    for (int i = 0; i < updatedPatients.size(); i++) {
        std::cout << updatedPatients[i] << " ";
    }
    return 0;
}

