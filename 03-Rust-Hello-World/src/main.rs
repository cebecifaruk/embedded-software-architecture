mod person;

use person::Person;

fn main() {
    let alice = Person::create(String::from("Alice"), String::from("Smith"), 30);

    let bob = Box::new(Person::create(
        String::from("Bob"),
        String::from("Smith"),
        25,
    ));

    alice.print();

    bob.print();
}
