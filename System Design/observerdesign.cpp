// Amazon Product Availability Notifications

// To design a system that notifies users when a product becomes available on Amazon's
// website, you can use the Observer design pattern. This pattern allows multiple objects to be notified of changes in the state of a subject.

// Here's a low-level design using C++ and the Observer design pattern:


#include <bits/stdc++.h>
using namespace std;

// Observer Interface:
// Define an interface that all observers must implement.
// This interface should have a method to update the observer with the availability status of the product.

class Observer {
public:
	virtual void update(bool available) = 0;
};

// Subject Class (Product):
// Maintain a list of observers (users) interested in the product.
// Provide methods to add, remove, and notify observers.
// Maintain the availability status of the product.
// When the availability status changes, notify all registered observers.

class Product {
private:
	vector<Observer*> observers;
	bool available;
public:
	void addObserver(Observer* observer) {
		observers.push_back(observer);
	}

	void removeObserver(Observer* observer) {
		observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
	}

	void notifyObserver() {
		for (Observer* obs : observers) {
			obs->update(available);
		}
	}

	void setAvailability(bool status) {
		available = status;
		notifyObserver();
	}

};


// Concrete Observer Class (User): -- concrete observer classs/base class
// Implement the Observer interface to receive notifications.  -- interface (Base class)
// Define an update method that displays a notification to the user.

class User: public Observer {
private:
	string username;
public:
	User(string name)
	{
		username = name;
	}
	void update(bool available) override {
		if (available)
			cout << "Product is available on amazon" << username << endl;
	}

};

// Usage:
// Create instances of the Product and User classes.
// Register users as observers of the product.
// When the availability of the product changes, observers will be notified.

int main()
{
	Product product;
	User user1("Himanshu"); User user2("Shubham");
	product.addObserver(&user1); product.addObserver(&user2);
	product.setAvailability(true);
	product.removeObserver(&user1);
	product.setAvailability(true);
	return 0;
}



// The explanation of pure virtual fns and abstract class
// The statement virtual void update(bool available) = 0; is a function declaration in the Observer class.
//  Here's an explanation of what it means:

// virtual keyword: It specifies that the update function can be overridden in derived classes.
// This enables polymorphism, allowing different derived classes to provide their own implementation of the update function.
// void return type: It indicates that the update function does not return a value.
// update function name: It is the name of the function.
// (bool available): It declares a parameter of type bool named available.
// This parameter allows passing information to the update function about the availability status of the product.
// = 0: It denotes that the update function is a pure virtual function.
// A pure virtual function has no implementation in the base class and must be overridden in derived classes.
// The = 0 at the end of the function declaration makes the Observer class an abstract class, which means you
// cannot create objects of the Observer class directly but can only use it as a base class for deriving other classes.

// override keyword: It explicitly tells the compiler that this function is intended to override a
//  virtual function from the base class.