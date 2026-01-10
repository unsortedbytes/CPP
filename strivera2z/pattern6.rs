use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n:i32 = input.trim().parse().unwrap();

    for i in 1..=n{
        for j in 1..=(n-i+1) {
            print!("{j}");
        }
        println!();
    }
}