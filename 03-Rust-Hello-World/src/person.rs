/// This struct represents a person with a name, surname, and age.
///
pub struct Person {
    name: String,
    surname: String,
    age: u32,
}

impl Person {
    pub fn create(name: String, surname: String, age: u32) -> Person {
        return Person {
            name: name,
            surname: surname,
            age,
        };
    }

    pub fn print(&self) {
        println!(
            "Name: {}, Surname: {}, Age: {}",
            self.name, self.surname, self.age
        );
    }
}
