use std::io;
// use std::intrinsics;
use std::mem;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Faild to read line");
    let n:i32 = input.trim().parse().unwrap();

    IsEven(n);
    printTable(n);
    println!("The sum of n is {}", findSum(n));
    println!("The sum formula is {}", findsumformula(n));
    println!("The sum of Square of n is {}", findSquareSum(n));
    println!("The sum of Square of n formula {}", findSquareFormula(n));
    let mut a = 3;
    let mut b = 5;
    println!("a: {} and b: {}", a, b);
    swapo(&mut a, &mut b);
    println!("a: {} and b: {}", a, b);

    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let mut iter = input.split_whitespace();

    let mut iter = input.split_whitespace();
    let n: i32 = iter.next().unwrap().parse().unwrap();
    let m: i32 = iter.next().unwrap().parse().unwrap();

    println!("The closest Number to {} is {} which is divisble by {}", n, closestNumber(n, m), m);

}


fn closestNumber(n:i32, m:i32) -> i32 {
    let mut closest:i32 = 0;
    let mut minDistance:i32 = i32::MAX;
    for i in (n - m.abs())..=(n + m.abs()) {
        if i%m == 0 {
            if (i-n).abs() <= minDistance {
                if i.abs() > closest.abs() {
                    closest = i;
                }
                minDistance = (i-n).abs();
            }
        }
    }
    closest
}

fn swapo<T> (a:&mut T, b:&mut T){
    mem::swap(a,b);
}

// fn swapo<'a, T> (a:&'a mut T, b:&'a mut T){
//     let temp = *a;
//     *a = *b;
//     *b = temp;
// }

// fn swapo<T>(x:&mut T, y:&mut T){
//     unsafe {
//         intrinsics::typed_swap_nonoverlapping(x, y);
//     }
// }


fn findSquareFormula(n:i32) -> i64{
    let n = n as i64;
    ((n*(n+1)/2)*((2*n) + 1))/3
}

fn findSquareSum(n:i32)-> i64{
    let mut sum:i64 =0;
    for i in 1..=n{
        sum += i as i64 * i as i64;
    }
    sum
}


fn findSum(n:i32)->i32 {
    let mut sum:i32 = 0;
    for i in 1..=n{
        sum +=i;
    }

    sum
}

fn findsumformula(n:i32)-> i64{
    let n = n as i64;
    n*(n+1)/2
}


fn printTable(n:i32){
    for i in 1..11 {
        println!("{} * {} = {}", n, i, n*i);
    }
}

fn IsEven(n:i32){
    if n & 1 == 0 {
        println!("Even");
    }else{
        println!("Odd");
    }
}