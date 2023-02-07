
#include <iostream>
#include <vector>

class Employee {
  public:
    int id;
    int age;
    double salary;

  public:
    Employee(int id, int age, double salary) : id(id), age(age), salary(salary) {}

    int getId() const { return id; }
    int getAge() const { return age; }
    double getSalary() const { return salary; }
};

class EmployeeCollection {
  private:
    std::vector<Employee> employees;

  public:
    void addEmployee(const Employee& employee) {
        employees.push_back(employee);
    }

    void printAll() const {
        for (const Employee& employee : employees) {
            std::cout << "ID: " << employee.getId() << ", Age: " << employee.getAge()
                      << ", Salary: " << employee.getSalary() << std::endl;
        }
    }
};

int main() {
    EmployeeCollection collection;
    collection.addEmployee(Employee(1, 25, 30000));
    collection.addEmployee(Employee(2, 32, 40000));
    collection.addEmployee(Employee(3, 40, 50000));
    collection.printAll();

    return 0;
}

