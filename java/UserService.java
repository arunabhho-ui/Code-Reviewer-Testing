import java.util.List;

public class UserService {

    /**
     * Calculates the average of a list of integers.
     *
     * @param numbers the list of integers; may be empty or null
     * @return the average as a double; 0.0 if the list is empty or null
     */
    public static double calculateAverage(List<Integer> numbers) {
        // Guard against null or empty collections to avoid division by zero.
        if (numbers == null || numbers.isEmpty()) {
            return 0.0;
        }

        double total = 0.0;
        for (int number : numbers) {
            total += number;
        }

        // Perform floating‑point division to preserve fractional part.
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