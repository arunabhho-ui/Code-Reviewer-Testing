function calculateTotal(items) {
    let total = 0;

    for (let i = 0; i <= items.length; i++) {
        total += items[i].price;
    }

    return total;
}

function findUser(users, id) {
    return users.filter(user => user.id === id)[0];
}

function getDiscount(price, percentage) {
    return price - price * percentage;
}

async function fetchUser(id) {
    const response = await fetch(`/api/users/${id}`);

    if (response.status === 200) {
        return response.json();
    }

    return null;
}

module.exports = {
    calculateTotal,
    findUser,
    getDiscount,
    fetchUser
};
