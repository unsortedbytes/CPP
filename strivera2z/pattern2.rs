use std::io;

fn main(){
    let mut input = String::new();

    io::stdin().read_line(&mut input).expect("Failed to read linne");

    let n:i32 = input.trim().parse().unwrap();

    // println!("{}",n);
    for i in 0..n {
        for _ in 0..=i {
            print!("*");
        }
        println!();
    }
}