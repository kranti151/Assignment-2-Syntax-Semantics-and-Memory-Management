public class MemoryDemo {
    public static void main(String[] args) {
        // Allocate an array object on the heap
        int[] numbers = new int[]{1, 2, 3, 4, 5};

        int sum = calculateSum(numbers);
        System.out.println("Sum in Java: " + sum);

        // Hint GC to collect (not guaranteed immediately)
        numbers = null;
        System.gc();
    }

    static int calculateSum(int[] arr) {
        int total = 0;
        for (int num : arr) {
            total += num;
        }
        return total;
    }
}
