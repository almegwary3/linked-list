# Contact Book Program

# 1. Setup Data
contacts = {
    "Ali": "01012345678",
    "Sara": "01234567890"
}

# 2. Functions
def view_contacts():
    if not contacts:
        print("No contacts found.")
    else:
        for name, phone in contacts.items():
            print(f"{name} : {phone}")

def add_contact():
    name = input("Enter contact name: ")
    phone = input("Enter phone number: ")
    contacts[name] = phone
    print(f"Contact '{name}' added successfully!")

def search_contact():
    name = input("Enter name to search: ")
    if name in contacts:
        print(f"{name} : {contacts[name]}")
    else:
        print("Contact not found.")

# 3. Main Menu (Loop)
while True:    print("\n=== Contact Book ===")
    print("1. View all contacts")
    print("2. Add new contact")
    print("3. Search for a contact")
    print("4. Exit")

    choice = input("Enter your choice (1-4): ")

    if choice == "1":
        view_contacts()
    elif choice == "2":
        add_contact()
    elif choice == "3":
        search_contact()
    elif choice == "4":
        print("Goodbye!")
        break
    else:
        print("Invalid choice. Please enter 1-4.")
