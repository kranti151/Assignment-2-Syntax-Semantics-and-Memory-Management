fn main() {
    // Allocate a vector on the heap
    let numbers = vec![1, 2, 3, 4, 5];

    // Borrow reference to calculate sum
    let sum = calculate_sum(&numbers);

    println!("Sum in Rust: {}", sum);
} 

fn calculate_sum(arr: &Vec<i32>) -> i32 {
    let mut total = 0;
    for num in arr {
        total += num;
    }
    total
}
