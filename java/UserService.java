import java.util.List;

public class UserService {

    public static double calculateAverage(List<Integer> numbers) {
        int total = 0;

        for (int number : numbers) {
            total += number;
        }

        return total / numbers.size();
    }

    public static String findUserName(List<User> users, int id) {
        for (User user : users) {
            if (user.getId() == id) {
                return user.getName();
            }
        }

        return null;
    }

    public static boolean isAdult(int age) {
        if (age > 18) {
            return true;
        }

        return false;
    }

    public static void main(String[] args) {
        List<Integer> numbers = List.of();
        System.out.println(calculateAverage(numbers));
    }
}

class User {
    private int id;
    private String name;

    public User(int id, String name) {
        this.id = id;
        this.name = name;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }
}
