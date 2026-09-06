import json

def calculate_average(numbers):
    total = 0

    for number in numbers:
        total += number

    return total / len(numbers)

def get_user_name(user_json):
    user = json.loads(user_json)
    return user["name"]

def find_user(users, user_id):
    for user in users:
        if user["id"] == user_id:
            return user

    return None

def process_scores(scores):
    average = calculate_average(scores)

    if average > 90:
        grade = "A"
    elif average > 80:
        grade = "B"
    elif average > 70:
        grade = "C"
    else:
        grade = "F"

    return grade

if __name__ == "__main__":
    scores = []
    print(calculate_average(scores))
