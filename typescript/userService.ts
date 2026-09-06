interface User {
    id: number;
    name: string;
    email?: string;
}

function getUserEmail(user: User): string {
    return user.email.toLowerCase();
}

function findUser(users: User[], id: number): User {
    const user = users.find(user => user.id === id);

    return user;
}

function updateUserName(user: User, name: string): User {
    user.name = name;

    return user;
}

function calculatePercentage(value: number, total: number): number {
    return (value / total) * 100;
}

const users: User[] = [
    { id: 1, name: "Alice" }
];

console.log(getUserEmail(users[0]));
console.log(calculatePercentage(10, 0));
