use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n:u8 = input.trim().parse().unwrap();

    printpattern1(n);
    printpattern2(n);
    printpattern3(n);
    printpattern4(n);
    printpattern5(n);
    printpattern6(n);
    printpattern7(n);
    printpattern8(n);
    printpattern9(n);
    printpattern10(n);
    printpattern11(n);
    printpattern12(n);
    printpattern13(n);
    printpattern14(n);
    printpattern15(n);
    printpattern16(n);
}

fn printpattern1(n:u8){
    for _ in 0..n {
        for _ in 0..n {
            print!("*");
        } 
        println!("");
    }
}
fn printpattern2(n:u8){
    for i in 0..n {
        for _ in 0..=i {
            print!("*");
        }
        println!();
    }    
}
fn printpattern3(n:u8){
    for i in 0..n{
        for j in 0..=i {
            print!("{}",j+1);
        }
        println!();
    }
}
fn printpattern4(n:u8){
    for i in 1..=n {
        for _ in 0..i{
            print!("{i}");
        }
        println!();
    }
}
fn printpattern5(n:u8){
    for i in (0..n).rev() {
        for _ in 0..=i {
            print!("*");
        }
        println!();
    }
}
fn printpattern6(n:u8){
    for i in 1..=n{
        for j in 1..=(n-i+1) {
            print!("{j}");
        }
        println!();
    }
}
fn printpattern7(n:u8){
    for i in 0..n {
        for _ in 0..(n-i){
            print!(" ");
        }
        for _ in 0..((2*i)+1) {
            print!("*");
        }
        for _ in 0..(n-i){
            print!(" ");
        }
        println!();
    }
}
fn printpattern8(n:u8){
    for i in (0..n).rev() {
        for _ in 0..(n-i){
            print!(" ");
        }
        for _ in 0..((2*i)+1) {
            print!("*");
        }
        for _ in 0..(n-i){
            print!(" ");
        }
        println!();
    }
}
fn printpattern9(n:u8){
    for i in 0..(2*n) {
        let mut io = i;
        if i > n-1 {
            io = i - 2*(i%n) -1;
        }
        for _ in 0..(n-io){
            print!(" ");
        }
        for _ in 0..((2*io)+1) {
            print!("*");
        }
        for _ in 0..(n-io){
            print!(" ");
        }
        println!();

    }
}
fn printpattern10(n:u8){
    for i in 0..((2*n)-1){
        let mut io=i;
        if io>n-1 {
            io = (2*n) - i -2;
        }
        for _ in 0..=io {
            print!("*");
        }
        println!();
    }
}
fn printpattern11(n:u8){
    let mut status = 1;
    // println!("{status}");
    for i in 0..n {
        for _ in 0..=i {
            print!("{status} ");
            if status == 0 {
                status = 1;
            }else{
                status = 0;
            }
        }
        println!();
    }
}
fn printpattern12(n:u8){
    for i in 1..=n {
        for j in 1..=i {
            print!("{}",j);
        }
        for j in 1..=(2*(n-i)){
            print!(" ");
        }
        for j in (1..=i).rev() {
            print!("{}",j);
        }
        println!();
    }
}
fn printpattern13(n:u8){
    let mut val = 1;
    for i in 0..n {
        for _ in 0..=i {
            print!("{val} ");
            val+=1;
        }
        println!();
    }
}
fn printpattern14(n:u8){
    let val = 'A';
    for i in 0..n{
        for j in 0..=i {
            let next = ((val as u8) + j) as char;
            print!("{next}");
        }
        println!();
    }
}
fn printpattern15(n:u8){
    let val = 'A';
    for i in 0..n{
        for j in 0..=(n-1-i) {
            let next = ((val as u8) + j) as char;
            print!("{next}");
        }
        println!();
    }
}
fn printpattern16(n:u8){
    let val = 'A';
    for i in 0..n{
        let next = ((val as u8) + i) as char;
        for j in 0..=i {
            print!("{next}");
        }
        println!();
    }
}