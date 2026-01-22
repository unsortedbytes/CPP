use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let t:i32 = input.trim().parse().unwrap();
    // println!("{}",t);

    for _ in 0..t {
        // solveNextGrestestNumber();
        // solveOptNGN();
        solveOptNGL();
    }
}

fn solveOptNGL(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n:usize = input.trim().parse().unwrap();
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let mut iter = input.split_whitespace();
    let mut arr = Vec::with_capacity(n);
    for _ in 0..n {
        arr.push(iter.next().unwrap().parse::<i32>().unwrap());
    }

    let mut v:Vec<i32> = Vec::new();
    let mut s:Vec<i32> = Vec::new();

    for i in 0..n {
        if s.len() == 0 {
            v.push(-1);
        }else if s.len() > 0 && *s.last().unwrap()> arr[i]{
            v.push(*s.last().unwrap());
        }else if s.len()> 0 && *s.last().unwrap()<= arr[i]{
            while s.len()>0 && *s.last().unwrap()<=arr[i]{
                s.pop();
            }

            if s.len() == 0{
                v.push(-1);
            }else{
                v.push(*s.last().unwrap());
            }
        }

        s.push(arr[i]);
    }

    println!("{:?}",arr);
    println!("{:?}",v);
}

fn solveOptNGN(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n:usize = input.trim().parse().unwrap();
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let mut iter = input.split_whitespace();
    let mut arr = Vec::with_capacity(n);
    for _ in 0..n{
        arr.push(iter.next().unwrap().parse::<i32>().unwrap());
    }

    let mut v:Vec<i32> = Vec::new();
    let mut s:Vec<i32> = Vec::new();

    for i in (0..n).rev() {
        if s.len() == 0 {
            v.push(-1);
        }else if s.len() > 0 && *s.last().unwrap() > arr[i] {
            v.push(*s.last().unwrap());
        }else if s.len() > 0 && *s.last().unwrap() <= arr[i] {
            while s.len() > 0 && *s.last().unwrap() <= arr[i] {
                s.pop();
            }

            if s.len() == 0 {
                v.push(-1);
            }else {
                v.push(*s.last().unwrap());
            }
        }

        s.push(arr[i]);
    }
    println!("{:?}", arr);
    v.reverse();
    println!("{:?}", v);

}

fn solveNextGrestestNumber(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n:usize= input.trim().parse().unwrap();
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let mut iter = input.split_whitespace();
    let mut arr = Vec::with_capacity(n);
    for _ in 0..n {
        arr.push(iter.next().unwrap().parse::<i32>().unwrap());
    }
    println!("{:?}", arr);
    let mut hsh = vec![-1; n];

    for i in 0..n {
        for j in (i+1)..n{
            if arr[j] > arr[i] {
                hsh[i] = arr[j];
                break;
            }
        }
    }

    println!("{:?}", hsh);
}