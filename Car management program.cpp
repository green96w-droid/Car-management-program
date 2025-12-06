#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ---- Class Car ----
class Car {
public:
    int id;
    string model;
    int year;

    Car(int id_, string model_, int year_)
        : id(id_), model(model_), year(year_) {}

    void print() const {
        cout << "Car ID: " << id
             << ", Model: " << model
             << ", Year: " << year << endl;
    }
};

// ---- Class Garage ----
class Garage {
private:
    vector<Car> cars;
    int nextId = 1;

public:
    void addCar(string model, int year) {
        cars.push_back(Car(nextId++, model, year));
    }

    void showCars() const {
        cout << "\n--- Cars in Garage ---\n";
        for (const auto& c : cars) c.print();
    }
};

// ---- Main ----
int main() {
    Garage g;

    g.addCar("Toyota", 2010);
    g.addCar("BMW", 2022);
    g.addCar("Kia", 2018);

    g.showCars();

    return 0;
}