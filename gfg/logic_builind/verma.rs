use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let t:i32 = input.trim().parse().unwrap();
    // println!("{}",t);

    for _ in 0..t {
        // solveNextGrestestNumber();
        // solveOptNGN();
        // solveOptNGL();
        // solveOptNSL();
        // stockSpanProblem();
        maxAreaHistogram();
    }
}

fn maxAreaHistogram(){
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

    let mut vr:Vec<isize> = Vec::new();
    let mut sr:Vec<usize> = Vec::new();

    for i in (0..n).rev() {
        if sr.len() == 0 {
            vr.push(n as isize);
        }else if sr.len()>0 && arr[*sr.last().unwrap()]<arr[i]{
            vr.push(*sr.last().unwrap() as isize);
        }else if sr.len()>0 && arr[*sr.last().unwrap()]>=arr[i]{
            while sr.len()>0 && arr[*sr.last().unwrap()]>=arr[i]{
                sr.pop();
            }

            if sr.len() == 0 {
                vr.push(n as isize);
            }else{
                vr.push(*sr.last().unwrap() as isize);
            }
        }

        sr.push(i);
    }

    vr.reverse();

    let mut vl:Vec<isize> = Vec::new();
    let mut sl:Vec<usize> = Vec::new();

    for i in 0..n {
        if sl.len() == 0 {
            vl.push(-1);
        }else if sl.len()>0 && arr[*sl.last().unwrap()]<arr[i]{
            vl.push(*sl.last().unwrap() as isize);
        }else if sl.len()>0 && arr[*sl.last().unwrap()]>=arr[i]{
            while sl.len()>0 && arr[*sl.last().unwrap()]>=arr[i]{
                sl.pop();
            }

            if sl.len() == 0 {
                vl.push(-1);
            }else{
                vl.push(*sl.last().unwrap() as isize);
            }
        }

        sl.push(i);
    }

    let mut area:Vec<isize> = Vec::new();
    for i in 0..n {
        area.push((arr[i] as isize)*(vr[i] -vl[i] -1));
    }
    let maxi  = *area.iter().max().unwrap();
    println!("{:?}",maxi);
}

fn stockSpanProblem(){
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

    let mut v:Vec<usize> = Vec::new();
    let mut s:Vec<usize> = Vec::new();

    for i in 0..n {
        if s.len() == 0 {
            v.push(i+1);
        }else if s.len()>0 && arr[*s.last().unwrap()]>arr[i] {
            v.push(i- *s.last().unwrap());
        }else if s.len()>0 && arr[*s.last().unwrap()]<=arr[i] {
            while s.len()>0 && arr[*s.last().unwrap()]<= arr[i]{
                s.pop();
            }
            if s.len()==0 {
                v.push(i+1);
            }else{
                v.push(i- *s.last().unwrap());
            }
        }
        s.push(i);
    }

    println!("{:?}",arr);
    println!("{:?}", v);
}


fn solveOptNSL(){
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
        }else if s.len()>0 && *s.last().unwrap()<arr[i]{
            v.push(*s.last().unwrap());
        }else if s.len()>0 && *s.last().unwrap()>=arr[i] {
            while s.len()>0 && *s.last().unwrap() >= arr[i]{
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