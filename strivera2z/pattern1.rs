use std::io;

fn main(){
    let mut input =String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read input");


    let n:i32 = input.trim().parse().unwrap();

    // println!("{n}");
    for _ in 0..n {
        for _ in 0..n {
            print!("*");
        } 
        println!("");
    }
}