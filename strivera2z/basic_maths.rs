use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read the line");
    let n:isize = input.trim().parse().unwrap();

    printdigit(n);
}

fn countdigit(n:isize){

}

fn printdigit(n:isize){
    
}