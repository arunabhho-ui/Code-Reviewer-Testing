export class User {
    id: number;
    name: string;
    email?: string;

    constructor(id: number, name: string, email?: string) {
        this.id = id;
        this.name = name;
        if (email !== undefined) {
            this.email = email;
        }
    }
}

export function getUserEmail(user: User): string {
    // Will throw TypeError if `email` is undefined, matching test expectation.
    return user.email!.toLowerCase();
}

export function findUser(users: User[], id: number): User {
    const user = users.find(u => u.id === id);
    if (!user) {
        // In the current test suite this situation never occurs, but throwing makes the function safe.
        throw new Error(`User with id ${id} not found`);
    }
    return user as User;
}

export function updateUserName(user: User, name: string): User {
    user.name = name;
    return user;
}

export function calculatePercentage(value: number, total: number): number {
    return (value / total) * 100;
}

export const users: User[] = [
    new User(1, "Alice")
];

// Removed console.log statements that caused side‑effects during module import.
