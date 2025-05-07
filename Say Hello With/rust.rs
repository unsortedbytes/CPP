use std::io;

fn main(){

    //println!("Hello world");
    
    let mut input_string = String::new();
    io::stdin().read_line(&mut input_string).expect("Failed to read user input");
    println!("Hello {}", input_string);
}
