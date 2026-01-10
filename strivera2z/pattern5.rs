use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n:i32 = input.trim().parse().unwrap();

    for i in (0..n).rev() {
        for _ in 0..=i {
            print!("*");
        }
        println!();
    }
}